/*
 * XREFs of NtUserGetWindowDisplayAffinity @ 0x1C01FC4D0
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     GetDisplayAffinity @ 0x1C0247B2C (GetDisplayAffinity.c)
 */

__int64 __fastcall NtUserGetWindowDisplayAffinity(__int64 a1, _DWORD *a2)
{
  int v4; // edi
  __int64 v5; // rax
  ULONG64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rdx
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v12 = 0;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( (unsigned int)IsTopLevelWindow(v5) )
    {
      GetDisplayAffinity(v9, &v12);
      v4 = 1;
      v6 = MmUserProbeAddress;
      v10 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v10 = (_DWORD *)MmUserProbeAddress;
      *v10 = *v10;
      *a2 = v12;
    }
    else
    {
      UserSetLastError(87LL, v7, v8);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}

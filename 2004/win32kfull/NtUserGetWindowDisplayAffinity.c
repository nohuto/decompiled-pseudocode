/*
 * XREFs of NtUserGetWindowDisplayAffinity @ 0x1C01FD340
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     GetDisplayAffinity @ 0x1C02490DC (GetDisplayAffinity.c)
 */

__int64 __fastcall NtUserGetWindowDisplayAffinity(__int64 a1, _DWORD *a2)
{
  int v4; // edi
  __int64 v5; // rax
  _DWORD *v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v13 = 0;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( (unsigned int)IsTopLevelWindow(v5) )
    {
      GetDisplayAffinity(v11, &v13);
      v4 = 1;
      v7 = MmUserProbeAddress;
      v6 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v6 = (_DWORD *)MmUserProbeAddress;
      *v6 = *v6;
      *a2 = v13;
    }
    else
    {
      UserSetLastError(87LL, v9, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v4;
}

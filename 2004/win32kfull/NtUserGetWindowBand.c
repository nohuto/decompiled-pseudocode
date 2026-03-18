/*
 * XREFs of NtUserGetWindowBand @ 0x1C00FC570
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetWindowBand(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx

  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v7 = 0;
  if ( v6 )
  {
    if ( a2 )
    {
      v4 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = *v4;
      v5 = *(unsigned int *)(*(_QWORD *)(v6 + 40) + 236LL);
      *a2 = v5;
      v7 = 1;
    }
    else
    {
      UserSetLastError(87LL, (__int64)v4, v6);
    }
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return v7;
}

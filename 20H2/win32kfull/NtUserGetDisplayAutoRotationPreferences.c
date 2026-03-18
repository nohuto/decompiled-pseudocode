/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1C01F90E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1)
{
  _DWORD *v2; // rdx
  int v4; // [rsp+58h] [rbp+10h]

  EnterSharedCrit(0LL, 1LL);
  v4 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424) + 920LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (_DWORD *)MmUserProbeAddress;
  *v2 = *v2;
  *a1 = v4;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress);
  return 1LL;
}

/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1C01F9F50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1)
{
  __int64 v2; // r8
  _DWORD *v3; // rdx
  int v5; // [rsp+58h] [rbp+10h]

  EnterSharedCrit(0LL, 1LL);
  v5 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 920LL);
  v3 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v3 = (_DWORD *)MmUserProbeAddress;
  *v3 = *v3;
  *a1 = v5;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress, v3, v2);
  return 1LL;
}

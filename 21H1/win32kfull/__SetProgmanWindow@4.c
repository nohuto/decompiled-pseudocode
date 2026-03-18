/*
 * XREFs of __SetProgmanWindow@4 @ 0x1A6C17
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 *     _NtUserCallHwndSafe@8 @ 0x99D78 (_NtUserCallHwndSafe@8.c)
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 *     _NtUserCallHwndOpt@8 @ 0xE81A0 (_NtUserCallHwndOpt@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall _SetProgmanWindow(int a1)
{
  int v1; // edx
  int *v2; // eax
  int v4; // eax

  v1 = 0;
  v2 = *(int **)(_gptiCurrent + 252);
  if ( a1 && v2[25] )
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
  else
  {
    v4 = *v2;
    if ( a1 )
      v1 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(v4 + 20) = v1;
    HMAssignmentLock(a1, v1);
    return 1;
  }
}

/*
 * XREFs of __IsQueueAttached@0 @ 0x1421B4
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

BOOL __stdcall _IsQueueAttached()
{
  PKTHREAD CurrentThread; // eax

  CurrentThread = KeGetCurrentThread();
  return *(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 236) + 288) > 1u;
}

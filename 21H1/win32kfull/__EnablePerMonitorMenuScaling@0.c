/*
 * XREFs of __EnablePerMonitorMenuScaling@0 @ 0x1978AC
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 */

int __stdcall _EnablePerMonitorMenuScaling()
{
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
    return 0;
  *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 464) |= 0x100000u;
  return 1;
}

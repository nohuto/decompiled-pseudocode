/*
 * XREFs of __DisableProcessWindowsGhosting@0 @ 0xCCA56
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _DisableProcessWindowsGhosting()
{
  int CurrentProcessWin32Process; // eax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  *(_DWORD *)(CurrentProcessWin32Process + 8) |= 0x8000000u;
  return 1;
}

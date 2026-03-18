/*
 * XREFs of __DoInitMessagePumpHook@0 @ 0xB54F2
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _DoInitMessagePumpHook()
{
  ++*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 244) + 20);
  return 1;
}

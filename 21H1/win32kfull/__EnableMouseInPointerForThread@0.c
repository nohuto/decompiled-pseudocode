/*
 * XREFs of __EnableMouseInPointerForThread@0 @ 0xAEF18
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _EnableMouseInPointerForThread()
{
  *(_DWORD *)(_gptiCurrent + 688) |= 0x2000000u;
  return 1;
}

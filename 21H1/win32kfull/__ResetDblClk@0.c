/*
 * XREFs of __ResetDblClk@0 @ 0xB53B8
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _ResetDblClk()
{
  *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 92) = 0;
  return 1;
}

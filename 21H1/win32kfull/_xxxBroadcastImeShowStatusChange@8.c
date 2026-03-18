/*
 * XREFs of _xxxBroadcastImeShowStatusChange@8 @ 0x14F378
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
 *     ?xxxNotifyImeShowStatus@@YGXPAUtagWND@@@Z @ 0xC38A2 (-xxxNotifyImeShowStatus@@YGXPAUtagWND@@@Z.c)
 */

int __stdcall xxxBroadcastImeShowStatusChange(_DWORD *a1, int a2)
{
  if ( (*(_WORD *)(a1[5] + 30) & 0x3FFF) == 0x2A9 )
  {
    gfIMEShowStatus = a2 != 0;
    xxxNotifyImeShowStatus(a1);
  }
  return 1;
}

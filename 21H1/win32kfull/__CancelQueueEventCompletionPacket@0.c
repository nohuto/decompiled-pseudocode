/*
 * XREFs of __CancelQueueEventCompletionPacket@0 @ 0x1420D4
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserMsgWaitForMultipleObjectsEx@20 @ 0x82980 (_NtUserMsgWaitForMultipleObjectsEx@20.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _CancelQueueEventCompletionPacket()
{
  if ( ZwCancelWaitCompletionPacket(*(_DWORD *)(_gptiCurrent + 828), 0) == 259 )
  {
    ZwCancelWaitCompletionPacket(*(_DWORD *)(_gptiCurrent + 828), 1);
    KeSetEvent(*(PRKEVENT *)(_gptiCurrent + 400), 1, 0);
  }
  return 1;
}

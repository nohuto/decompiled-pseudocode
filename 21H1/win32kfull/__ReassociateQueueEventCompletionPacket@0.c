/*
 * XREFs of __ReassociateQueueEventCompletionPacket@0 @ 0x1421D5
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserMsgWaitForMultipleObjectsEx@20 @ 0x82980 (_NtUserMsgWaitForMultipleObjectsEx@20.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _ReassociateQueueEventCompletionPacket()
{
  ZwAssociateWaitCompletionPacket(
    *(_DWORD *)(_gptiCurrent + 828),
    *(_DWORD *)(_gptiCurrent + 816),
    *(_DWORD *)(_gptiCurrent + 824),
    0,
    1,
    0,
    0,
    0);
  return 1;
}

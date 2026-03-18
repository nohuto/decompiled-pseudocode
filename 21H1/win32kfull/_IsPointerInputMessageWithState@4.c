/*
 * XREFs of _IsPointerInputMessageWithState@4 @ 0x439B4
 * Callers:
 *     _NtUserDispatchMessage@4 @ 0x45A6E (_NtUserDispatchMessage@4.c)
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _xxxRetrievePointerInputMessage@60 @ 0x15A7AB (_xxxRetrievePointerInputMessage@60.c)
 *     ?IsPointerQueuedMessageCoalescable@@YGHPAUtagQ@@PAUtagQMSG@@KKKK@Z @ 0x16F1B8 (-IsPointerQueuedMessageCoalescable@@YGHPAUtagQ@@PAUtagQMSG@@KKKK@Z.c)
 *     __QuerySendMessage@8 @ 0x1813B0 (__QuerySendMessage@8.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 */

BOOL IsPointerInputMessageWithState()
{
  int v0; // ecx

  return IsPointerInputMessage() && v0 != 595;
}

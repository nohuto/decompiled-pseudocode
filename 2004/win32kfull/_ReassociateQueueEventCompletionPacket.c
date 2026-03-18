/*
 * XREFs of _ReassociateQueueEventCompletionPacket @ 0x1C01D3B10
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C0091A10 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     <none>
 */

__int64 ReassociateQueueEventCompletionPacket()
{
  ZwAssociateWaitCompletionPacket(
    *(_QWORD *)(gptiCurrent + 1440LL),
    *(_QWORD *)(gptiCurrent + 1416LL),
    *(_QWORD *)(gptiCurrent + 1432LL),
    0LL,
    1LL,
    0,
    0LL,
    0LL);
  return 1LL;
}

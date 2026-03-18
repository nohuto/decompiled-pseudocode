/*
 * XREFs of _CancelQueueEventCompletionPacket @ 0x1C01D3A60
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C0091A10 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     <none>
 */

__int64 CancelQueueEventCompletionPacket()
{
  __int64 v0; // rdx

  if ( (unsigned int)ZwCancelWaitCompletionPacket(*(_QWORD *)(gptiCurrent + 1440LL), 0LL) == 259 )
  {
    LOBYTE(v0) = 1;
    ZwCancelWaitCompletionPacket(*(_QWORD *)(gptiCurrent + 1440LL), v0);
    KeSetEvent(*(PRKEVENT *)(gptiCurrent + 728LL), 1, 0);
  }
  return 1LL;
}

/*
 * XREFs of _CancelQueueEventCompletionPacket @ 0x1C01D2C50
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C004D6E0 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     <none>
 */

__int64 CancelQueueEventCompletionPacket()
{
  __int64 v0; // rdx

  if ( (unsigned int)ZwCancelWaitCompletionPacket(*(_QWORD *)(gptiCurrent + 1448LL), 0LL) == 259 )
  {
    LOBYTE(v0) = 1;
    ZwCancelWaitCompletionPacket(*(_QWORD *)(gptiCurrent + 1448LL), v0);
    KeSetEvent(*(PRKEVENT *)(gptiCurrent + 736LL), 1, 0);
  }
  return 1LL;
}

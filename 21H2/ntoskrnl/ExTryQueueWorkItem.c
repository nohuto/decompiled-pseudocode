/*
 * XREFs of ExTryQueueWorkItem @ 0x1402EEE50
 * Callers:
 *     PopFxRequestWorker @ 0x140358140 (PopFxRequestWorker.c)
 *     PopFxQueueWorkItem @ 0x1403B19D4 (PopFxQueueWorkItem.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1402EEE7C (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0LL);
}

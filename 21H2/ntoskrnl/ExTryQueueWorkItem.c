/*
 * XREFs of ExTryQueueWorkItem @ 0x14023BDA0
 * Callers:
 *     PopFxRequestWorker @ 0x140262BF0 (PopFxRequestWorker.c)
 *     PopFxQueueWorkOrder @ 0x140381658 (PopFxQueueWorkOrder.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x14023BDCC (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0LL);
}

/*
 * XREFs of ExTryQueueWorkItem @ 0x1402E05F0
 * Callers:
 *     PopFxRequestWorker @ 0x140284030 (PopFxRequestWorker.c)
 *     PopFxQueueWorkOrder @ 0x1403811A8 (PopFxQueueWorkOrder.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1402E061C (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0LL);
}

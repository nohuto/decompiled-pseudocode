/*
 * XREFs of ExTryQueueWorkItem @ 0x1402D4690
 * Callers:
 *     PopFxRequestWorker @ 0x140320720 (PopFxRequestWorker.c)
 *     PopFxQueueWorkOrder @ 0x140380F58 (PopFxQueueWorkOrder.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1402D46BC (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0LL);
}

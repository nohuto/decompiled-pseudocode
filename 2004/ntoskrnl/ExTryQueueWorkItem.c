/*
 * XREFs of ExTryQueueWorkItem @ 0x1402BCD60
 * Callers:
 *     PopFxRequestWorker @ 0x140350050 (PopFxRequestWorker.c)
 *     PopFxQueueWorkOrder @ 0x14037F228 (PopFxQueueWorkOrder.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1402BCA80 (ExpTryQueueWorkItem.c)
 */

char __fastcall ExTryQueueWorkItem(_QWORD *a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0);
}

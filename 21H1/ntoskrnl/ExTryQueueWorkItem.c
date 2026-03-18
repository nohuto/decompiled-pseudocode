/*
 * XREFs of ExTryQueueWorkItem @ 0x14022A0E0
 * Callers:
 *     PopFxRequestWorker @ 0x1403122C0 (PopFxRequestWorker.c)
 *     PopFxQueueWorkOrder @ 0x14037E838 (PopFxQueueWorkOrder.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x140229E00 (ExpTryQueueWorkItem.c)
 */

char __fastcall ExTryQueueWorkItem(_QWORD *a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0);
}

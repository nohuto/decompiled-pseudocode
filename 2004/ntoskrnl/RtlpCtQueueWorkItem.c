/*
 * XREFs of RtlpCtQueueWorkItem @ 0x140916274
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405891A0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}

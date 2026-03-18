/*
 * XREFs of CmpDelayFreeRMDpcRoutine @ 0x140360930
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void CmpDelayFreeRMDpcRoutine()
{
  ExQueueWorkItem(&CmpDelayFreeRMWorkItem, DelayedWorkQueue);
}

/*
 * XREFs of CmpDelayFreeRMDpcRoutine @ 0x1402D3870
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 */

void CmpDelayFreeRMDpcRoutine()
{
  ExQueueWorkItem(&CmpDelayFreeRMWorkItem, DelayedWorkQueue);
}

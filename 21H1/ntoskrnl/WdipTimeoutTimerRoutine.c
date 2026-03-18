/*
 * XREFs of WdipTimeoutTimerRoutine @ 0x140322530
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void WdipTimeoutTimerRoutine()
{
  ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
}

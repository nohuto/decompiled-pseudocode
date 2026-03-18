/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x14056EA50
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140C21590, DelayedWorkQueue);
}

/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x140579E80
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140C1E290, DelayedWorkQueue);
}

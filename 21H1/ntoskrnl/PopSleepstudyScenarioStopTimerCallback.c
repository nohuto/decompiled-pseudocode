/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x140579840
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140C1E490, DelayedWorkQueue);
}

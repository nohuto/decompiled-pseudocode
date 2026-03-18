/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x14057D8B0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140C1E370, DelayedWorkQueue);
}

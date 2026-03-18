/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x14056D2E0
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14071EB50 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140775C4C (PopEnforceResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x1408E90B0 (PopCoalescingNotify.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}

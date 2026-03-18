/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x1405698B0
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1406A723C (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140766C1C (PopEnforceResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x1408E3270 (PopCoalescingNotify.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}

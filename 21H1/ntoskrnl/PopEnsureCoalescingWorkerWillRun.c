/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x140569260
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14070E4E0 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x14076525C (PopEnforceResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x1408E1FF0 (PopCoalescingNotify.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}

/*
 * XREFs of PopExecutionRequiredTimeoutCallback @ 0x140565670
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

void PopExecutionRequiredTimeoutCallback()
{
  if ( _InterlockedIncrement(&PopExecutionRequiredWorkRequested) == 1 )
    ExQueueWorkItem(&PopExecutionRequiredTimeoutWorker, DelayedWorkQueue);
}

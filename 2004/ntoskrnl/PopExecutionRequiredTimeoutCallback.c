/*
 * XREFs of PopExecutionRequiredTimeoutCallback @ 0x14055FF80
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void PopExecutionRequiredTimeoutCallback()
{
  if ( _InterlockedIncrement(&PopExecutionRequiredWorkRequested) == 1 )
    ExQueueWorkItem(&PopExecutionRequiredTimeoutWorker, DelayedWorkQueue);
}

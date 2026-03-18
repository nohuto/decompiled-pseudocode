/*
 * XREFs of CmpLazyCommitDpcRoutine @ 0x1404E78D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void CmpLazyCommitDpcRoutine()
{
  if ( CmpLazyCommitWorkItemActive )
    ExQueueWorkItem(&CmpLazyCommitWorkItem, DelayedWorkQueue);
}

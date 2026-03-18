/*
 * XREFs of CmpArmDelayedCloseTimer @ 0x14033B4A8
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpAddToDelayedClose @ 0x1406E3324 (CmpAddToDelayedClose.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void CmpArmDelayedCloseTimer()
{
  if ( !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
    ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
}

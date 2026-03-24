/*
 * XREFs of CmpArmDelayedCloseTimer @ 0x1402AE508
 * Callers:
 *     CmpAddToDelayedClose @ 0x140693604 (CmpAddToDelayedClose.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 */

void CmpArmDelayedCloseTimer()
{
  if ( !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
    ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
}

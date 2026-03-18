/*
 * XREFs of CmpArmDelayedCloseTimer @ 0x1402FEBA8
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpAddToDelayedClose @ 0x1406C2DA4 (CmpAddToDelayedClose.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void CmpArmDelayedCloseTimer()
{
  if ( !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
    ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
}

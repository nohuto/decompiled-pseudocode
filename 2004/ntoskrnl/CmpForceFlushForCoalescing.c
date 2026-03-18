/*
 * XREFs of CmpForceFlushForCoalescing @ 0x140873790
 * Callers:
 *     CmpCoalescingCallback @ 0x1404E7CB0 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x14069FD40 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void CmpForceFlushForCoalescing()
{
  int v0; // eax

  if ( !BYTE1(NlsMbCodePageTag) )
  {
    if ( CmpWorkerDataInitialized )
    {
      v0 = CmpForceFlushPending;
      if ( !CmpForceFlushPending && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
        ExQueueWorkItem(&CmpForceFlushWorkItem, (WORK_QUEUE_TYPE)(v0 + 1));
    }
  }
}

/*
 * XREFs of CmpForceFlushForCoalescing @ 0x140881450
 * Callers:
 *     CmpCoalescingCallback @ 0x14053F590 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x14071F430 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void CmpForceFlushForCoalescing()
{
  int v0; // eax

  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    if ( CmpWorkerDataInitialized )
    {
      v0 = CmpForceFlushPending;
      if ( !CmpForceFlushPending && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
        ExQueueWorkItem(&CmpForceFlushWorkItem, (WORK_QUEUE_TYPE)(v0 + 1));
    }
  }
}

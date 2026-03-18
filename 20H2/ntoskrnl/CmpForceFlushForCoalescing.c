/*
 * XREFs of CmpForceFlushForCoalescing @ 0x1408792E0
 * Callers:
 *     CmpCoalescingCallback @ 0x1404EB540 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x140707D60 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
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

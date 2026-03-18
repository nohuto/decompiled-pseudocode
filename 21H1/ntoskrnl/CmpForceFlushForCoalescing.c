/*
 * XREFs of CmpForceFlushForCoalescing @ 0x1408724A0
 * Callers:
 *     CmpCoalescingCallback @ 0x1404E7680 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x140699C70 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
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

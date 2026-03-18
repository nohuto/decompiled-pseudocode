/*
 * XREFs of ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140381A00
 * Callers:
 *     TlgAggregateFlush @ 0x1405C7C10 (TlgAggregateFlush.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     EnableFlushTimer @ 0x140376554 (EnableFlushTimer.c)
 */

void __fastcall TlgAggregateInternalFlushTimerCallbackKernelMode(struct _EX_TIMER *a1, volatile signed __int16 *a2)
{
  signed __int16 v2; // ax

  v2 = _InterlockedCompareExchange16(a2 + 28, 1, 0);
  if ( v2 )
  {
    if ( v2 == 1 )
      EnableFlushTimer((ULONG_PTR)a1, 0x3A98u);
  }
  else
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a2, DelayedWorkQueue);
  }
}

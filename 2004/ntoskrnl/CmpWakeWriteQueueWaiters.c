/*
 * XREFs of CmpWakeWriteQueueWaiters @ 0x140709AC8
 * Callers:
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140787384 (CmpFinishBeingActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

char __fastcall CmpWakeWriteQueueWaiters(ULONG_PTR BugCheckParameter2, PRKEVENT Event, LONG a3)
{
  PRKEVENT v4; // rax
  struct _LIST_ENTRY *Flink; // rbx

  v4 = Event;
  if ( Event )
  {
    do
    {
      Flink = v4[1].Header.WaitListHead.Flink;
      v4[1].Header.LockNV = a3;
      KeSetEvent(v4, 0, 0);
      v4 = (PRKEVENT)Flink;
    }
    while ( Flink );
  }
  return KeAbPostRelease(BugCheckParameter2);
}

/*
 * XREFs of CmpWakeWriteQueueWaiters @ 0x1406DC018
 * Callers:
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140795094 (CmpFinishBeingActiveFlusherAndReconciler.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 */

char __fastcall CmpWakeWriteQueueWaiters(ULONG_PTR BugCheckParameter2, PRKEVENT Event, LONG a3)
{
  PRKEVENT v4; // rax
  struct _KEVENT *Flink; // rbx

  v4 = Event;
  if ( Event )
  {
    do
    {
      Flink = (struct _KEVENT *)v4[1].Header.WaitListHead.Flink;
      v4[1].Header.LockNV = a3;
      KeSetEvent(v4, 0, 0);
      v4 = Flink;
    }
    while ( Flink );
  }
  return KeAbPostRelease(BugCheckParameter2);
}

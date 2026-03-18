/*
 * XREFs of KiIdealProcessorRebalancerTimerCallback @ 0x140247C90
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void KiIdealProcessorRebalancerTimerCallback()
{
  char v0; // bl

  v0 = 0;
  KxAcquireSpinLock(&qword_140C2AE88);
  byte_140C2AE91 |= 1u;
  if ( !byte_140C2AE90 )
  {
    byte_140C2AE90 = 1;
    v0 = 1;
  }
  KxReleaseSpinLock(&qword_140C2AE88);
  if ( v0 )
    ExQueueWorkItem(&WorkItem, (WORK_QUEUE_TYPE)48);
}

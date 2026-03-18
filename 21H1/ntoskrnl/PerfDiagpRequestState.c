/*
 * XREFs of PerfDiagpRequestState @ 0x1407B988C
 * Callers:
 *     PerfDiagpBootSystemProxyCallback @ 0x1407B9830 (PerfDiagpBootSystemProxyCallback.c)
 *     PerfDiagpBootUserProxyCallback @ 0x1407B9860 (PerfDiagpBootUserProxyCallback.c)
 *     PerfDiagpSecondaryLogonProxyCallback @ 0x14092B4A0 (PerfDiagpSecondaryLogonProxyCallback.c)
 *     PerfDiagpShutdownProxyCallback @ 0x14092B4D0 (PerfDiagpShutdownProxyCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall PerfDiagpRequestState(int a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( a1 < 8 )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64465250u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PerfDiagpProxyWorker;
      PoolWithTag->Parameter = PoolWithTag;
      LODWORD(PoolWithTag[1].List.Flink) = a1;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
}

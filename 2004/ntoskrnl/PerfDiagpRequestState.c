/*
 * XREFs of PerfDiagpRequestState @ 0x1407BC9FC
 * Callers:
 *     PerfDiagpBootSystemProxyCallback @ 0x1407BC9A0 (PerfDiagpBootSystemProxyCallback.c)
 *     PerfDiagpBootUserProxyCallback @ 0x1407BC9D0 (PerfDiagpBootUserProxyCallback.c)
 *     PerfDiagpSecondaryLogonProxyCallback @ 0x14092C750 (PerfDiagpSecondaryLogonProxyCallback.c)
 *     PerfDiagpShutdownProxyCallback @ 0x14092C780 (PerfDiagpShutdownProxyCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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

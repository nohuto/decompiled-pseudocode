/*
 * XREFs of CmpDiskFullWarning @ 0x1408723E8
 * Callers:
 *     CmpLazyWriteWorker @ 0x1403BC0B0 (CmpLazyWriteWorker.c)
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140791858 (CmpMountPreloadedHives.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void CmpDiskFullWarning()
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( !CmpDiskFullWorkerPopupDisplayed && CmpCannotWriteConfiguration && ExReadyForErrors && CmpProfileLoaded )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CmpDiskFullWarningWorker;
      CmpDiskFullWorkerPopupDisplayed = 1;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
}

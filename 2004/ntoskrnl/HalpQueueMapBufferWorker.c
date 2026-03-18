/*
 * XREFs of HalpQueueMapBufferWorker @ 0x1404B7708
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x1404C56AC (HalpAllocateDmaResourcesInternal.c)
 *     HalAllocateAdapterChannelV2 @ 0x1404C77B4 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404C7DB8 (HalpDmaProcessMapRegisterQueueV2.c)
 *     IoFreeAdapterChannelV2 @ 0x1404C7E9C (IoFreeAdapterChannelV2.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall HalpQueueMapBufferWorker(__int64 a1, int a2)
{
  __int64 v4; // rbx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  v4 = *(_BYTE *)(a1 + 434) != 0 ? 4 : 0;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)((char *)&HalpDmaGrowMapBufferWorkerQueued + v4), 1, 0) )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x206C6148u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))HalpGrowMapBufferWorker;
      PoolWithTag->Parameter = PoolWithTag;
      PoolWithTag[1].List.Flink = *(struct _LIST_ENTRY **)(a1 + 152);
      HIDWORD(PoolWithTag[1].List.Blink) = a2;
      LOBYTE(PoolWithTag[1].List.Blink) = *(_BYTE *)(a1 + 434);
      LODWORD(PoolWithTag[1].WorkerRoutine) = *(_DWORD *)(a1 + 148);
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
    else
    {
      *(_DWORD *)((char *)&HalpDmaGrowMapBufferWorkerQueued + v4) = 0;
    }
  }
}

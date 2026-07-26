/*
 * XREFs of NdisUnbindAdapter @ 0x1C0098EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C002D040 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0097EE8 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisUnbindAdapter(NDIS_HANDLE NdisBindingHandle)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx

  if ( KeGetCurrentIrql() )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
    if ( !PoolWithTag )
      return -1073741670;
    ndisMReferenceOpen((__int64)NdisBindingHandle, 0x12u);
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ndisUnbindAdapterWorkItem;
    PoolWithTag[1].List.Flink = (_LIST_ENTRY *)NdisBindingHandle;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, (WORK_QUEUE_TYPE)40);
  }
  else
  {
    ndisUnbindAdapterInner((struct _NDIS_OPEN_BLOCK *)NdisBindingHandle);
  }
  return 0;
}

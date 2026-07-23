/*
 * XREFs of HalAllocateAdapterChannelV2 @ 0x1404CC924
 * Callers:
 *     HalAllocateAdapterChannel @ 0x1404B8CE0 (HalAllocateAdapterChannel.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IoFreeAdapterChannel @ 0x1404B8F50 (IoFreeAdapterChannel.c)
 *     HalpQueueMapBufferWorker @ 0x1404BC828 (HalpQueueMapBufferWorker.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaQueueAdapter @ 0x1404C7FD4 (HalpDmaQueueAdapter.c)
 *     KeInsertDeviceQueue @ 0x14051ABC0 (KeInsertDeviceQueue.c)
 */

__int64 __fastcall HalAllocateAdapterChannelV2(
        PDMA_ADAPTER DmaAdapter,
        _DMA_OPERATIONS *DeviceQueueEntry,
        ULONG a3,
        struct _LIST_ENTRY *a4)
{
  char v4; // r12
  char v5; // r15
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  _DMA_OPERATIONS *MapRegisters; // rax
  _DMA_OPERATIONS *DmaOperations; // r8
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax

  HIDWORD(DeviceQueueEntry->AllocateCommonBuffer) &= ~4u;
  v4 = 0;
  v5 = 0;
  DeviceQueueEntry->FreeCommonBuffer = (void (__fastcall *)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER, void *, unsigned __int8))a4;
  CurrentIrql = 0;
  LODWORD(DeviceQueueEntry->FlushAdapterBuffers) = a3;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v5 = 1;
  }
  if ( !KeInsertDeviceQueue((PKDEVICE_QUEUE)&DmaAdapter[11], (PKDEVICE_QUEUE_ENTRY)DeviceQueueEntry) )
  {
    *(_DWORD *)&DmaAdapter[15].Version = a3;
    DmaAdapter[21].DmaOperations = DeviceQueueEntry;
    if ( a3 && (LOBYTE(DmaAdapter[27].Version) || !*((_BYTE *)&DmaAdapter[27].Size + 3)) )
    {
      if ( a3 > *(_DWORD *)&DmaAdapter[14].Version )
      {
        *(_DWORD *)&DmaAdapter[15].Version = 0;
        IoFreeAdapterChannel(DmaAdapter);
        if ( v5 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v14 = KeGetCurrentIrql();
              if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v16 = CurrentPrcb->SchedulerAssist;
                v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v18 = (v17 & v16[5]) == 0;
                v16[5] &= v17;
                if ( v18 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
        return 3221225626LL;
      }
      MapRegisters = (_DMA_OPERATIONS *)HalpDmaAllocateMapRegisters((__int64)DmaAdapter, a3, v12, v13);
      DmaAdapter[14].DmaOperations = MapRegisters;
      if ( !MapRegisters )
      {
        HalpDmaQueueAdapter((__int64)DmaAdapter);
        v4 = 1;
        HalpQueueMapBufferWorker((__int64)DmaAdapter, a3);
      }
    }
    else
    {
      DmaAdapter[14].DmaOperations = 0LL;
      *(_DWORD *)&DmaAdapter[15].Version = 0;
    }
    if ( DmaAdapter[26].DmaOperations )
      (*(void (**)(void))(DmaDispatch + 32))();
    if ( !v4 )
    {
      DmaOperations = DmaAdapter[14].DmaOperations;
      DmaAdapter[21].DmaOperations = DeviceQueueEntry;
      v22 = ((__int64 (__fastcall *)(void (__fastcall *)(_DMA_ADAPTER *), void (__fastcall *)(_DMA_ADAPTER *, void *, unsigned int), _DMA_OPERATIONS *, int (__fastcall *)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *)))a4)(
              DeviceQueueEntry->FreeAdapterChannel,
              DeviceQueueEntry->FreeMapRegisters,
              DmaOperations,
              DeviceQueueEntry->AllocateAdapterChannel);
      if ( v22 == 2 )
      {
LABEL_31:
        IoFreeAdapterChannel(DmaAdapter);
        goto LABEL_32;
      }
      if ( v22 == 3 )
      {
        *(_DWORD *)&DmaAdapter[15].Version = 0;
        goto LABEL_31;
      }
    }
  }
LABEL_32:
  if ( v5 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)v24);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return 0LL;
}

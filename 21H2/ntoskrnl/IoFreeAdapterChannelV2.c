/*
 * XREFs of IoFreeAdapterChannelV2 @ 0x1404585B4
 * Callers:
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 * Callees:
 *     KeRemoveDeviceQueue @ 0x140257A90 (KeRemoveDeviceQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IoFreeMapRegisters @ 0x140456A30 (IoFreeMapRegisters.c)
 *     HalpDmaAllocateMapRegisters @ 0x140456F16 (HalpDmaAllocateMapRegisters.c)
 *     HalpQueueMapBufferWorker @ 0x14050905C (HalpQueueMapBufferWorker.c)
 *     HalpDmaQueueAdapter @ 0x140513AD4 (HalpDmaQueueAdapter.c)
 */

__int64 __fastcall IoFreeAdapterChannelV2(PDMA_ADAPTER DmaAdapter)
{
  char v1; // r14
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  ULONG v5; // r8d
  __int64 result; // rax
  __int64 v7; // rsi
  unsigned int v8; // edx
  _DMA_OPERATIONS *MapRegisters; // rax
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  _DMA_OPERATIONS *DmaOperations; // r8

  v1 = 0;
  CurrentIrql = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v1 = 1;
  }
  while ( 1 )
  {
    v5 = *(_DWORD *)&DmaAdapter[15].Version;
    if ( v5 )
      IoFreeMapRegisters(DmaAdapter, DmaAdapter[14].DmaOperations, v5);
    result = (__int64)KeRemoveDeviceQueue((PKDEVICE_QUEUE)&DmaAdapter[11]);
    v7 = result;
    if ( !result )
      break;
    DmaAdapter[21].DmaOperations = (_DMA_OPERATIONS *)result;
    *(_DWORD *)&DmaAdapter[15].Version = *(_DWORD *)(result + 40);
    v8 = *(_DWORD *)(result + 40);
    if ( v8 && DmaAdapter[9].DmaOperations )
    {
      MapRegisters = (_DMA_OPERATIONS *)HalpDmaAllocateMapRegisters((__int64)DmaAdapter, v8);
      DmaAdapter[14].DmaOperations = MapRegisters;
      if ( !MapRegisters )
      {
        HalpDmaQueueAdapter(DmaAdapter);
        result = HalpQueueMapBufferWorker(DmaAdapter, *(unsigned int *)(v7 + 40));
        break;
      }
    }
    else
    {
      DmaAdapter[14].DmaOperations = 0LL;
      *(_DWORD *)&DmaAdapter[15].Version = 0;
    }
    DmaOperations = DmaAdapter[14].DmaOperations;
    DmaAdapter[21].DmaOperations = (_DMA_OPERATIONS *)v7;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))(v7 + 24))(
               *(_QWORD *)(v7 + 48),
               *(_QWORD *)(v7 + 56),
               DmaOperations,
               *(_QWORD *)(v7 + 32));
    if ( (_DWORD)result == 1 )
      break;
    if ( (_DWORD)result == 3 )
      *(_DWORD *)&DmaAdapter[15].Version = 0;
  }
  if ( v1 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & v12[5]) == 0;
          v12[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

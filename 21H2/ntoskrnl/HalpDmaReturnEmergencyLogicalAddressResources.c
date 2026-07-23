/*
 * XREFs of HalpDmaReturnEmergencyLogicalAddressResources @ 0x1404B85A8
 * Callers:
 *     HalpDmaFreeLa @ 0x1404B7B38 (HalpDmaFreeLa.c)
 *     HalPutScatterGatherListThin @ 0x1404CB4D0 (HalPutScatterGatherListThin.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA81C (HalpAllocateDmaResourcesInternal.c)
 *     HalpConstructScatterGatherListThin @ 0x1404CBA58 (HalpConstructScatterGatherListThin.c)
 */

__int64 __fastcall HalpDmaReturnEmergencyLogicalAddressResources(PDMA_ADAPTER DmaAdapter)
{
  KSPIN_LOCK *p_Version; // r14
  _DMA_OPERATIONS *v3; // rdi
  KIRQL v4; // al
  _DMA_OPERATIONS **p_DmaOperations; // rcx
  unsigned __int64 v6; // rsi
  struct _DMA_ADAPTER *DmaOperations; // rax
  char v8; // bp
  __int64 v9; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  int AllocateCommonBuffer; // ecx
  _DMA_OPERATIONS *v15; // rcx
  _DMA_OPERATIONS *v16; // rax

  p_Version = (KSPIN_LOCK *)&DmaAdapter[35].Version;
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DmaAdapter[35].Version);
  p_DmaOperations = &DmaAdapter[35].DmaOperations;
  v6 = v4;
  DmaOperations = (struct _DMA_ADAPTER *)DmaAdapter[35].DmaOperations;
  if ( DmaOperations == (struct _DMA_ADAPTER *)&DmaAdapter[35].DmaOperations )
  {
    v8 = 1;
    LOBYTE(DmaAdapter[36].DmaOperations) = 0;
  }
  else
  {
    v3 = DmaAdapter[35].DmaOperations;
    v8 = 0;
    v9 = *(_QWORD *)&DmaOperations->Version;
    if ( (_DMA_OPERATIONS **)v3->PutDmaAdapter != p_DmaOperations || *(_DMA_OPERATIONS **)(v9 + 8) != v3 )
      __fastfail(3u);
    *p_DmaOperations = (_DMA_OPERATIONS *)v9;
    *(_QWORD *)(v9 + 8) = p_DmaOperations;
  }
  KxReleaseSpinLock(p_Version);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v13 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  if ( !v8 )
  {
    AllocateCommonBuffer = (int)v3->AllocateCommonBuffer;
    if ( AllocateCommonBuffer )
    {
      if ( AllocateCommonBuffer != 1 )
        return result;
    }
    else if ( LODWORD(DmaAdapter[38].DmaOperations) == 3 )
    {
      v15 = DmaAdapter[14].DmaOperations;
      v16 = DmaAdapter[34].DmaOperations;
      v15->FreeCommonBuffer = (void (__fastcall *)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER, void *, unsigned __int8))v16;
      v15->FlushAdapterBuffers = (unsigned __int8 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, void *, unsigned int, unsigned __int8))v16;
      ++LODWORD(DmaAdapter[38].DmaOperations);
      return HalpAllocateDmaResourcesInternal(DmaAdapter);
    }
    return HalpConstructScatterGatherListThin(v3);
  }
  return result;
}

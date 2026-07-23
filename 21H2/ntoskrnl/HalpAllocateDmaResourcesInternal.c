/*
 * XREFs of HalpAllocateDmaResourcesInternal @ 0x1404CA81C
 * Callers:
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x1404B85A8 (HalpDmaReturnEmergencyLogicalAddressResources.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x1404C6598 (HalpDmaProcessMapRegisterQueueV3.c)
 *     IoFreeAdapterChannelV3 @ 0x1404C65DC (IoFreeAdapterChannelV3.c)
 *     HalpAllocateAdapterChannel @ 0x1404CA610 (HalpAllocateAdapterChannel.c)
 *     HalpAllocateDmaResources @ 0x1404CA800 (HalpAllocateDmaResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpDmaAllocateAndPremapLa @ 0x1404B6FB0 (HalpDmaAllocateAndPremapLa.c)
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x1404B8280 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x1404B83A0 (HalpDmaRemoveFromEmergencyLogicalAddressQueue.c)
 *     IoFreeAdapterChannel @ 0x1404B8F50 (IoFreeAdapterChannel.c)
 *     HalpQueueMapBufferWorker @ 0x1404BC828 (HalpQueueMapBufferWorker.c)
 *     HalFreeAdapterObject @ 0x1404C61C0 (HalFreeAdapterObject.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaQueueAdapter @ 0x1404C7FD4 (HalpDmaQueueAdapter.c)
 *     HalpAllocateDmaChannels @ 0x1404CE4CC (HalpAllocateDmaChannels.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x1404CF144 (HalpDmaRemoveAdapterFromChannelQueue.c)
 */

char __fastcall HalpAllocateDmaResourcesInternal(PDMA_ADAPTER DmaAdapter, char a2, __int64 a3)
{
  __int64 DmaOperations_low; // r9
  _DMA_OPERATIONS *DmaOperations; // rbp
  _DWORD *v6; // r14
  unsigned int v9; // ebx
  _DMA_OPERATIONS *MapRegisters; // rax
  _DMA_OPERATIONS *v11; // rcx
  unsigned int i; // eax
  _DMA_OPERATIONS *v13; // rdi
  int v14; // eax
  int AllocateCommonBuffer_high; // eax
  void (__fastcall *FreeCommonBuffer)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER, void *, unsigned __int8); // rax
  int v17; // eax

  DmaOperations_low = LODWORD(DmaAdapter[38].DmaOperations);
  DmaOperations = DmaAdapter[21].DmaOperations;
  v6 = (_DWORD *)a3;
  switch ( (_DWORD)DmaOperations_low )
  {
    case 0:
      LODWORD(DmaAdapter[38].DmaOperations) = 1;
LABEL_8:
      if ( !HIBYTE(DmaAdapter[27].Version) && !(unsigned __int8)HalpAllocateDmaChannels(DmaAdapter) )
        goto LABEL_25;
      DmaOperations_low = (unsigned int)++LODWORD(DmaAdapter[38].DmaOperations);
      goto LABEL_11;
    case 1:
      goto LABEL_8;
    case 2:
LABEL_11:
      v9 = *(_DWORD *)&DmaAdapter[15].Version;
      if ( v9 && LOBYTE(DmaAdapter[27].Version) )
      {
        MapRegisters = (_DMA_OPERATIONS *)HalpDmaAllocateMapRegisters((__int64)DmaAdapter, v9, a3, DmaOperations_low);
        DmaAdapter[14].DmaOperations = MapRegisters;
        v11 = MapRegisters;
        if ( !MapRegisters )
        {
          HalpQueueMapBufferWorker((__int64)DmaAdapter, v9);
          if ( (HIDWORD(DmaOperations->AllocateCommonBuffer) & 1) == 0 )
            HalpDmaQueueAdapter((__int64)DmaAdapter);
          goto LABEL_25;
        }
        MapRegisters->FreeCommonBuffer = (void (__fastcall *)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER, void *, unsigned __int8))-1LL;
        MapRegisters->AllocateAdapterChannel = 0LL;
        if ( (HIDWORD(DmaOperations->AllocateCommonBuffer) & 4) != 0 )
        {
          for ( i = 0; i < v9; ++i )
          {
            if ( !v11 )
              break;
            v11->FreeAdapterChannel = (void (__fastcall *)(_DMA_ADAPTER *))((unsigned __int64)v11->FreeAdapterChannel | 0x20);
            v11 = (_DMA_OPERATIONS *)v11->PutDmaAdapter;
          }
        }
        LODWORD(DmaOperations_low) = DmaAdapter[38].DmaOperations;
      }
      else
      {
        DmaAdapter[14].DmaOperations = 0LL;
        *(_DWORD *)&DmaAdapter[15].Version = 0;
      }
      LODWORD(DmaAdapter[38].DmaOperations) = DmaOperations_low + 1;
      goto LABEL_23;
    case 3:
LABEL_23:
      if ( *(_DWORD *)&DmaAdapter[32].Version != 2
        || (v13 = DmaAdapter[14].DmaOperations,
            LOBYTE(a3) = (HIDWORD(DmaOperations->AllocateCommonBuffer) & 1) == 0,
            v14 = HalpDmaAllocateAndPremapLa(
                    (__int64)DmaAdapter,
                    HIDWORD(DmaOperations->AllocateCommonBuffer) & 0xFFFFF000,
                    a3,
                    (__int64 *)&v13->FreeCommonBuffer),
            v13->FlushAdapterBuffers = (unsigned __int8 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, void *, unsigned int, unsigned __int8))v13->FreeCommonBuffer,
            v14 >= 0) )
      {
        LODWORD(DmaOperations_low) = ++LODWORD(DmaAdapter[38].DmaOperations);
        goto LABEL_34;
      }
LABEL_25:
      AllocateCommonBuffer_high = HIDWORD(DmaOperations->AllocateCommonBuffer);
      if ( (AllocateCommonBuffer_high & 1) != 0
        || (AllocateCommonBuffer_high & 2) != 0
        && ((__int64)DmaOperations[-1].FreeCommonBufferVector & 2) != 0
        && (HalpDmaRemoveFromEmergencyLogicalAddressQueue((__int64)DmaAdapter, &DmaAdapter[37].Version)
         || HalpDmaRemoveAdapterFromMasterQueue((__int64)DmaAdapter)
         || (unsigned __int8)HalpDmaRemoveAdapterFromChannelQueue(DmaAdapter)) )
      {
        *(_DWORD *)&DmaAdapter[15].Version = 0;
        IoFreeAdapterChannel(DmaAdapter);
      }
      return 0;
  }
  if ( (_DWORD)DmaOperations_low != 4 )
    return 0;
LABEL_34:
  if ( (HIDWORD(DmaOperations->AllocateCommonBuffer) & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)&DmaOperations[-1].FreeCommonBufferVector, 1u);
    LODWORD(DmaOperations_low) = DmaAdapter[38].DmaOperations;
  }
  LODWORD(DmaAdapter[38].DmaOperations) = DmaOperations_low + 1;
  if ( (HIDWORD(DmaOperations->AllocateCommonBuffer) & 2) != 0 )
    *(_QWORD *)&DmaAdapter[22].Version = (char *)DmaOperations - 16;
  FreeCommonBuffer = DmaOperations->FreeCommonBuffer;
  if ( FreeCommonBuffer )
  {
    v17 = ((__int64 (__fastcall *)(void (__fastcall *)(_DMA_ADAPTER *), void (__fastcall *)(_DMA_ADAPTER *, void *, unsigned int), _DMA_OPERATIONS *, int (__fastcall *)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *)))FreeCommonBuffer)(
            DmaOperations->FreeAdapterChannel,
            DmaOperations->FreeMapRegisters,
            DmaAdapter[14].DmaOperations,
            DmaOperations->AllocateAdapterChannel);
    if ( v6 )
      *v6 = v17;
    if ( a2 )
      HalFreeAdapterObject((__int64)DmaAdapter, v17);
  }
  return 1;
}

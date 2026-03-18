/*
 * XREFs of HalpAllocateDmaResourcesInternal @ 0x140517830
 * Callers:
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x140504DAC (HalpDmaReturnEmergencyLogicalAddressResources.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x140512444 (HalpDmaProcessMapRegisterQueueV3.c)
 *     IoFreeAdapterChannelV3 @ 0x1405127BC (IoFreeAdapterChannelV3.c)
 *     HalpAllocateAdapterChannel @ 0x140517630 (HalpAllocateAdapterChannel.c)
 *     HalpFreeDmaChannels @ 0x140519E90 (HalpFreeDmaChannels.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 *     HalpDmaAllocateMapRegisters @ 0x140456F16 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x140504A84 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x140504BA4 (HalpDmaRemoveFromEmergencyLogicalAddressQueue.c)
 *     HalpDmaUseEmergencyLogicalAddressResources @ 0x140504FE8 (HalpDmaUseEmergencyLogicalAddressResources.c)
 *     HalpQueueMapBufferWorker @ 0x14050905C (HalpQueueMapBufferWorker.c)
 *     HalFreeAdapterObject @ 0x1405116C0 (HalFreeAdapterObject.c)
 *     HalpDmaQueueAdapter @ 0x140513AD4 (HalpDmaQueueAdapter.c)
 *     HalpAllocateDmaChannels @ 0x140518F1C (HalpAllocateDmaChannels.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x140519B94 (HalpDmaRemoveAdapterFromChannelQueue.c)
 */

char __fastcall HalpAllocateDmaResourcesInternal(PDMA_ADAPTER DmaAdapter, char a2, int *a3)
{
  int DmaOperations; // r9d
  _DMA_OPERATIONS *v5; // rdi
  unsigned int v9; // esi
  _DMA_OPERATIONS *MapRegisters; // rax
  _DMA_OPERATIONS *v11; // rcx
  int AllocateCommonBuffer_high; // eax
  unsigned int i; // eax
  void (__fastcall **p_FreeCommonBuffer)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER, void *, unsigned __int8); // rsi
  void (__fastcall *FreeCommonBuffer)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER, void *, unsigned __int8); // rax
  int v16; // eax

  DmaOperations = (int)DmaAdapter[38].DmaOperations;
  v5 = DmaAdapter[21].DmaOperations;
  switch ( DmaOperations )
  {
    case 0:
      LODWORD(DmaAdapter[38].DmaOperations) = 1;
LABEL_8:
      if ( !HIBYTE(DmaAdapter[27].Version) && !(unsigned __int8)HalpAllocateDmaChannels(DmaAdapter) )
        goto LABEL_16;
      DmaOperations = ++LODWORD(DmaAdapter[38].DmaOperations);
      goto LABEL_11;
    case 1:
      goto LABEL_8;
    case 2:
LABEL_11:
      v9 = *(_DWORD *)&DmaAdapter[15].Version;
      if ( v9 && LOBYTE(DmaAdapter[27].Version) )
      {
        MapRegisters = (_DMA_OPERATIONS *)HalpDmaAllocateMapRegisters((__int64)DmaAdapter, v9);
        DmaAdapter[14].DmaOperations = MapRegisters;
        v11 = MapRegisters;
        if ( !MapRegisters )
        {
          HalpQueueMapBufferWorker((__int64)DmaAdapter, v9);
          if ( (HIDWORD(v5->AllocateCommonBuffer) & 1) == 0 )
            HalpDmaQueueAdapter((__int64)DmaAdapter);
          goto LABEL_16;
        }
        MapRegisters->FreeCommonBuffer = 0LL;
        MapRegisters->AllocateAdapterChannel = 0LL;
        MapRegisters->FlushAdapterBuffers = 0LL;
        if ( (HIDWORD(v5->AllocateCommonBuffer) & 4) != 0 )
        {
          for ( i = 0; i < v9; ++i )
          {
            if ( !v11 )
              break;
            v11->FreeAdapterChannel = (void (__fastcall *)(_DMA_ADAPTER *))((unsigned __int64)v11->FreeAdapterChannel | 0x20);
            v11 = (_DMA_OPERATIONS *)v11->PutDmaAdapter;
          }
        }
        DmaOperations = (int)DmaAdapter[38].DmaOperations;
      }
      else
      {
        DmaAdapter[14].DmaOperations = 0LL;
        *(_DWORD *)&DmaAdapter[15].Version = 0;
      }
      LODWORD(DmaAdapter[38].DmaOperations) = DmaOperations + 1;
      goto LABEL_25;
    case 3:
LABEL_25:
      if ( *(_DWORD *)&DmaAdapter[32].Version != 3 )
        goto LABEL_29;
      p_FreeCommonBuffer = &DmaAdapter[14].DmaOperations->FreeCommonBuffer;
      if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, void (__fastcall **)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER, void *, unsigned __int8)))qword_140C4BDF0)(
                  DmaAdapter[31].DmaOperations->FlushAdapterBuffers,
                  HIDWORD(v5->AllocateCommonBuffer) & 0xFFFFF000,
                  0LL,
                  0LL,
                  0LL,
                  p_FreeCommonBuffer) >= 0 )
        goto LABEL_29;
      if ( HalpDmaUseEmergencyLogicalAddressResources(
             (__int64)DmaAdapter,
             &DmaAdapter[37].Version,
             (BYTE4(v5->AllocateCommonBuffer) & 1) == 0) )
      {
        *p_FreeCommonBuffer = (void (__fastcall *)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER, void *, unsigned __int8))DmaAdapter[34].DmaOperations;
LABEL_29:
        DmaOperations = ++LODWORD(DmaAdapter[38].DmaOperations);
        goto LABEL_30;
      }
LABEL_16:
      AllocateCommonBuffer_high = HIDWORD(v5->AllocateCommonBuffer);
      if ( (AllocateCommonBuffer_high & 1) != 0
        || (AllocateCommonBuffer_high & 2) != 0
        && ((__int64)v5[-1].CreateCommonBufferFromMdl & 2) != 0
        && (HalpDmaRemoveFromEmergencyLogicalAddressQueue((__int64)DmaAdapter, &DmaAdapter[37].Version)
         || HalpDmaRemoveAdapterFromMasterQueue((__int64)DmaAdapter)
         || (unsigned __int8)HalpDmaRemoveAdapterFromChannelQueue(DmaAdapter)) )
      {
        *(_DWORD *)&DmaAdapter[15].Version = 0;
        IoFreeAdapterChannel(DmaAdapter);
      }
      return 0;
  }
  if ( DmaOperations != 4 )
    return 0;
LABEL_30:
  if ( (HIDWORD(v5->AllocateCommonBuffer) & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)&v5[-1].CreateCommonBufferFromMdl, 1u);
    DmaOperations = (int)DmaAdapter[38].DmaOperations;
  }
  LODWORD(DmaAdapter[38].DmaOperations) = DmaOperations + 1;
  if ( (HIDWORD(v5->AllocateCommonBuffer) & 2) != 0 )
    *(_QWORD *)&DmaAdapter[22].Version = (char *)v5 - 16;
  FreeCommonBuffer = v5->FreeCommonBuffer;
  if ( FreeCommonBuffer )
  {
    v16 = ((__int64 (__fastcall *)(void (__fastcall *)(_DMA_ADAPTER *), void (__fastcall *)(_DMA_ADAPTER *, void *, unsigned int), _DMA_OPERATIONS *, int (__fastcall *)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *)))FreeCommonBuffer)(
            v5->FreeAdapterChannel,
            v5->FreeMapRegisters,
            DmaAdapter[14].DmaOperations,
            v5->AllocateAdapterChannel);
    if ( a3 )
      *a3 = v16;
    if ( a2 )
      HalFreeAdapterObject((__int64)DmaAdapter, v16);
  }
  return 1;
}

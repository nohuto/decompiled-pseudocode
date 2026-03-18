/*
 * XREFs of MmFreeContiguousMemory @ 0x140213DA0
 * Callers:
 *     HvlpFreeOverlayPages @ 0x140213380 (HvlpFreeOverlayPages.c)
 *     HalFreeCommonBuffer @ 0x1403993C0 (HalFreeCommonBuffer.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403B2614 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpDmaAllocateMapRegisters @ 0x140456F16 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaFreeChildAdapter @ 0x140513870 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x140514920 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140514A70 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferDmaThin @ 0x140515B80 (HalFreeCommonBufferDmaThin.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x140522410 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1405226CC (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140543EB0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x140554988 (IopInitializeInMemoryDumpData.c)
 *     DifMmFreeContiguousMemoryWrapper @ 0x140616DB0 (DifMmFreeContiguousMemoryWrapper.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140908F2C (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1409094F8 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x140A89224 (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140B4D2C4 (IommupHvInitializeLibrary.c)
 * Callees:
 *     EtwTraceContFreeEvent @ 0x140213F3C (EtwTraceContFreeEvent.c)
 *     MiFreeContiguousPages @ 0x140213FA8 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     ExRemovePoolTag @ 0x1402166FC (ExRemovePoolTag.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x140352E50 (MiFillPteHierarchy.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1405852C0 (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x140A81748 (VfFreeMemoryNotification.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  int SystemRegionType; // eax
  int v3; // edi
  __int64 v4; // [rsp+30h] [rbp-30h]
  _OWORD v5[2]; // [rsp+38h] [rbp-28h] BYREF

  memset(v5, 0, sizeof(v5));
  SystemRegionType = MiGetSystemRegionType();
  if ( SystemRegionType != 5 )
  {
    if ( SystemRegionType )
    {
      MiFillPteHierarchy(BaseAddress, v5);
      v3 = 4;
      do
        v4 = MI_READ_PTE_LOCK_FREE(*((_QWORD *)v5 + (unsigned int)--v3));
      while ( (v4 & 0x80u) == 0LL && v3 );
      if ( ((unsigned __int16)BaseAddress & 0xFFF) == 0 )
      {
        ExRemovePoolTag((ULONG_PTR)BaseAddress);
        KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
      }
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    }
    KeBugCheckEx(0xC2u, 0x62uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
  }
  EtwTraceContFreeEvent(BaseAddress, 0LL);
  ExFreePoolWithTag(BaseAddress, 0);
}

/*
 * XREFs of MmFreeContiguousMemory @ 0x140217BE0
 * Callers:
 *     HvlpFreeOverlayPages @ 0x14036D180 (HvlpFreeOverlayPages.c)
 *     HalpDmaFreeChildAdapter @ 0x14036D370 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBuffer @ 0x140381D80 (HalFreeCommonBuffer.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A1344 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferV3 @ 0x1404C4830 (HalFreeCommonBufferV3.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D5380 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D563C (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404F25E0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x140504250 (IopInitializeInMemoryDumpData.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864EF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1408654C4 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x1409D0520 (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140A8E764 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140217D28 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     ExRemovePoolTag @ 0x1402187A8 (ExRemovePoolTag.c)
 *     MiFillPteHierarchy @ 0x1403171C0 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053185C (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x1409C6FE0 (VfFreeMemoryNotification.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  int SystemRegionType; // eax
  int v3; // esi
  _OWORD v4[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+90h] [rbp+40h]
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h]

  NumberOfBytes = 0LL;
  memset(v4, 0, sizeof(v4));
  SystemRegionType = MiGetSystemRegionType(BaseAddress);
  if ( SystemRegionType != 5 )
  {
    if ( SystemRegionType )
    {
      MiFillPteHierarchy(BaseAddress, v4);
      v3 = 4;
      do
        v5 = MI_READ_PTE_LOCK_FREE(*((_QWORD *)v4 + (unsigned int)--v3));
      while ( (v5 & 0x80u) == 0LL && v3 );
      if ( ((unsigned __int16)BaseAddress & 0xFFF) == 0 )
      {
        ExRemovePoolTag((ULONG_PTR)BaseAddress);
        KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, NumberOfBytes, 0LL);
      }
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    }
    KeBugCheckEx(0xC2u, 0x62uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
  }
  ExFreePoolWithTag(BaseAddress, 0);
}

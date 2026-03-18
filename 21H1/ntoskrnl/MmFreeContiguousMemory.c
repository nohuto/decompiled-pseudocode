/*
 * XREFs of MmFreeContiguousMemory @ 0x1402F9FE0
 * Callers:
 *     HvlpFreeOverlayPages @ 0x14036A000 (HvlpFreeOverlayPages.c)
 *     HalpDmaFreeChildAdapter @ 0x14036A1F0 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBuffer @ 0x14037F410 (HalFreeCommonBuffer.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14039DCD4 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferV3 @ 0x1404BF020 (HalFreeCommonBufferV3.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C159C (HalpDmaAllocateMapRegisters.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404CFD20 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404CFFDC (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404ECC00 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x1404FE830 (IopInitializeInMemoryDumpData.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140860464 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140860A38 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x1409CC500 (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140A8B664 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFillPteHierarchy @ 0x1402B2490 (MiFillPteHierarchy.c)
 *     MiFreeContiguousPages @ 0x1402FA128 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x1402FA3B0 (MmUnmapIoSpace.c)
 *     ExRemovePoolTag @ 0x1402FABA8 (ExRemovePoolTag.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052BAFC (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x1409C2FC0 (VfFreeMemoryNotification.c)
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
  SystemRegionType = MiGetSystemRegionType((unsigned __int64)BaseAddress);
  if ( SystemRegionType != 5 )
  {
    if ( SystemRegionType )
    {
      MiFillPteHierarchy((unsigned __int64)BaseAddress, (unsigned __int64 *)v4);
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

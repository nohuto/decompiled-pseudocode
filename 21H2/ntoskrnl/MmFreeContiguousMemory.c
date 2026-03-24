/*
 * XREFs of MmFreeContiguousMemory @ 0x140295F20
 * Callers:
 *     HvlpFreeOverlayPages @ 0x14036CFD0 (HvlpFreeOverlayPages.c)
 *     HalpDmaFreeChildAdapter @ 0x14036D1C0 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBuffer @ 0x140382230 (HalFreeCommonBuffer.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A11F4 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferV3 @ 0x1404C45F0 (HalFreeCommonBufferV3.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C68FC (HalpDmaAllocateMapRegisters.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D5140 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D53FC (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404F2660 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x1405042D0 (IopInitializeInMemoryDumpData.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864D90 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140865364 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x1409CF520 (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140A8D764 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140296068 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x140297530 (MmUnmapIoSpace.c)
 *     ExRemovePoolTag @ 0x140297D28 (ExRemovePoolTag.c)
 *     MiFillPteHierarchy @ 0x14030C470 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053161C (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x1409C5FE0 (VfFreeMemoryNotification.c)
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

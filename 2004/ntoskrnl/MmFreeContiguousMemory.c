/*
 * XREFs of MmFreeContiguousMemory @ 0x140337010
 * Callers:
 *     HvlpFreeOverlayPages @ 0x14036A9C0 (HvlpFreeOverlayPages.c)
 *     HalpDmaFreeChildAdapter @ 0x14036ABB0 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBuffer @ 0x14037FD70 (HalFreeCommonBuffer.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14039E464 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferV3 @ 0x1404BF700 (HalFreeCommonBufferV3.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C1A0C (HalpDmaAllocateMapRegisters.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D01D0 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D048C (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404ED250 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x1404FEE80 (IopInitializeInMemoryDumpData.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140861760 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140861D34 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x1409CC510 (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140A8ABF4 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFillPteHierarchy @ 0x140259460 (MiFillPteHierarchy.c)
 *     MiFreeContiguousPages @ 0x140337158 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x1403373E0 (MmUnmapIoSpace.c)
 *     ExRemovePoolTag @ 0x140337BD8 (ExRemovePoolTag.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052C14C (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x1409C2FD0 (VfFreeMemoryNotification.c)
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

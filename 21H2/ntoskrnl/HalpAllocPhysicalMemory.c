/*
 * XREFs of HalpAllocPhysicalMemory @ 0x140A64AC0
 * Callers:
 *     HalpMmAllocateMemoryInternal @ 0x1403BB2B8 (HalpMmAllocateMemoryInternal.c)
 *     HalpMmAllocateAndInsertPageTablePage @ 0x1403BB3A0 (HalpMmAllocateAndInsertPageTablePage.c)
 *     HalpAcpiAllocateMemory @ 0x1403BB808 (HalpAcpiAllocateMemory.c)
 *     HalpAllocateEarlyPages @ 0x1404BC8F0 (HalpAllocateEarlyPages.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D5140 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSocApiAllocatePhysicalMemory @ 0x1404D5680 (HalpSocApiAllocatePhysicalMemory.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404DB798 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAllocateScratchMemory @ 0x1409B5E90 (HalpAllocateScratchMemory.c)
 *     HalpSetupAcpiPhase0 @ 0x140A63D20 (HalpSetupAcpiPhase0.c)
 *     HalpAllocateNumaConfigData @ 0x140A644EC (HalpAllocateNumaConfigData.c)
 *     HalpDmaInitMemory @ 0x140A648D4 (HalpDmaInitMemory.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140A8DC88 (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140A8DD80 (HalpBlkAllocatePageTablePage.c)
 * Callees:
 *     HalpMapPhysicalMemory64 @ 0x1403EFE80 (HalpMapPhysicalMemory64.c)
 *     memset @ 0x140414200 (memset.c)
 *     HalpAllocPhysicalMemoryInternal @ 0x140A64B30 (HalpAllocPhysicalMemoryInternal.c)
 */

__int64 __fastcall HalpAllocPhysicalMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v7; // rax
  void *v8; // rax
  void *v9; // rbx

  if ( (unsigned int)(HalpAllocationDescriptorArraySize - HalpUsedAllocDescriptors) <= 3 )
  {
    v7 = HalpAllocPhysicalMemoryInternal(a1, 0LL, 1LL);
    if ( v7 )
    {
      v8 = (void *)HalpMapPhysicalMemory64(v7, 1LL, 0, 4LL);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x1000uLL);
        HalpUsedAllocDescriptors = 0;
        HalpAllocationDescriptorArray = v9;
        HalpAllocationDescriptorArraySize = 102;
      }
    }
  }
  return HalpAllocPhysicalMemoryInternal(a1, a2, a3);
}

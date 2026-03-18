/*
 * XREFs of HalpAllocPhysicalMemory @ 0x140A5C140
 * Callers:
 *     HalpMmAllocateMemoryInternal @ 0x1403B7E18 (HalpMmAllocateMemoryInternal.c)
 *     HalpMmAllocateAndInsertPageTablePage @ 0x1403B7F00 (HalpMmAllocateAndInsertPageTablePage.c)
 *     HalpAcpiAllocateMemory @ 0x1403B8368 (HalpAcpiAllocateMemory.c)
 *     HalpAllocateEarlyPages @ 0x1404B7A10 (HalpAllocateEarlyPages.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D01D0 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSocApiAllocatePhysicalMemory @ 0x1404D0710 (HalpSocApiAllocatePhysicalMemory.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404D67F8 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAllocateScratchMemory @ 0x1409B2E90 (HalpAllocateScratchMemory.c)
 *     HalpSetupAcpiPhase0 @ 0x140A5B3A0 (HalpSetupAcpiPhase0.c)
 *     HalpAllocateNumaConfigData @ 0x140A5BB6C (HalpAllocateNumaConfigData.c)
 *     HalpDmaInitMemory @ 0x140A5BF54 (HalpDmaInitMemory.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140A8B118 (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140A8B210 (HalpBlkAllocatePageTablePage.c)
 * Callees:
 *     HalpMapPhysicalMemory64 @ 0x1403EC9E8 (HalpMapPhysicalMemory64.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HalpAllocPhysicalMemoryInternal @ 0x140A5C1B0 (HalpAllocPhysicalMemoryInternal.c)
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

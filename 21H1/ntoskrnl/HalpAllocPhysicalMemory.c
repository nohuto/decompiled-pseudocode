/*
 * XREFs of HalpAllocPhysicalMemory @ 0x140A5D0A0
 * Callers:
 *     HalpMmAllocateMemoryInternal @ 0x1403B6FE8 (HalpMmAllocateMemoryInternal.c)
 *     HalpMmAllocateAndInsertPageTablePage @ 0x1403B70D0 (HalpMmAllocateAndInsertPageTablePage.c)
 *     HalpAcpiAllocateMemory @ 0x1403B7538 (HalpAcpiAllocateMemory.c)
 *     HalpAllocateEarlyPages @ 0x1404B7330 (HalpAllocateEarlyPages.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404CFD20 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSocApiAllocatePhysicalMemory @ 0x1404D0260 (HalpSocApiAllocatePhysicalMemory.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404D62E8 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAllocateScratchMemory @ 0x1409B2E90 (HalpAllocateScratchMemory.c)
 *     HalpSetupAcpiPhase0 @ 0x140A5C300 (HalpSetupAcpiPhase0.c)
 *     HalpAllocateNumaConfigData @ 0x140A5CACC (HalpAllocateNumaConfigData.c)
 *     HalpDmaInitMemory @ 0x140A5CEB4 (HalpDmaInitMemory.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140A8BB88 (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140A8BC80 (HalpBlkAllocatePageTablePage.c)
 * Callees:
 *     HalpMapPhysicalMemory64 @ 0x1403EBA40 (HalpMapPhysicalMemory64.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HalpAllocPhysicalMemoryInternal @ 0x140A5D110 (HalpAllocPhysicalMemoryInternal.c)
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

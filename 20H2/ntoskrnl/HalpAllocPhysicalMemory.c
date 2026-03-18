/*
 * XREFs of HalpAllocPhysicalMemory @ 0x140A634A0
 * Callers:
 *     HalpMmAllocateMemoryInternal @ 0x1403BA8B8 (HalpMmAllocateMemoryInternal.c)
 *     HalpMmAllocateAndInsertPageTablePage @ 0x1403BA9A0 (HalpMmAllocateAndInsertPageTablePage.c)
 *     HalpAcpiAllocateMemory @ 0x1403BAE08 (HalpAcpiAllocateMemory.c)
 *     HalpAllocateEarlyPages @ 0x1404BAF30 (HalpAllocateEarlyPages.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D3770 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSocApiAllocatePhysicalMemory @ 0x1404D3CB0 (HalpSocApiAllocatePhysicalMemory.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404D9D88 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAllocateScratchMemory @ 0x1409B8E90 (HalpAllocateScratchMemory.c)
 *     HalpSetupAcpiPhase0 @ 0x140A62700 (HalpSetupAcpiPhase0.c)
 *     HalpAllocateNumaConfigData @ 0x140A62ECC (HalpAllocateNumaConfigData.c)
 *     HalpDmaInitMemory @ 0x140A632B4 (HalpDmaInitMemory.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140A90E28 (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140A90F20 (HalpBlkAllocatePageTablePage.c)
 * Callees:
 *     HalpMapPhysicalMemory64 @ 0x1403EF510 (HalpMapPhysicalMemory64.c)
 *     memset @ 0x140411300 (memset.c)
 *     HalpAllocPhysicalMemoryInternal @ 0x140A63510 (HalpAllocPhysicalMemoryInternal.c)
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

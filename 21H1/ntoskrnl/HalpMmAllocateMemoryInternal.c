/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x1403B6FE8
 * Callers:
 *     HalSocRequestApi @ 0x14039EB7C (HalSocRequestApi.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403A54E4 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpInterruptParseMadt @ 0x1403A55A4 (HalpInterruptParseMadt.c)
 *     HalpInterruptInitializeIpis @ 0x1403A5C74 (HalpInterruptInitializeIpis.c)
 *     HalpTimerCreateReferencePage @ 0x1403A617C (HalpTimerCreateReferencePage.c)
 *     HalpInterruptRegisterLine @ 0x1403A7B80 (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403A81E4 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403A85A0 (HalpTimerRegister.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403A89D0 (HalRegisterPermanentAddressUsage.c)
 *     HalpMmAllocateMemory @ 0x1403B6F20 (HalpMmAllocateMemory.c)
 *     HalpIommuPopulateExceptionList @ 0x1403CB560 (HalpIommuPopulateExceptionList.c)
 *     HalpExtRegisterResourceDescriptor @ 0x1404BED80 (HalpExtRegisterResourceDescriptor.c)
 *     HalpIommuProcessReservationsInternal @ 0x1404C47F4 (HalpIommuProcessReservationsInternal.c)
 *     HalpRegisterDmaController @ 0x1404CA114 (HalpRegisterDmaController.c)
 *     HalpInterruptMapParkedPage @ 0x1404CC4E0 (HalpInterruptMapParkedPage.c)
 *     ExtEnvAllocateMemory @ 0x1404CFCD0 (ExtEnvAllocateMemory.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404D650C (HalpIommuCreateDmarPageTable.c)
 *     HalpInitializeInterrupts @ 0x140A3667C (HalpInitializeInterrupts.c)
 *     HalpSetupAcpiPhase0 @ 0x140A5C300 (HalpSetupAcpiPhase0.c)
 *     HalpPowerInitNvsRegionData @ 0x140A654AC (HalpPowerInitNvsRegionData.c)
 *     HalpCopyDebugDescriptor @ 0x140A6A270 (HalpCopyDebugDescriptor.c)
 *     HalpExtInitExtensions @ 0x140A6B34C (HalpExtInitExtensions.c)
 *     ExtEnvRegisterIommu @ 0x140A8A8F0 (ExtEnvRegisterIommu.c)
 *     HalpBlkAllocateShadowData @ 0x140A8BDE0 (HalpBlkAllocateShadowData.c)
 * Callees:
 *     HalpMap @ 0x1403B7668 (HalpMap.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemory @ 0x140A5D0A0 (HalpAllocPhysicalMemory.c)
 */

__int64 __fastcall HalpMmAllocateMemoryInternal(int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( !HalpMmLoaderBlock || KeGetPcr()->Prcb.Number )
    KeBugCheckEx(0x5Cu, 0x8000uLL, 0x8675309uLL, 0LL, 0LL);
  if ( a2 > 1 )
    return 0LL;
  v3 = (a1 + 7) & 0xFFFFFFF8;
  if ( HalpMmLeftoverMemorySize >= v3 )
  {
    result = HalpMmLeftoverMemory;
    HalpMmLeftoverMemory += v3;
    HalpMmLeftoverMemorySize -= v3;
    return result;
  }
  v5 = (v3 + 4095) >> 12;
  v6 = HalpAllocPhysicalMemory(HalpMmLoaderBlock, 0LL, v5, 0LL);
  if ( !v6 )
    return 0LL;
  v7 = HalpMap(v6, v5, a2 == 1, 0, 4);
  if ( v7 )
  {
    HalpMmLeftoverMemory = v7 + v3;
    HalpMmLeftoverMemorySize = (v5 << 12) - v3;
  }
  return v7;
}

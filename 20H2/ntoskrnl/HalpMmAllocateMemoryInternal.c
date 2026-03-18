/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x1403BA8B8
 * Callers:
 *     HalSocRequestApi @ 0x1403A17DC (HalSocRequestApi.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403AEB94 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpInterruptParseMadt @ 0x1403AEC54 (HalpInterruptParseMadt.c)
 *     HalpInterruptInitializeIpis @ 0x1403AF31C (HalpInterruptInitializeIpis.c)
 *     HalpTimerCreateReferencePage @ 0x1403AF824 (HalpTimerCreateReferencePage.c)
 *     HalpInterruptRegisterLine @ 0x1403B1230 (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403B1894 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403B1C50 (HalpTimerRegister.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403B2080 (HalRegisterPermanentAddressUsage.c)
 *     HalpMmAllocateMemory @ 0x1403BA7F0 (HalpMmAllocateMemory.c)
 *     HalpIommuPopulateExceptionList @ 0x1403CEF40 (HalpIommuPopulateExceptionList.c)
 *     HalpExtRegisterResourceDescriptor @ 0x1404C2980 (HalpExtRegisterResourceDescriptor.c)
 *     HalpIommuProcessReservationsInternal @ 0x1404C81D0 (HalpIommuProcessReservationsInternal.c)
 *     HalpRegisterDmaController @ 0x1404CDB24 (HalpRegisterDmaController.c)
 *     HalpInterruptMapParkedPage @ 0x1404CFF30 (HalpInterruptMapParkedPage.c)
 *     ExtEnvAllocateMemory @ 0x1404D3720 (ExtEnvAllocateMemory.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404D9FAC (HalpIommuCreateDmarPageTable.c)
 *     HalpInitializeInterrupts @ 0x140A45CAC (HalpInitializeInterrupts.c)
 *     HalpSetupAcpiPhase0 @ 0x140A62700 (HalpSetupAcpiPhase0.c)
 *     HalpPowerInitNvsRegionData @ 0x140A6C15C (HalpPowerInitNvsRegionData.c)
 *     HalpCopyDebugDescriptor @ 0x140A70DDC (HalpCopyDebugDescriptor.c)
 *     HalpExtInitExtensions @ 0x140A71EB8 (HalpExtInitExtensions.c)
 *     ExtEnvRegisterIommu @ 0x140A8FB90 (ExtEnvRegisterIommu.c)
 *     HalpBlkAllocateShadowData @ 0x140A91080 (HalpBlkAllocateShadowData.c)
 * Callees:
 *     HalpMap @ 0x1403BAF38 (HalpMap.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemory @ 0x140A634A0 (HalpAllocPhysicalMemory.c)
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

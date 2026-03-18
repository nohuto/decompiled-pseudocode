/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x1403B7E18
 * Callers:
 *     HalSocRequestApi @ 0x14039F30C (HalSocRequestApi.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403AC5A4 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpInterruptParseMadt @ 0x1403AC664 (HalpInterruptParseMadt.c)
 *     HalpInterruptInitializeIpis @ 0x1403ACD34 (HalpInterruptInitializeIpis.c)
 *     HalpTimerCreateReferencePage @ 0x1403AD23C (HalpTimerCreateReferencePage.c)
 *     HalpInterruptRegisterLine @ 0x1403AEC40 (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403AF2A4 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403AF660 (HalpTimerRegister.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403AFA90 (HalRegisterPermanentAddressUsage.c)
 *     HalpMmAllocateMemory @ 0x1403B7D50 (HalpMmAllocateMemory.c)
 *     HalpIommuPopulateExceptionList @ 0x1403CC320 (HalpIommuPopulateExceptionList.c)
 *     HalpExtRegisterResourceDescriptor @ 0x1404BF460 (HalpExtRegisterResourceDescriptor.c)
 *     HalpIommuProcessReservationsInternal @ 0x1404C4CA8 (HalpIommuProcessReservationsInternal.c)
 *     HalpRegisterDmaController @ 0x1404CA5C4 (HalpRegisterDmaController.c)
 *     HalpInterruptMapParkedPage @ 0x1404CC990 (HalpInterruptMapParkedPage.c)
 *     ExtEnvAllocateMemory @ 0x1404D0180 (ExtEnvAllocateMemory.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404D6A1C (HalpIommuCreateDmarPageTable.c)
 *     HalpInitializeInterrupts @ 0x140A3FA0C (HalpInitializeInterrupts.c)
 *     HalpSetupAcpiPhase0 @ 0x140A5B3A0 (HalpSetupAcpiPhase0.c)
 *     HalpPowerInitNvsRegionData @ 0x140A64E8C (HalpPowerInitNvsRegionData.c)
 *     HalpCopyDebugDescriptor @ 0x140A6A4D0 (HalpCopyDebugDescriptor.c)
 *     HalpExtInitExtensions @ 0x140A6B5AC (HalpExtInitExtensions.c)
 *     ExtEnvRegisterIommu @ 0x140A89E80 (ExtEnvRegisterIommu.c)
 *     HalpBlkAllocateShadowData @ 0x140A8B370 (HalpBlkAllocateShadowData.c)
 * Callees:
 *     HalpMap @ 0x1403B8498 (HalpMap.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemory @ 0x140A5C140 (HalpAllocPhysicalMemory.c)
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

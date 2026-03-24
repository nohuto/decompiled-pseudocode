/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x1403BB2B8
 * Callers:
 *     HalSocRequestApi @ 0x1403A209C (HalSocRequestApi.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403A8B44 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpInterruptParseMadt @ 0x1403A8C04 (HalpInterruptParseMadt.c)
 *     HalpInterruptInitializeIpis @ 0x1403A92CC (HalpInterruptInitializeIpis.c)
 *     HalpTimerCreateReferencePage @ 0x1403A97D4 (HalpTimerCreateReferencePage.c)
 *     HalpInterruptRegisterLine @ 0x1403AB1E0 (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403AB844 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403ABC00 (HalpTimerRegister.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403AC030 (HalRegisterPermanentAddressUsage.c)
 *     HalpMmAllocateMemory @ 0x1403BB1F0 (HalpMmAllocateMemory.c)
 *     HalpIommuPopulateExceptionList @ 0x1403CF8B0 (HalpIommuPopulateExceptionList.c)
 *     HalpExtRegisterResourceDescriptor @ 0x1404C4350 (HalpExtRegisterResourceDescriptor.c)
 *     HalpIommuProcessReservationsInternal @ 0x1404C9BA0 (HalpIommuProcessReservationsInternal.c)
 *     HalpRegisterDmaController @ 0x1404CF4F4 (HalpRegisterDmaController.c)
 *     HalpInterruptMapParkedPage @ 0x1404D1900 (HalpInterruptMapParkedPage.c)
 *     ExtEnvAllocateMemory @ 0x1404D50F0 (ExtEnvAllocateMemory.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404DB9BC (HalpIommuCreateDmarPageTable.c)
 *     HalpInitializeInterrupts @ 0x140A396FC (HalpInitializeInterrupts.c)
 *     HalpSetupAcpiPhase0 @ 0x140A63D20 (HalpSetupAcpiPhase0.c)
 *     HalpPowerInitNvsRegionData @ 0x140A69594 (HalpPowerInitNvsRegionData.c)
 *     HalpCopyDebugDescriptor @ 0x140A6DD5C (HalpCopyDebugDescriptor.c)
 *     HalpExtInitExtensions @ 0x140A6EE38 (HalpExtInitExtensions.c)
 *     ExtEnvRegisterIommu @ 0x140A8C9F0 (ExtEnvRegisterIommu.c)
 *     HalpBlkAllocateShadowData @ 0x140A8DEE0 (HalpBlkAllocateShadowData.c)
 * Callees:
 *     HalpMap @ 0x1403BB938 (HalpMap.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemory @ 0x140A64AC0 (HalpAllocPhysicalMemory.c)
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

/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x1403BB428
 * Callers:
 *     HalSocRequestApi @ 0x1403A21EC (HalSocRequestApi.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403A98D4 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpInterruptParseMadt @ 0x1403A9994 (HalpInterruptParseMadt.c)
 *     HalpInterruptInitializeIpis @ 0x1403AA05C (HalpInterruptInitializeIpis.c)
 *     HalpTimerCreateReferencePage @ 0x1403AA564 (HalpTimerCreateReferencePage.c)
 *     HalpInterruptRegisterLine @ 0x1403ABF70 (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403AC5D4 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403AC990 (HalpTimerRegister.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403ACDC0 (HalRegisterPermanentAddressUsage.c)
 *     HalpMmAllocateMemory @ 0x1403BB360 (HalpMmAllocateMemory.c)
 *     HalpIommuPopulateExceptionList @ 0x1403CFA20 (HalpIommuPopulateExceptionList.c)
 *     HalpExtRegisterResourceDescriptor @ 0x1404C4590 (HalpExtRegisterResourceDescriptor.c)
 *     HalpIommuProcessReservationsInternal @ 0x1404C9DE0 (HalpIommuProcessReservationsInternal.c)
 *     HalpRegisterDmaController @ 0x1404CF734 (HalpRegisterDmaController.c)
 *     HalpInterruptMapParkedPage @ 0x1404D1B40 (HalpInterruptMapParkedPage.c)
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404DBBFC (HalpIommuCreateDmarPageTable.c)
 *     HalpInitializeInterrupts @ 0x140A3A6FC (HalpInitializeInterrupts.c)
 *     HalpSetupAcpiPhase0 @ 0x140A64D20 (HalpSetupAcpiPhase0.c)
 *     HalpPowerInitNvsRegionData @ 0x140A6A594 (HalpPowerInitNvsRegionData.c)
 *     HalpCopyDebugDescriptor @ 0x140A6ED5C (HalpCopyDebugDescriptor.c)
 *     HalpExtInitExtensions @ 0x140A6FE38 (HalpExtInitExtensions.c)
 *     ExtEnvRegisterIommu @ 0x140A8D9F0 (ExtEnvRegisterIommu.c)
 *     HalpBlkAllocateShadowData @ 0x140A8EEE0 (HalpBlkAllocateShadowData.c)
 * Callees:
 *     HalpMap @ 0x1403BBAA8 (HalpMap.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemory @ 0x140A65AC0 (HalpAllocPhysicalMemory.c)
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

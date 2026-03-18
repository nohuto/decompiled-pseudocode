/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x1403BF104
 * Callers:
 *     HalSocRequestApi @ 0x1403B38C8 (HalSocRequestApi.c)
 *     HalpInterruptParseMadt @ 0x1403B8644 (HalpInterruptParseMadt.c)
 *     HalpInterruptInitializeIpis @ 0x1403B8D0C (HalpInterruptInitializeIpis.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403BB634 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpTimerCreateReferencePage @ 0x1403BBC5C (HalpTimerCreateReferencePage.c)
 *     HalpInterruptRegisterLine @ 0x1403BD66C (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403BDD00 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403BE0BC (HalpTimerRegister.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403BE4F0 (HalRegisterPermanentAddressUsage.c)
 *     HalpMmAllocateMemory @ 0x1403BECF8 (HalpMmAllocateMemory.c)
 *     ExtEnvAllocateMemory @ 0x1403CE24C (ExtEnvAllocateMemory.c)
 *     HalpIommuAddDebuggerException @ 0x1403DD678 (HalpIommuAddDebuggerException.c)
 *     HalpExtRegisterResourceDescriptor @ 0x140510850 (HalpExtRegisterResourceDescriptor.c)
 *     HalpRegisterDmaController @ 0x14051A18C (HalpRegisterDmaController.c)
 *     HalpIommuProcessReservationsInternal @ 0x14051B720 (HalpIommuProcessReservationsInternal.c)
 *     HalpInterruptMapParkedPage @ 0x14051DEB0 (HalpInterruptMapParkedPage.c)
 *     HalpIommuCreateDmarPageTable @ 0x140529654 (HalpIommuCreateDmarPageTable.c)
 *     HalpCopyDebugDescriptor @ 0x140AF70C8 (HalpCopyDebugDescriptor.c)
 *     HalpInitializeInterrupts @ 0x140AF82A8 (HalpInitializeInterrupts.c)
 *     HalpSetupAcpiPhase0 @ 0x140AF968C (HalpSetupAcpiPhase0.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140AFA274 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpAllocateNumaConfigData @ 0x140AFA63C (HalpAllocateNumaConfigData.c)
 *     HalpPowerInitNvsRegionData @ 0x140B237A4 (HalpPowerInitNvsRegionData.c)
 *     HalpExtInitExtensions @ 0x140B2AB30 (HalpExtInitExtensions.c)
 *     ExtEnvRegisterIommu @ 0x140B4BF38 (ExtEnvRegisterIommu.c)
 *     HalpBlkAllocateShadowData @ 0x140B4D08C (HalpBlkAllocateShadowData.c)
 * Callees:
 *     HalpMap @ 0x1403BF3B8 (HalpMap.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemory @ 0x140AF9E94 (HalpAllocPhysicalMemory.c)
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

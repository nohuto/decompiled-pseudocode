/*
 * XREFs of HvlpHandleInsufficientMemory @ 0x1405438E8
 * Callers:
 *     HvlDmaAllocateDeviceDomain @ 0x140545D80 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140545E50 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140546300 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405465C0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlMapDeviceInterrupt @ 0x140547570 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x140547D00 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1405481F0 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x140548790 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1405488E0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140548960 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x140548B70 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140548FF0 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x140549218 (HvlpAttachRootSvmDevice.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140931378 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     HvlpDepositPages @ 0x140544258 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpHandleInsufficientMemory(__int16 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a1 == 117;
  return HvlpDepositPages(0LL, a2, a3);
}

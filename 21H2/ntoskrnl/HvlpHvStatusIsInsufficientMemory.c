/*
 * XREFs of HvlpHvStatusIsInsufficientMemory @ 0x140459C2A
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
 *     <none>
 */

bool __fastcall HvlpHvStatusIsInsufficientMemory(__int16 a1)
{
  return a1 == 11 || a1 == 117;
}

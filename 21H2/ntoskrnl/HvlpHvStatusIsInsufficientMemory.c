/*
 * XREFs of HvlpHvStatusIsInsufficientMemory @ 0x1404FACD8
 * Callers:
 *     HvlDmaAllocateDeviceDomain @ 0x1404F4430 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404F44E0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404F47F0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404F4A90 (HvlDmaMapDeviceSparsePages.c)
 *     HvlMapDeviceInterrupt @ 0x1404F59F0 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x1404F6140 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1404F6560 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F6A70 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F6BC0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F6C40 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x1404F6E50 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F72C0 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F7458 (HvlpAttachRootSvmDevice.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088E9AC (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvlpHvStatusIsInsufficientMemory(__int16 a1)
{
  return a1 == 11 || a1 == 117;
}

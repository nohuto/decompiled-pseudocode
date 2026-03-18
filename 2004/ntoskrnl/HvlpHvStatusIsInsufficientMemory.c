/*
 * XREFs of HvlpHvStatusIsInsufficientMemory @ 0x1404F58A8
 * Callers:
 *     HvlDmaAllocateDeviceDomain @ 0x1404EF040 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404EF0F0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404EF400 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404EF6A0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlMapDeviceInterrupt @ 0x1404F05E0 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x1404F0D30 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1404F1150 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F1660 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F17B0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F1830 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x1404F1A40 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F1EB0 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F2048 (HvlpAttachRootSvmDevice.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088B8BC (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvlpHvStatusIsInsufficientMemory(__int16 a1)
{
  return a1 == 11 || a1 == 117;
}

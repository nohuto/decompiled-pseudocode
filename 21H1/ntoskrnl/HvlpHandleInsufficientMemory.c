/*
 * XREFs of HvlpHandleInsufficientMemory @ 0x1404EC608
 * Callers:
 *     HvlDmaAllocateDeviceDomain @ 0x1404EE9F0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404EEAA0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404EEDB0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404EF050 (HvlDmaMapDeviceSparsePages.c)
 *     HvlMapDeviceInterrupt @ 0x1404EFF90 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x1404F06E0 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1404F0B00 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F1010 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F1160 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F11E0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x1404F13F0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F1860 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F19F8 (HvlpAttachRootSvmDevice.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088A59C (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     HvlpDepositPages @ 0x1404ED1A8 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpHandleInsufficientMemory(__int16 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a1 == 117;
  return HvlpDepositPages(0LL, a2, a3);
}

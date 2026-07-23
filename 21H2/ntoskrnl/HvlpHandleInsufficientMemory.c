/*
 * XREFs of HvlpHandleInsufficientMemory @ 0x1404F1FE8
 * Callers:
 *     HvlDmaAllocateDeviceDomain @ 0x1404F43B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404F4460 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404F4770 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404F4A10 (HvlDmaMapDeviceSparsePages.c)
 *     HvlMapDeviceInterrupt @ 0x1404F5970 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x1404F60C0 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1404F64E0 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F69F0 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F6B40 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F6BC0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x1404F6DD0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F7240 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F73D8 (HvlpAttachRootSvmDevice.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088EB0C (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     HvlpDepositPages @ 0x1404F2B84 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpHandleInsufficientMemory(__int16 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a1 == 117;
  return HvlpDepositPages(0LL, a2, a3);
}

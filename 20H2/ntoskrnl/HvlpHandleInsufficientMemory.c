/*
 * XREFs of HvlpHandleInsufficientMemory @ 0x1404F04C8
 * Callers:
 *     HvlDmaAllocateDeviceDomain @ 0x1404F2890 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404F2940 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404F2C50 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404F2EF0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlMapDeviceInterrupt @ 0x1404F3E50 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x1404F45A0 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1404F49C0 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F4ED0 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F5020 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F50A0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x1404F52B0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F5720 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F58B8 (HvlpAttachRootSvmDevice.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14089140C (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     HvlpDepositPages @ 0x1404F1064 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpHandleInsufficientMemory(__int16 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a1 == 117;
  return HvlpDepositPages(0LL, a2, a3);
}

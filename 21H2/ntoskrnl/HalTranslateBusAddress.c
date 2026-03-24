/*
 * XREFs of HalTranslateBusAddress @ 0x1403A5A60
 * Callers:
 *     HeadlessTerminalAddResources @ 0x14079568C (HeadlessTerminalAddResources.c)
 *     IopTranslateBusAddress @ 0x1407BE0B8 (IopTranslateBusAddress.c)
 *     HalpReportResourceUsage @ 0x140A39D8C (HalpReportResourceUsage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall HalTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  if ( InterfaceType == PCIBus )
    return ((__int64 (__fastcall *)(_QWORD, _DWORD, _QWORD, _QWORD, _QWORD))off_140C005C8[0])(
             5LL,
             BusNumber,
             (PHYSICAL_ADDRESS)BusAddress.QuadPart,
             AddressSpace,
             TranslatedAddress);
  *TranslatedAddress = BusAddress;
  return 1;
}

/*
 * XREFs of HalGetBusDataByOffset @ 0x14039BBF0
 * Callers:
 *     HalGetBusData @ 0x1403C4B70 (HalGetBusData.c)
 *     HalpWhackICHUsbSmi @ 0x1404D23C4 (HalpWhackICHUsbSmi.c)
 *     HalpPiix4Detect @ 0x140996E20 (HalpPiix4Detect.c)
 *     KdpSysReadBusData @ 0x1409B5E98 (KdpSysReadBusData.c)
 * Callees:
 *     HalpGetPCIData @ 0x14039BC44 (HalpGetPCIData.c)
 *     HalpGetSetCmosData @ 0x1404C735C (HalpGetSetCmosData.c)
 */

ULONG __stdcall HalGetBusDataByOffset(
        BUS_DATA_TYPE BusDataType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PVOID Buffer,
        ULONG Offset,
        ULONG Length)
{
  if ( BusDataType == Cmos )
    return HalpGetSetCmosData(0, SlotNumber, (_DWORD)Buffer, Length, 0);
  if ( BusNumber <= HalpMaxPciBus && BusDataType == PCIConfiguration && BusNumber >= HalpMinPciBus )
    return HalpGetPCIData(BusNumber >> 8);
  return 0;
}

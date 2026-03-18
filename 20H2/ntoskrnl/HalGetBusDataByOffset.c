/*
 * XREFs of HalGetBusDataByOffset @ 0x14039ED40
 * Callers:
 *     HalGetBusData @ 0x1403C7610 (HalGetBusData.c)
 *     HalpWhackICHUsbSmi @ 0x1404D5954 (HalpWhackICHUsbSmi.c)
 *     HalpPiix4Detect @ 0x14099CE60 (HalpPiix4Detect.c)
 *     KdpSysReadBusData @ 0x1409BBE98 (KdpSysReadBusData.c)
 * Callees:
 *     HalpGetPCIData @ 0x14039ED94 (HalpGetPCIData.c)
 *     HalpGetSetCmosData @ 0x1404CA8BC (HalpGetSetCmosData.c)
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

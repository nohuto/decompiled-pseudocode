/*
 * XREFs of HalGetBusDataByOffset @ 0x14039E980
 * Callers:
 *     HalGetBusData @ 0x1403C83A0 (HalGetBusData.c)
 *     HalpWhackICHUsbSmi @ 0x1404D7324 (HalpWhackICHUsbSmi.c)
 *     HalpPiix4Detect @ 0x14099A3E0 (HalpPiix4Detect.c)
 *     KdpSysReadBusData @ 0x1409B8E98 (KdpSysReadBusData.c)
 * Callees:
 *     HalpGetPCIData @ 0x14039E9D4 (HalpGetPCIData.c)
 *     HalpGetSetCmosData @ 0x1404CC28C (HalpGetSetCmosData.c)
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

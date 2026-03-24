/*
 * XREFs of HalSetBusDataByOffset @ 0x14039E860
 * Callers:
 *     HalSetBusData @ 0x1404B8A70 (HalSetBusData.c)
 *     HalpPiix4Detect @ 0x14099A3E0 (HalpPiix4Detect.c)
 *     KdpSysWriteBusData @ 0x1409B8F00 (KdpSysWriteBusData.c)
 * Callees:
 *     HalpSetPCIData @ 0x14039E8A4 (HalpSetPCIData.c)
 *     HalpGetSetCmosData @ 0x1404CC28C (HalpGetSetCmosData.c)
 */

ULONG __stdcall HalSetBusDataByOffset(
        BUS_DATA_TYPE BusDataType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PVOID Buffer,
        ULONG Offset,
        ULONG Length)
{
  if ( BusDataType == Cmos )
    return HalpGetSetCmosData(0, SlotNumber, (_DWORD)Buffer, Length, 1);
  if ( BusDataType == PCIConfiguration )
    return HalpSetPCIData(BusNumber >> 8, BusNumber, SlotNumber, (_DWORD)Buffer, Offset, Length);
  return 0;
}

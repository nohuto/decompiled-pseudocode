/*
 * XREFs of HalSetBusDataByOffset @ 0x14039BAD0
 * Callers:
 *     HalSetBusData @ 0x1404B3B90 (HalSetBusData.c)
 *     HalpPiix4Detect @ 0x140996E20 (HalpPiix4Detect.c)
 *     KdpSysWriteBusData @ 0x1409B5F00 (KdpSysWriteBusData.c)
 * Callees:
 *     HalpSetPCIData @ 0x14039BB14 (HalpSetPCIData.c)
 *     HalpGetSetCmosData @ 0x1404C735C (HalpGetSetCmosData.c)
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

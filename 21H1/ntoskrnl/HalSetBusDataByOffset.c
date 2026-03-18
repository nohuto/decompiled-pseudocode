/*
 * XREFs of HalSetBusDataByOffset @ 0x14039B340
 * Callers:
 *     HalSetBusData @ 0x1404B34B0 (HalSetBusData.c)
 *     HalpPiix4Detect @ 0x140995A50 (HalpPiix4Detect.c)
 *     KdpSysWriteBusData @ 0x1409B5F00 (KdpSysWriteBusData.c)
 * Callees:
 *     HalpSetPCIData @ 0x14039B384 (HalpSetPCIData.c)
 *     HalpGetSetCmosData @ 0x1404C6EAC (HalpGetSetCmosData.c)
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

/*
 * XREFs of KdpSysReadBusData @ 0x1409B8E98
 * Callers:
 *     KdSystemDebugControl @ 0x1408B9B60 (KdSystemDebugControl.c)
 *     KdpGetBusData @ 0x1409B7560 (KdpGetBusData.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x14039E980 (HalGetBusDataByOffset.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KdpSysReadBusData(
        BUS_DATA_TYPE a1,
        ULONG a2,
        ULONG a3,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length,
        ULONG *a7)
{
  ULONG BusDataByOffset; // eax

  if ( a1 == PCIConfiguration )
    BusDataByOffset = ((__int64 (__fastcall *)(_QWORD, _QWORD, PVOID))qword_140C00630)(a2, a3, Buffer);
  else
    BusDataByOffset = HalGetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = BusDataByOffset;
  return Length != BusDataByOffset ? 0xC0000001 : 0;
}

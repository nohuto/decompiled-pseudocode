/*
 * XREFs of KdpSysReadBusData @ 0x1409BBE98
 * Callers:
 *     KdSystemDebugControl @ 0x1408BC680 (KdSystemDebugControl.c)
 *     KdpGetBusData @ 0x1409BA560 (KdpGetBusData.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x14039ED40 (HalGetBusDataByOffset.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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

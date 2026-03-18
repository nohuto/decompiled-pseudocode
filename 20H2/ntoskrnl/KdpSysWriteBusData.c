/*
 * XREFs of KdpSysWriteBusData @ 0x1409BBF00
 * Callers:
 *     KdSystemDebugControl @ 0x1408BC680 (KdSystemDebugControl.c)
 *     KdpSetBusData @ 0x1409BBCF0 (KdpSetBusData.c)
 * Callees:
 *     HalSetBusDataByOffset @ 0x14039EC20 (HalSetBusDataByOffset.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KdpSysWriteBusData(
        BUS_DATA_TYPE a1,
        ULONG a2,
        ULONG a3,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length,
        ULONG *a7)
{
  ULONG v7; // eax

  if ( a1 == PCIConfiguration )
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, PVOID))qword_140C00638)(a2, a3, Buffer);
  else
    v7 = HalSetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = v7;
  return Length != v7 ? 0xC0000001 : 0;
}

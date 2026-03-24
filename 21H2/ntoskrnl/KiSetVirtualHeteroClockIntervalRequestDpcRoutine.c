/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x140520AD0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140520994 (KiSetVirtualHeteroClockIntervalRequest.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequestDpcRoutine(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return KiSetVirtualHeteroClockIntervalRequest(KiPendingVirtualHeteroRequest == 0, a2, a3, a4);
}

/*
 * XREFs of EtwpBuffersFlushRequired @ 0x1403188D0
 * Callers:
 *     EtwpSwitchBuffer @ 0x140241288 (EtwpSwitchBuffer.c)
 *     EtwInitialize @ 0x1407867D8 (EtwInitialize.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14024124C (EtwpQueryUsedProcessorCount.c)
 */

bool __fastcall EtwpBuffersFlushRequired(_DWORD *a1)
{
  return !a1[57] || (int)(a1[62] - EtwpQueryUsedProcessorCount((__int64)a1) - a1[61]) >= a1[57];
}

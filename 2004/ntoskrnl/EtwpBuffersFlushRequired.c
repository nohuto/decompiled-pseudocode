/*
 * XREFs of EtwpBuffersFlushRequired @ 0x1403564CC
 * Callers:
 *     EtwpSwitchBuffer @ 0x14027E018 (EtwpSwitchBuffer.c)
 *     EtwInitialize @ 0x14079A310 (EtwInitialize.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027DFDC (EtwpQueryUsedProcessorCount.c)
 */

bool __fastcall EtwpBuffersFlushRequired(_DWORD *a1)
{
  return !a1[57] || (int)(a1[62] - EtwpQueryUsedProcessorCount((__int64)a1) - a1[61]) >= a1[57];
}

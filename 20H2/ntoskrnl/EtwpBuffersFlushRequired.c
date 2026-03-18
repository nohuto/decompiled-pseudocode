/*
 * XREFs of EtwpBuffersFlushRequired @ 0x140326D2C
 * Callers:
 *     EtwpSwitchBuffer @ 0x1402670E0 (EtwpSwitchBuffer.c)
 *     EtwInitialize @ 0x1407A9640 (EtwInitialize.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x1402670A4 (EtwpQueryUsedProcessorCount.c)
 */

bool __fastcall EtwpBuffersFlushRequired(_DWORD *a1)
{
  return !a1[57] || (int)(a1[62] - EtwpQueryUsedProcessorCount((__int64)a1) - a1[61]) >= a1[57];
}

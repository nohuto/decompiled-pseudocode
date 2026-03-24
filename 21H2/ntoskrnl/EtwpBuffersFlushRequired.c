/*
 * XREFs of EtwpBuffersFlushRequired @ 0x1402C7BAC
 * Callers:
 *     EtwpSwitchBuffer @ 0x140265E94 (EtwpSwitchBuffer.c)
 *     EtwInitialize @ 0x140798D94 (EtwInitialize.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140265E58 (EtwpQueryUsedProcessorCount.c)
 */

bool __fastcall EtwpBuffersFlushRequired(_DWORD *a1)
{
  return !a1[57] || (int)(a1[62] - EtwpQueryUsedProcessorCount((__int64)a1) - a1[61]) >= a1[57];
}

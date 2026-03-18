/*
 * XREFs of EtwpBuffersFlushRequired @ 0x14025116C
 * Callers:
 *     EtwpSwitchBuffer @ 0x1402E1704 (EtwpSwitchBuffer.c)
 *     EtwInitialize @ 0x14082AB94 (EtwInitialize.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x1402E1C80 (EtwpQueryUsedProcessorCount.c)
 */

bool __fastcall EtwpBuffersFlushRequired(_DWORD *a1)
{
  return !a1[53] || (int)(a1[58] - EtwpQueryUsedProcessorCount() - a1[57]) >= a1[53];
}

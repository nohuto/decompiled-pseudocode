/*
 * XREFs of EtwpBuffersFlushRequired @ 0x140246400
 * Callers:
 *     EtwpSwitchBuffer @ 0x140253E34 (EtwpSwitchBuffer.c)
 *     EtwInitialize @ 0x140798F94 (EtwInitialize.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140253DF8 (EtwpQueryUsedProcessorCount.c)
 */

bool __fastcall EtwpBuffersFlushRequired(_DWORD *a1)
{
  return !a1[57] || (int)(a1[62] - EtwpQueryUsedProcessorCount() - a1[61]) >= a1[57];
}

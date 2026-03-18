/*
 * XREFs of ExpGetSystemEmulationProcessorInformation @ 0x14035FA18
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1403603C0 (KeQueryMaximumProcessorCountEx.c)
 */

__int64 __fastcall ExpGetSystemEmulationProcessorInformation(__int64 a1)
{
  *(_WORD *)a1 = 0;
  *(_WORD *)(a1 + 2) = KeProcessorLevel;
  *(_WORD *)(a1 + 4) = KeProcessorRevision;
  *(_WORD *)(a1 + 6) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  *(_DWORD *)(a1 + 8) = KeFeatureBits;
  return 0LL;
}

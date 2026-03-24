/*
 * XREFs of MmGetSystemPageCounts @ 0x14027226C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140646800 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_140C4CD48;
}

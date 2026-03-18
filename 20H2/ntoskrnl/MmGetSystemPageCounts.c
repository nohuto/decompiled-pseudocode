/*
 * XREFs of MmGetSystemPageCounts @ 0x14023EB8C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406358D0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_140C4CBC8;
}

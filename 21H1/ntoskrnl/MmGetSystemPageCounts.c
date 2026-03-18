/*
 * XREFs of MmGetSystemPageCounts @ 0x140203FFC
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1405DA2D0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_140C4CC88;
}

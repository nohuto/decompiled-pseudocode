/*
 * XREFs of ExQueryPoolUsage @ 0x140204084
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1405DA2D0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     ExHeapQueryPoolUsage @ 0x1402040C8 (ExHeapQueryPoolUsage.c)
 */

__int64 __fastcall ExQueryPoolUsage(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  return ExHeapQueryPoolUsage(a1, a2, a3, a4, a5, a6, a7, a8);
}

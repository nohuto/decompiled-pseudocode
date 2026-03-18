/*
 * XREFs of DxgkQueryStatistics @ 0x1C0221690
 * Callers:
 *     <none>
 * Callees:
 *     DxgkQueryStatisticsInternal @ 0x1C02216A8 (DxgkQueryStatisticsInternal.c)
 */

__int64 __fastcall DxgkQueryStatistics(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkQueryStatisticsInternal(a1, a2);
}

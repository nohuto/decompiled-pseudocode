/*
 * XREFs of DxgkGetPresentHistory @ 0x1C027E560
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetPresentHistoryInternal @ 0x1C00D7510 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall DxgkGetPresentHistory(ULONG64 a1, __int64 a2, __int64 a3)
{
  return DxgkGetPresentHistoryInternal(a1, 1, a3);
}

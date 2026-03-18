/*
 * XREFs of ?Release@CBitmap@@W7EAAKXZ @ 0x180106C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::Release(__int64 a1)
{
  return CSystemMemoryBitmap::Release((CSystemMemoryBitmap *)(a1 - 8));
}

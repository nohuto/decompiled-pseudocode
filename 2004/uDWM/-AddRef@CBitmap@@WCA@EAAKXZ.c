/*
 * XREFs of ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800561A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CCompoundBitmapLock::AddRef((CCompoundBitmapLock *)(a1 - 32));
}

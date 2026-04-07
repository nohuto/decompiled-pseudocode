/*
 * XREFs of ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x180056180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CCompoundBitmapLock::AddRef((CCompoundBitmapLock *)(a1 - 16));
}

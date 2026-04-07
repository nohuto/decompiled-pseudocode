/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x180056620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CCompoundBitmapLock::AddRef((CCompoundBitmapLock *)(a1 - 248));
}

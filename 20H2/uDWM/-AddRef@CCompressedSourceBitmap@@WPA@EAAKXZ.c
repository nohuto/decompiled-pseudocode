/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x180056610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CCompoundBitmapLock::AddRef((CCompoundBitmapLock *)(a1 - 240));
}

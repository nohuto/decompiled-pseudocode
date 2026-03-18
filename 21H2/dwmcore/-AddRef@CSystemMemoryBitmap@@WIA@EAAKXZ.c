/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ @ 0x180106AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CColorKeyBitmap::AddRef((CColorKeyBitmap *)(a1 - 128));
}

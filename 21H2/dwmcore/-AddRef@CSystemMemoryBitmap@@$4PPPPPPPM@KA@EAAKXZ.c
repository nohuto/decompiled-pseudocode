/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ @ 0x180107EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CColorKeyBitmap::AddRef((CColorKeyBitmap *)(a1 - *(int *)(a1 - 4) - 160));
}

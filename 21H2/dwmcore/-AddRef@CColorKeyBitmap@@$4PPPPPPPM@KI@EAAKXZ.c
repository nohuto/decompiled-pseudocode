/*
 * XREFs of ?AddRef@CColorKeyBitmap@@$4PPPPPPPM@KI@EAAKXZ @ 0x1800F65F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CColorKeyBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 168));
}

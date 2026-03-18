/*
 * XREFs of ?AddRef@CGdiSpriteBitmap@@$4PPPPPPPM@CAI@EAAKXZ @ 0x1800F0870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGdiSpriteBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 520));
}

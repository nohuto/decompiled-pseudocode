/*
 * XREFs of ?AddRef@CGdiSpriteBitmap@@$4PPPPPPPM@BNA@EAAKXZ @ 0x1801074B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGdiSpriteBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 464));
}

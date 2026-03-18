/*
 * XREFs of ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x1800EFE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 48));
}

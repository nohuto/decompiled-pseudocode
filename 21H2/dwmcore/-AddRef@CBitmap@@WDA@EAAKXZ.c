/*
 * XREFs of ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x1800F5C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 48));
}

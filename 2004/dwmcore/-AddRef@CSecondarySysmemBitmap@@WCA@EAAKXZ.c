/*
 * XREFs of ?AddRef@CSecondarySysmemBitmap@@WCA@EAAKXZ @ 0x1800F01A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondarySysmemBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 32));
}

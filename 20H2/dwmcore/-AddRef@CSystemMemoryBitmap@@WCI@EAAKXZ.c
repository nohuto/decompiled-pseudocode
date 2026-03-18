/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ @ 0x1800EFE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 40));
}

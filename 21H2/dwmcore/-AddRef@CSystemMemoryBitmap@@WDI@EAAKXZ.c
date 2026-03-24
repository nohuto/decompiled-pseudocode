/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WDI@EAAKXZ @ 0x1800F5C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 56));
}

/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WPI@EAAKXZ @ 0x1800ED250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 248));
}

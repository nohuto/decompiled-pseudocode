/*
 * XREFs of ?AddRef@CBitmapLock@@$4PPPPPPPM@KA@EAAKXZ @ 0x1800F0E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapLock::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 160));
}

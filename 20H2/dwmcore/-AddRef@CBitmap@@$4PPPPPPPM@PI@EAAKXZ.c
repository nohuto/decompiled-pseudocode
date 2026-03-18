/*
 * XREFs of ?AddRef@CBitmap@@$4PPPPPPPM@PI@EAAKXZ @ 0x1800F0F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 248));
}

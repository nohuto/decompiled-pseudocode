/*
 * XREFs of ?AddRef@CHolographicInteropTarget@@$4PPPPPPPM@PI@EAAKXZ @ 0x18010ABD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicInteropTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 248));
}

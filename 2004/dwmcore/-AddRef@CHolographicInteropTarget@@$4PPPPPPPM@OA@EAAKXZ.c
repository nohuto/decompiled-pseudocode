/*
 * XREFs of ?AddRef@CHolographicInteropTarget@@$4PPPPPPPM@OA@EAAKXZ @ 0x1800EF1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicInteropTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 224));
}

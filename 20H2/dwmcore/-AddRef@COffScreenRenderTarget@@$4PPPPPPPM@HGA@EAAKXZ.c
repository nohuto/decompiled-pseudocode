/*
 * XREFs of ?AddRef@COffScreenRenderTarget@@$4PPPPPPPM@HGA@EAAKXZ @ 0x1800EFAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall COffScreenRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 1888));
}

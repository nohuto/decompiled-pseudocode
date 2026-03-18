/*
 * XREFs of ?AddRef@CRenderTarget@@$4PPPPPPPM@BCI@EAAKXZ @ 0x1800ECF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 296));
}

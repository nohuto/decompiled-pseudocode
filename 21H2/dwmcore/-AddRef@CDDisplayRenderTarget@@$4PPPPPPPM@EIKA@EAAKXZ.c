/*
 * XREFs of ?AddRef@CDDisplayRenderTarget@@$4PPPPPPPM@EIKA@EAAKXZ @ 0x180105790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDisplayRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 18592));
}

/*
 * XREFs of ?AddRef@CLegacySwapChain@@$4PPPPPPPM@BFA@EAAKXZ @ 0x180108C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLegacySwapChain::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 336));
}

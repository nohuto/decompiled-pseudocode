/*
 * XREFs of ?AddRef@CLegacyStereoSwapChain@@$4PPPPPPPM@BDI@EAAKXZ @ 0x1800F78F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLegacyStereoSwapChain::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 312));
}

/*
 * XREFs of ?AddRef@CDDisplaySwapChain@@$4PPPPPPPM@BMA@EAAKXZ @ 0x1800EE660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDisplaySwapChain::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 448));
}

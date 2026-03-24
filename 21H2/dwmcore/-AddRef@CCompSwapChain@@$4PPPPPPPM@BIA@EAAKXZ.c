/*
 * XREFs of ?AddRef@CCompSwapChain@@$4PPPPPPPM@BIA@EAAKXZ @ 0x1800F80A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompSwapChain::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 384));
}

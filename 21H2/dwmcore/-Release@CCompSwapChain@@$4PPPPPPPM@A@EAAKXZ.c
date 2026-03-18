/*
 * XREFs of ?Release@CCompSwapChain@@$4PPPPPPPM@A@EAAKXZ @ 0x180109650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompSwapChain::Release(__int64 a1)
{
  return CCompSwapChain::Release((CCompSwapChain *)(a1 - *(int *)(a1 - 4)));
}

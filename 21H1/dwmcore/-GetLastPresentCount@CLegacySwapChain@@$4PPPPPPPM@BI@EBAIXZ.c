/*
 * XREFs of ?GetLastPresentCount@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ @ 0x1800EF000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetLastPresentCount(__int64 a1)
{
  return CLegacySwapChain::GetLastPresentCount((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 24));
}

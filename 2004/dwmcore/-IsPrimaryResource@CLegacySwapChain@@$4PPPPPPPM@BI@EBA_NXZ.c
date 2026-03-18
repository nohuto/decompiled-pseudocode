/*
 * XREFs of ?IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ @ 0x1800F2020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CLegacySwapChain::IsPrimaryResource(__int64 a1)
{
  return CDesktopTree::IsDesktop((CDesktopTree *)(a1 - *(int *)(a1 - 4) - 24));
}

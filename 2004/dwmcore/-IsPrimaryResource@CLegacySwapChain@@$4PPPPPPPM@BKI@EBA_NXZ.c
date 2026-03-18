/*
 * XREFs of ?IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x1800F2410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CLegacySwapChain::IsPrimaryResource(__int64 a1)
{
  return CDesktopTree::IsDesktop((CDesktopTree *)(a1 - *(int *)(a1 - 4) - 424));
}

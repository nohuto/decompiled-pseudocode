/*
 * XREFs of ?IsPrimaryResource@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F16F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDDisplaySwapChain::IsPrimaryResource(__int64 a1)
{
  return CDesktopTree::IsDesktop((CDesktopTree *)(a1 - *(int *)(a1 - 4)));
}

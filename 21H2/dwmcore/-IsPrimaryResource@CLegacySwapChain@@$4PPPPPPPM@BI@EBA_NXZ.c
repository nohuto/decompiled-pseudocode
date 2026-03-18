/*
 * XREFs of ?IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ @ 0x18010A070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CLegacySwapChain::IsPrimaryResource(__int64 a1)
{
  return CDDisplaySwapChain::IsPrimaryResource((CDDisplaySwapChain *)(a1 - *(int *)(a1 - 4) - 24));
}

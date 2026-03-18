/*
 * XREFs of ?CheckIndependentFlipSupport@CConversionSwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x180109CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CConversionSwapChain::CheckIndependentFlipSupport(__int64 a1)
{
  return CLegacyStereoSwapChain::CheckIndependentFlipSupport((CLegacyStereoSwapChain *)(a1 - *(int *)(a1 - 4)));
}

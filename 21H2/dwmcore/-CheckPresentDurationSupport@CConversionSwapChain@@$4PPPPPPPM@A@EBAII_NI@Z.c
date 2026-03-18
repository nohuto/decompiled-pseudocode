/*
 * XREFs of ?CheckPresentDurationSupport@CConversionSwapChain@@$4PPPPPPPM@A@EBAII_NI@Z @ 0x180109D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::CheckPresentDurationSupport(__int64 a1)
{
  return CDDisplaySwapChain::CheckPresentDurationSupport((CDDisplaySwapChain *)(a1 - *(int *)(a1 - 4)));
}

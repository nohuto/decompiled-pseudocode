/*
 * XREFs of ?CheckIndependentFlipSupport@CConversionSwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F7940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CConversionSwapChain::CheckIndependentFlipSupport(__int64 a1)
{
  return CWICBitmapRealization::IsProtected((CWICBitmapRealization *)(a1 - *(int *)(a1 - 4)));
}

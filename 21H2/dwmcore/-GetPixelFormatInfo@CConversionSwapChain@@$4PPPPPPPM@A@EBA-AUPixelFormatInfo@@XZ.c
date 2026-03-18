/*
 * XREFs of ?GetPixelFormatInfo@CConversionSwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18010A4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::GetPixelFormatInfo(__int64 a1)
{
  return CConversionSwapChain::GetPixelFormatInfo(a1 - *(int *)(a1 - 4));
}

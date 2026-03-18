/*
 * XREFs of ?NotifyRenderedRect@CConversionSwapChain@@$4PPPPPPPM@A@EAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800F2450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::NotifyRenderedRect(__int64 a1)
{
  return CConversionSwapChain::NotifyRenderedRect(a1 - *(int *)(a1 - 4));
}

/*
 * XREFs of ?AddComputeScribbleInvalidRects@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x180109C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::AddComputeScribbleInvalidRects(
        __int64 a1,
        __int64 a2,
        const struct MilRectU *a3,
        __int64 a4)
{
  return CLegacySwapChain::AddComputeScribbleInvalidRects(a1 - *(int *)(a1 - 4) - 24, a2, a3, a4);
}

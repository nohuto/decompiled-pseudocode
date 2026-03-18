/*
 * XREFs of ?GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800F1FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetPresentStatisticsDWM(
        __int64 a1,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  return CLegacySwapChain::GetPresentStatisticsDWM((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 424), a2, a3);
}

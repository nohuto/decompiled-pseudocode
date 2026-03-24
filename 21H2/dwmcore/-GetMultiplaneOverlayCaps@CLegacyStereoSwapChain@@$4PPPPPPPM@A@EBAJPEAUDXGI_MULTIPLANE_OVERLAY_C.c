/*
 * XREFs of ?GetMultiplaneOverlayCaps@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800F7A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyStereoSwapChain::GetMultiplaneOverlayCaps(
        __int64 a1,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  return CLegacyStereoSwapChain::GetMultiplaneOverlayCaps((CLegacyStereoSwapChain *)(a1 - *(int *)(a1 - 4)), a2);
}

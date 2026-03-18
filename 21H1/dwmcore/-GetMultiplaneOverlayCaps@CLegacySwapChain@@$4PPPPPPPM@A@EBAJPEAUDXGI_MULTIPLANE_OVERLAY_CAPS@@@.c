/*
 * XREFs of ?GetMultiplaneOverlayCaps@CLegacySwapChain@@$4PPPPPPPM@A@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800EEB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetMultiplaneOverlayCaps(__int64 a1, struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  return CLegacySwapChain::GetMultiplaneOverlayCaps((CLegacySwapChain *)(a1 - *(int *)(a1 - 4)), a2);
}

/*
 * XREFs of ?ResetCheckMPOCache@CD3DDevice@@QEAAXXZ @ 0x1800EB970
 * Callers:
 *     ?GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800D8800 (-GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     ?GetMultiplaneOverlayCaps@CDDisplaySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180236FE0 (-GetMultiplaneOverlayCaps@CDDisplaySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1800EB60C (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@.c)
 */

void __fastcall CD3DDevice::ResetCheckMPOCache(char ****this)
{
  std::_Destroy_range<std::allocator<std::unique_ptr<CCheckMPOCache>>>(this[171], this[172]);
  this[172] = this[171];
}

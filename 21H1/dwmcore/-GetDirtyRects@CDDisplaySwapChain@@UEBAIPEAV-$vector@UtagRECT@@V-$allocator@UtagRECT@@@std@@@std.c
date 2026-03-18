/*
 * XREFs of ?GetDirtyRects@CDDisplaySwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800E7930
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180190630 (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::GetDirtyRects(__int64 a1)
{
  return CRegion::GetRectangles(a1 + 232);
}

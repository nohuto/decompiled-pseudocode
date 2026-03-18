/*
 * XREFs of ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800D35E0
 * Callers:
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800D353C (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E899C (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E9490 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x180187FB4 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x180189FF8 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z @ 0x18018C080 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018E05C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x180256024 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x180256DE4 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CDirtyRegion::GetOptimizedDirtyRects(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  if ( *(_BYTE *)(a1 + 4456) )
  {
    *a2 = 1LL;
    a2[1] = a1 + 4436;
    if ( a1 == -4436 )
      goto LABEL_7;
  }
  else
  {
    v2 = *(unsigned int *)(a1 + 2852);
    *a2 = v2;
    a2[1] = a1 + 2692;
    if ( a1 == -2692 && v2 )
    {
LABEL_7:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
  }
  return a2;
}

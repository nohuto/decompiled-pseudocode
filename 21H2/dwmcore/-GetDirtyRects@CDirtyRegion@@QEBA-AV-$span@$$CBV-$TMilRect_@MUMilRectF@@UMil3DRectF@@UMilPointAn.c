/*
 * XREFs of ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800B99FC
 * Callers:
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x180016094 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x1800B93B4 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 *     ?GetBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800DFFD4 (-GetBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800FE59C (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyRegion@@PEAW4ProtectionMode@1@@Z @ 0x1801C3404 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyR.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E1378 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x18029B1A4 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

_QWORD *__fastcall CDirtyRegion::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  if ( *(_BYTE *)(a1 + 4424) )
  {
    *a2 = 1LL;
    a2[1] = a1 + 4404;
    if ( a1 == -4404 )
      goto LABEL_5;
  }
  else
  {
    v2 = *(unsigned int *)(a1 + 2820);
    *a2 = v2;
    a2[1] = a1 + 2660;
    if ( a1 == -2660 && v2 )
    {
LABEL_5:
      gsl::details::terminate((gsl::details *)a1);
      JUMPOUT(0x1800B9A4CLL);
    }
  }
  return a2;
}

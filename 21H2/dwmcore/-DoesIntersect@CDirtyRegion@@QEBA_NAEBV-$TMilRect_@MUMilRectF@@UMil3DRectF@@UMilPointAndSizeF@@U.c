/*
 * XREFs of ?DoesIntersect@CDirtyRegion@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BCAD8
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x1800B9510 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x1800BC2AC (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 *     ?SyncLock@CLegacyRenderTarget@@UEAAX_NI@Z @ 0x1801C0DD0 (-SyncLock@CLegacyRenderTarget@@UEAAX_NI@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C8C7C (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180085994 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 */

char __fastcall CDirtyRegion::DoesIntersect(__int64 a1, float *a2)
{
  float *v2; // r11
  __int64 v3; // r9
  unsigned int v4; // r8d
  int v5; // r8d
  unsigned int v6; // r10d

  v2 = a2;
  v3 = a1;
  if ( *(_BYTE *)(a1 + 4424) )
    return 1;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 2820) )
  {
    while ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
               v2,
               (float *)(16LL * v4 + v3 + 2660)) )
    {
      v4 = v5 + 1;
      if ( v4 >= v6 )
        return 0;
    }
    return 1;
  }
  return 0;
}

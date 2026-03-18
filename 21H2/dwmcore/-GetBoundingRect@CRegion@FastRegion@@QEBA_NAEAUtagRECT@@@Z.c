/*
 * XREFs of ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180069C74
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1800074D8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18003E884 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x180069B2C (-Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x180069C08 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800FECC0 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180294420 (-RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 *     ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802A3B70 (-SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802A3EE8 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall FastRegion::CRegion::GetBoundingRect(LONG **this, struct tagRECT *a2)
{
  LONG *v2; // r8
  bool result; // al

  v2 = *this;
  if ( !**this )
    return 0;
  a2->left = v2[1];
  a2->right = v2[2];
  a2->top = v2[3];
  result = 1;
  a2->bottom = v2[2 * *v2 + 1];
  return result;
}

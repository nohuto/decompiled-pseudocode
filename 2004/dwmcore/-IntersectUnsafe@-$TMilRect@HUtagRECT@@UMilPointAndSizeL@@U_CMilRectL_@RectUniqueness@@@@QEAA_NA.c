/*
 * XREFs of ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180092D88
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180034650 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z @ 0x18004114C (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800430D0 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x18005778C (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180061750 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N2@Z @ 0x180080210 (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180092A1C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_NPEAU_MARGINS@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV3@2@Z @ 0x180092B1C (-GetAlphaMarginsRects@CWindowNode@@AEAA_NPEAU_MARGINS@@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSi.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180092BE8 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil.c)
 *     ?NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800E1370 (-NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@.c)
 *     ?GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180186D10 (-GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024F890 (-NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRec.c)
 * Callees:
 *     <none>
 */

char __fastcall TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(
        _DWORD *a1,
        _DWORD *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  int v5; // r8d
  int v6; // edx
  char result; // al

  if ( *a2 > *a1 )
    *a1 = *a2;
  v2 = a2[1];
  if ( v2 > a1[1] )
    a1[1] = v2;
  v3 = a2[2];
  v4 = a1[2];
  if ( v3 < v4 )
  {
    a1[2] = v3;
    v4 = v3;
  }
  v5 = a2[3];
  v6 = a1[3];
  if ( v5 < v6 )
  {
    a1[3] = v5;
    v6 = v5;
    v4 = a1[2];
  }
  if ( v4 > *a1 && v6 > a1[1] )
    return 1;
  result = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}

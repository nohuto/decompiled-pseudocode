/*
 * XREFs of ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180077F3C
 * Callers:
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800339A0 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180053160 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180077A6C (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800B7458 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017E6C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18024F3AC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180252DB0 (-RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802639CC (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180079A00 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007A358 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18007A680 (-EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall FastRegion::CRegion::Intersect(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // rdi
  const struct FastRegion::Internal::CRgnData *v4; // rbx
  int v6; // eax
  FastRegion::Internal::CRgnData *v7; // rcx
  unsigned int v8; // ebx
  FastRegion::Internal::CRgnData *v10; // rax
  int v11; // [rsp+20h] [rbp-138h] BYREF
  void *lpMem; // [rsp+28h] [rbp-130h]
  _BYTE v13[256]; // [rsp+30h] [rbp-128h] BYREF

  v2 = *a2;
  v4 = *this;
  if ( !*(_DWORD *)*a2 )
  {
    *(_DWORD *)v4 = 0;
    return 0LL;
  }
  if ( !*(_DWORD *)v4 )
    return 0LL;
  v6 = FastRegion::Internal::CRgnData::EstimateSizeIntersect(*this, v2);
  v7 = (FastRegion::Internal::CRgnData *)v13;
  lpMem = v13;
  v11 = v6;
  if ( (unsigned __int64)v6 > 0x100 )
  {
    v10 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v6);
    v7 = v10;
    if ( !v10 )
    {
      v8 = -2147024882;
      goto LABEL_5;
    }
    v2 = *a2;
    v4 = *this;
    lpMem = v10;
  }
  FastRegion::Internal::CRgnData::Intersect(v7, v4, v2);
  v8 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v11);
LABEL_5:
  if ( v13 != lpMem )
    operator delete(lpMem);
  return v8;
}

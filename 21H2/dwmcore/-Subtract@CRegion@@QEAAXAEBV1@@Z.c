/*
 * XREFs of ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8
 * Callers:
 *     ?CalcDesktopClip@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAVCRegion@@@Z @ 0x18003EAD4 (-CalcDesktopClip@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl.c)
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A26C (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x180081554 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAXXZ @ 0x180082128 (-OccludeRegions@CMegaRectCollection@@AEAAXXZ.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180082280 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180099A20 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800B2A90 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x1800B788C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18027BCF0 (-NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 *     ?NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18028F2D0 (-NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRec.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x1802916D4 (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802A3EE8 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x1802ACC78 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18008257C (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800838C0 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180083C4C (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x1801903C8 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CRegion::Subtract(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // rdi
  const struct FastRegion::Internal::CRgnData *v5; // rbx
  int v6; // eax
  FastRegion::Internal::CRgnData *v7; // rcx
  int v8; // ebx
  FastRegion::Internal::CRgnData *v9; // rax
  int v10; // [rsp+20h] [rbp-138h] BYREF
  void *v11; // [rsp+28h] [rbp-130h]
  _BYTE v12[256]; // [rsp+30h] [rbp-128h] BYREF
  void *retaddr; // [rsp+158h] [rbp+0h]

  v2 = *a2;
  if ( !*(_DWORD *)*a2 )
    return;
  v5 = *this;
  if ( !*(_DWORD *)*this )
    return;
  v6 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(*this, v2);
  v7 = (FastRegion::Internal::CRgnData *)v12;
  v11 = v12;
  v10 = v6;
  if ( (unsigned __int64)v6 > 0x100 )
  {
    v9 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v6);
    v7 = v9;
    if ( !v9 )
    {
      FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v10);
      v8 = -2147024882;
      goto LABEL_11;
    }
    v2 = *a2;
    v5 = *this;
    v11 = v9;
  }
  FastRegion::Internal::CRgnData::Subtract(v7, v5, v2);
  v8 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v10);
  if ( v12 != v11 )
    DefaultHeap::Free(v11);
  if ( v8 < 0 )
LABEL_11:
    ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
}

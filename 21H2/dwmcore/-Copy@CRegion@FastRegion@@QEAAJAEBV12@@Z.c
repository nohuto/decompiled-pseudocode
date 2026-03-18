/*
 * XREFs of ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180083EF4
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1800074D8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x180081554 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180082730 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1800E2C04 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801DF714 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ?HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z @ 0x1801EB8D8 (-HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z.c)
 *     ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x1801EBBF0 (-SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     ?CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ @ 0x18027A550 (-CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ.c)
 *     ?PostPresent@CDDisplaySwapChain@@IEAAJ_N0@Z @ 0x18027BE60 (-PostPresent@CDDisplaySwapChain@@IEAAJ_N0@Z.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x18028EAB0 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 *     ?Present@CCompSwapChain@@UEAAJII@Z @ 0x18028F460 (-Present@CCompSwapChain@@UEAAJII@Z.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x1802916D4 (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180292F84 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802A23FC (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::Copy(int **this, int **a2)
{
  int *v3; // rbx
  int v4; // r9d
  int *v5; // rdi
  int *v6; // r14
  int v7; // ebp
  int v8; // eax
  int v9; // esi
  __int64 v10; // r10
  int *v11; // r8
  _DWORD *v12; // r11
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r10

  if ( this == a2 )
    return 0LL;
  v3 = *a2;
  v4 = **a2;
  if ( !v4 )
  {
    **this = 0;
    return 0LL;
  }
  v5 = *this;
  v6 = (int *)(this + 1);
  v7 = v3[2 * v4 + 2] + 8 * v4 - v3[4] - 12 + 8 * (v4 - 1) + 24;
  v8 = 60;
  if ( this + 1 != (int **)*this )
    v8 = *v6;
  if ( v8 >= v7 )
    goto LABEL_6;
  v5 = (int *)DefaultHeap::Alloc(v7);
  if ( v5 )
  {
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
    *this = v5;
    *v6 = v7;
    v4 = *v3;
LABEL_6:
    *v5 = v4;
    v9 = 0;
    v5[1] = v3[1];
    v5[2] = v3[2];
    v10 = (__int64)v3 + v3[4] + 12;
    v11 = &v5[2 * v4 + 3];
    if ( v4 > 0 )
    {
      v12 = v5 + 3;
      do
      {
        *v12 = *(_DWORD *)((char *)v12 + (char *)v3 - (char *)v5);
        v12 += 2;
        v13 = v9++;
        v5[2 * v13 + 4] = (_DWORD)v3
                        + 8 * v13
                        + 4 * (((__int64)v11 - v10) >> 2)
                        + v3[2 * v13 + 4]
                        - ((_DWORD)v5
                         + 8 * v13);
      }
      while ( v9 < *v5 );
    }
    v14 = (__int64)&v3[2 * *v3 + 1];
    v15 = (unsigned __int64)((int)v14 + *(_DWORD *)(v14 + 4) - v3[4] - ((int)v3 + 12)) >> 2;
    v16 = (int)v15;
    if ( (int)v15 > 0 )
    {
      v17 = v10 - (_QWORD)v11;
      do
      {
        *v11 = *(int *)((char *)v11 + v17);
        ++v11;
        --v16;
      }
      while ( v16 );
    }
    return 0LL;
  }
  return 2147942414LL;
}

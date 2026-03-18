/*
 * XREFs of ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016C1DC
 * Callers:
 *     ??4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016C21C (--4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x180179E70 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x180183A5C (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180260CCC (-AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x18026131C (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180173814 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<CRegion>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}

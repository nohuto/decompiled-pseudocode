/*
 * XREFs of ??0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z @ 0x18008C200
 * Callers:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089680 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008D06C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800B73B8 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800D49D8 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualT.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x1801FF930 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 */

DwmDbg::DbgString *__fastcall DwmDbg::DbgString::DbgString(DwmDbg::DbgString *this, const struct MilRectF *a2)
{
  DwmDbg::DbgString::DbgString(
    this,
    "%.2f, %.2f, %.2f, %.2f (%.2f x %.2f)",
    *(float *)a2,
    *((float *)a2 + 1),
    *((float *)a2 + 2),
    *((float *)a2 + 3),
    COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 2) - *(float *)a2) & _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 3) - *((float *)a2 + 1)) & _xmm));
  return this;
}

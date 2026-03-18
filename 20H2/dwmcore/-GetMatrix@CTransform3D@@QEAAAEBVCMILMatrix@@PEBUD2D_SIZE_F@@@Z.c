/*
 * XREFs of ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800859E8
 * Callers:
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18000FD3C (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x18002169C (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x18004C010 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x18004C098 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z @ 0x180077378 (-GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800857D4 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x18008C1B0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180096E60 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180097700 (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A8790 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x1800CC790 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z @ 0x1800CDD00 (-PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z.c)
 *     ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x180185240 (-InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z @ 0x1801877A0 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x1801BB2D4 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 *     ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x1801EAAFC (-ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

const struct CMILMatrix *__fastcall CTransform3D::GetMatrix(CTransform3D *this, const struct D2D_SIZE_F *a2)
{
  char v3; // cl
  char v4; // al

  v3 = *((_BYTE *)this + 32) & 1;
  v4 = v3;
  if ( a2 )
  {
    if ( !v3 && *((_BYTE *)this + 148) && (*((float *)this + 35) != a2->width || *((float *)this + 36) != a2->height) )
      v4 = 1;
    *(struct D2D_SIZE_F *)((char *)this + 140) = *a2;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(CTransform3D *, const struct D2D_SIZE_F *, char *))(*(_QWORD *)this + 216LL))(
      this,
      a2,
      (char *)this + 72);
    *((_DWORD *)this + 8) &= ~1u;
  }
  return (CTransform3D *)((char *)this + 72);
}

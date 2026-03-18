/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1802137C0
 * Callers:
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800198E0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEBVCMILMatrix@@PEA_NPEAH@Z @ 0x180019ED8 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEBVCMILMatrix@@PEA_NPEA.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x180232748 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1802406DC (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1802409AC (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 *     ?AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180260C10 (-AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?BeginFigure@CTransformedGeometryHelper@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180260CD0 (-BeginFigure@CTransformedGeometryHelper@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x18026B518 (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct MilPoint2F *a2, struct MilPoint2F *a3, int a4)
{
  __int64 v4; // rdx
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm2_4

  v4 = a2 - a3;
  do
  {
    v5 = *(float *)((char *)a3 + v4 + 4);
    v6 = *(float *)((char *)a3 + v4);
    v7 = (float)((float)(v5 * *((float *)this + 4)) + (float)(v6 * *(float *)this)) + *((float *)this + 12);
    *(float *)a3 = v7;
    v8 = (float)((float)(v5 * *((float *)this + 5)) + (float)(v6 * *((float *)this + 1))) + *((float *)this + 13);
    *((float *)a3 + 1) = v8;
    v9 = (float)((float)(v5 * *((float *)this + 7)) + (float)(v6 * *((float *)this + 3))) + *((float *)this + 15);
    if ( COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - 1.0) & _xmm) >= 0.000081380211 )
    {
      *(float *)a3 = v7 / v9;
      *((float *)a3 + 1) = v8 / v9;
    }
    a3 = (struct MilPoint2F *)((char *)a3 + 8);
    --a4;
  }
  while ( a4 );
}

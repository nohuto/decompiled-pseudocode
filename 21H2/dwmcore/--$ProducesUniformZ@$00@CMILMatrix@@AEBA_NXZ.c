/*
 * XREFs of ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACAC4
 * Callers:
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000EF60 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Is3D@CMILMatrix@@QEBA_NXZ @ 0x180049174 (-Is3D@CMILMatrix@@QEBA_NXZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z @ 0x180094BD4 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800961B0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A2C90 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD4A4 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD824 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800D10DC (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

bool __fastcall CMILMatrix::ProducesUniformZ<1>(__int64 a1)
{
  char v2; // di
  char v3; // al
  bool result; // al

  v2 = 1;
  v3 = (char)(16 * *(_BYTE *)(a1 + 64)) >> 6;
  if ( v3 )
    return v3 == 1;
  if ( !CMILMatrix::IsAffine<1>(a1, 1)
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & _xmm) >= 0.000081380211 )
  {
    v2 = 0;
  }
  *(_BYTE *)(a1 + 64) &= 0xF3u;
  result = v2;
  *(_BYTE *)(a1 + 64) |= (-4 - 8 * v2) & 0xC;
  return result;
}

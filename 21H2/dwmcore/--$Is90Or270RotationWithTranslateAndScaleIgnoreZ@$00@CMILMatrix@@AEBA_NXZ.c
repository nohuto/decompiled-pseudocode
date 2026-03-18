/*
 * XREFs of ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D1D9C
 * Callers:
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x180086108 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800961B0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180098620 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N@Z @ 0x180099090 (-PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatr.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18009B130 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009DEF0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AAEA4 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x1800B1268 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(__int64 a1)
{
  char v2; // r8
  char v3; // cl
  char v4; // al
  char v5; // al
  char v6; // r9
  bool v7; // r10

  v2 = 1;
  v3 = *(_BYTE *)(a1 + 65);
  v4 = (char)(v3 << 6) >> 6;
  if ( v4 )
    return v4 == 1;
  v5 = (char)(4 * v3) >> 6;
  if ( v5 )
  {
    v6 = v3;
    v7 = v5 == 1;
  }
  else
  {
    v7 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                      - 1.0) & _xmm) < 0.000081380211;
    v6 = v3 ^ (v3 ^ (-16 - 32 * v7)) & 0x30;
  }
  if ( !v7
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 0.0) & _xmm) >= 0.000081380211 )
  {
    v2 = 0;
  }
  *(_BYTE *)(a1 + 65) = v6 ^ (v6 ^ (-1 - 2 * v2)) & 3;
  if ( v2 )
    *(_BYTE *)(a1 + 64) |= 0xF3u;
  return v2;
}

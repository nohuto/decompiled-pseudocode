/*
 * XREFs of ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x18007ED08
 * Callers:
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E930 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x1800BE948 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall CDirtyRegion::CalcDirtyRegionCachedData(__int64 a1, float *a2)
{
  bool result; // al
  __int64 v3; // r8
  float *v4; // rdx

  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a2);
  *(_BYTE *)(v3 + 12) = result;
  *(float *)(v3 + 8) = (float)(v4[3] - v4[1]) * (float)(v4[2] - *v4);
  *(float *)v3 = (float)((float)(v4[2] - *v4) * 0.5) + *v4;
  *(float *)(v3 + 4) = (float)((float)(v4[3] - v4[1]) * 0.5) + v4[1];
  return result;
}

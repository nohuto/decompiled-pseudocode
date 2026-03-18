/*
 * XREFs of ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x180016654
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180016134 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18025A84C (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?IsPixelAligned@@YA_NM@Z @ 0x1800166AC (-IsPixelAligned@@YA_NM@Z.c)
 */

char __fastcall IsPixelAligned(const struct MilRectF *a1)
{
  char v1; // dl
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( IsPixelAligned(*(float *)a1)
    && IsPixelAligned(*(float *)(v2 + 4))
    && IsPixelAligned(*(float *)(v3 + 8))
    && IsPixelAligned(*(float *)(v4 + 12)) )
  {
    return 1;
  }
  return v1;
}

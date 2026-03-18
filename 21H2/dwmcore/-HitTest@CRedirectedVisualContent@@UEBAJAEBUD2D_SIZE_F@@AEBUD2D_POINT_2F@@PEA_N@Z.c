/*
 * XREFs of ?HitTest@CRedirectedVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801159AE
 * Callers:
 *     ?HitTest@CRedirectedVisualContent@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180107E30 (-HitTest@CRedirectedVisualContent@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x180062F54 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800E4C88 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 */

__int64 __fastcall CRedirectedVisualContent::HitTest(
        CRedirectedVisualContent *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  bool IsInfinite; // al
  const struct MilRectF *v5; // rdx
  const struct D2D_POINT_2F *v6; // r8
  bool *v7; // r9
  bool v8; // r10

  IsInfinite = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)this - 12);
  v8 = 0;
  if ( !IsInfinite )
    v8 = IsPointInRect(v6, v5);
  *v7 = v8;
  return 0LL;
}

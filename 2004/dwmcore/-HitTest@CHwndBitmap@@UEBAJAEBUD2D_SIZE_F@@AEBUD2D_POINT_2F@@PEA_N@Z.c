/*
 * XREFs of ?HitTest@CHwndBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801C5CB0
 * Callers:
 *     ?HitTest@CHwndBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800F0CE0 (-HitTest@CHwndBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1801C5E14 (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 */

__int64 __fastcall CHwndBitmap::HitTest(
        CHwndBitmap *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  float y; // xmm1_4
  float v9[6]; // [rsp+20h] [rbp-18h] BYREF

  *a4 = 0;
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)((char *)this - 136)) )
  {
    *(_OWORD *)v9 = *(_OWORD *)(*((_QWORD *)this - 5) + 64LL);
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v9) )
    {
      y = a3->y;
      if ( y >= v9[1] && v9[3] > y && a3->x >= v9[0] && v9[2] > a3->x )
        *a4 = 1;
    }
  }
  return 0LL;
}

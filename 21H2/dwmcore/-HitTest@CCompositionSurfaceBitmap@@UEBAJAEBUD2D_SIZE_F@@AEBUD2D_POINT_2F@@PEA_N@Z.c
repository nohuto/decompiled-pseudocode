/*
 * XREFs of ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180113C04
 * Callers:
 *     ?HitTest@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801060D0 (-HitTest@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180209370 (-HitTest@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800066A0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::HitTest(
        CCompositionSurfaceBitmap *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int Bounds; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  float y; // xmm1_4
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF

  *a4 = 0;
  v11 = 0LL;
  Bounds = CCompositionSurfaceBitmap::GetBounds((__int64)this, (__int64)a2, &v11);
  v8 = Bounds;
  if ( Bounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, Bounds, 0x11Eu);
  }
  else if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v11) )
  {
    y = a3->y;
    if ( y >= *((float *)&v11 + 1)
      && *((float *)&v11 + 3) > y
      && a3->x >= *(float *)&v11
      && *((float *)&v11 + 2) > a3->x )
    {
      *a4 = 1;
    }
  }
  return v8;
}

/*
 * XREFs of ?GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802412F4
 * Callers:
 *     ?GetBounds@CSynchronousSuperWetInk@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180107BB0 (-GetBounds@CSynchronousSuperWetInk@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@.c)
 * Callees:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800066A0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x1802414D4 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  int *v3; // rdx
  _DWORD *v4; // r8
  __int64 v5; // r9
  int v6; // xmm2_4
  int v7; // xmm1_4
  _OWORD *v9; // rcx
  _DWORD *v10; // r8
  __int64 v11; // rcx
  int Bounds; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( !CSynchronousSuperWetInk::IsSuperWetCompatible((CSynchronousSuperWetInk *)(a1 - 320)) )
    return 0LL;
  if ( *(_DWORD *)(v5 - 148) == 2 )
  {
    v6 = *v3;
    v7 = v3[1];
    if ( COERCE_FLOAT(*v3 & _xmm) < 0.0000011920929 && COERCE_FLOAT(v7 & _xmm) < 0.0000011920929 )
    {
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)(v5 - 248)) )
      {
        *v10 = 0;
        v10[1] = 0;
        v10[2] = 1065353216;
        v10[3] = 1065353216;
      }
      else
      {
        *(_OWORD *)v10 = *v9;
      }
    }
    else
    {
      *v4 = 0;
      v4[1] = 0;
      v4[2] = v6;
      v4[3] = v7;
    }
    return 0LL;
  }
  v11 = *(_QWORD *)(v5 - 136);
  if ( !v11 )
    return 0LL;
  Bounds = CCompositionSurfaceBitmap::GetBounds(v11 + 224, (__int64)v3, v4);
  v13 = Bounds;
  if ( Bounds >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBD,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
    (const char *)(unsigned int)Bounds);
  return v13;
}

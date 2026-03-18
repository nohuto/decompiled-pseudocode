/*
 * XREFs of ?GetBounds@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18025CB28
 * Callers:
 *     ?GetBounds@CTextVisualContent@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180107BF0 (-GetBounds@CTextVisualContent@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?GetBounds@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020C9EC (-GetBounds@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?GetBounds@CCompositionTextLine@@QEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180210244 (-GetBounds@CCompositionTextLine@@QEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 */

__int64 __fastcall CTextVisualContent::GetBounds(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // rcx
  int Bounds; // edi
  __int64 *v11; // rbx
  __int64 *v12; // rbp
  __int64 v13; // rcx
  __int64 *v14; // rbx
  __int64 *v15; // rbp
  __int64 v16; // rdx
  __int64 v18; // rcx
  int v19[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  v6 = *(_QWORD **)(a1 - 32);
  v7 = (__int64 *)v6[91];
  v8 = (__int64 *)v6[92];
  if ( v7 == v8 )
  {
LABEL_5:
    v11 = (__int64 *)v6[97];
    v12 = (__int64 *)v6[98];
    if ( v11 == v12 )
    {
LABEL_9:
      v14 = (__int64 *)v6[94];
      v15 = (__int64 *)v6[95];
      while ( 1 )
      {
        if ( v14 == v15 )
          return 0LL;
        v18 = *v14;
        *(_OWORD *)v19 = 0LL;
        Bounds = CCompositionTextLine::GetBounds(v18, a2, v19);
        if ( Bounds < 0 )
          break;
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, (float *)v19);
        ++v14;
      }
      v16 = 118LL;
    }
    else
    {
      while ( 1 )
      {
        v13 = *v11;
        *(_OWORD *)v19 = 0LL;
        Bounds = CCompositionTextLine::GetBounds(v13, a2, v19);
        if ( Bounds < 0 )
          break;
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, (float *)v19);
        if ( ++v11 == v12 )
        {
          v6 = *(_QWORD **)(a1 - 32);
          goto LABEL_9;
        }
      }
      v16 = 110LL;
    }
  }
  else
  {
    while ( 1 )
    {
      v9 = *v7;
      *(_OWORD *)v19 = 0LL;
      Bounds = CCompositionGlyphRun::GetBounds(v9, a2, v19);
      if ( Bounds < 0 )
        break;
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, (float *)v19);
      if ( ++v7 == v8 )
      {
        v6 = *(_QWORD **)(a1 - 32);
        goto LABEL_5;
      }
    }
    v16 = 102LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
    (const char *)(unsigned int)Bounds);
  return (unsigned int)Bounds;
}

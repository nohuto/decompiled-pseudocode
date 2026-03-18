/*
 * XREFs of ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040370
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040540 (-GetContentBounds@CVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180040724 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180040760 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180061F30 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N2@Z @ 0x180080210 (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180080610 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@QEAA_NXZ @ 0x1801EFCF8 (-HasContent@CCompositionSurfaceBitmap@@QEAA_NXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801F49FC (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::GetContentBounds(CWindowNode *this, __int64 a2)
{
  int ContentBounds; // eax
  __int64 v5; // rcx
  unsigned int EffectiveBounds; // ebx
  CCompositionSurfaceBitmap *v7; // rcx
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  float v11; // xmm0_4
  unsigned int v12; // eax
  __m128i v13; // xmm0
  int v14; // eax
  int WindowClipShape; // eax
  __int64 v17; // rcx
  int TightBounds; // eax
  __int64 v19; // rcx
  __int64 i; // rax
  _QWORD *DxClipShape; // rax
  __int64 v22; // rcx
  __int64 j; // rax
  unsigned int v24; // [rsp+20h] [rbp-40h]
  __int128 v25; // [rsp+30h] [rbp-30h] BYREF
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF

  ContentBounds = CVisual::GetContentBounds();
  EffectiveBounds = ContentBounds;
  if ( ContentBounds < 0 )
  {
    v24 = 985;
    goto LABEL_31;
  }
  if ( *((_BYTE *)this + 914) )
    return EffectiveBounds;
  v26 = 0LL;
  if ( *((_QWORD *)this + 90) )
  {
    ContentBounds = CWindowNode::EnsureEffectiveSpriteClip(this);
    EffectiveBounds = ContentBounds;
    if ( ContentBounds < 0 )
    {
      v24 = 1000;
    }
    else
    {
      ContentBounds = CWindowNode::GetEffectiveBounds(this, *((_QWORD *)this + 113), &v26, 0LL, 0LL);
      EffectiveBounds = ContentBounds;
      if ( ContentBounds >= 0 )
      {
        for ( i = 0LL; i < 16; i += 4LL )
          *(float *)((char *)&v25 + i) = (float)*(int *)((char *)&v26 + i);
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, &v25);
        goto LABEL_4;
      }
      v24 = 1003;
    }
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, ContentBounds, v24, 0LL);
    return EffectiveBounds;
  }
LABEL_4:
  v7 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 108);
  if ( v7 && CCompositionSurfaceBitmap::HasContent(v7) )
  {
    DxClipShape = (_QWORD *)CWindowNode::GetDxClipShape(this, &v25);
    EffectiveBounds = CWindowNode::GetEffectiveBounds(this, *DxClipShape, &v26, 0LL, 0LL);
    CShapePtr::Release((CShapePtr *)&v25);
    if ( (EffectiveBounds & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, EffectiveBounds, 0x3F3u, 0LL);
      return EffectiveBounds;
    }
    for ( j = 0LL; j < 16; j += 4LL )
      *(float *)((char *)&v25 + j) = (float)*(int *)((char *)&v26 + j);
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, &v25);
  }
  if ( !*((_BYTE *)this + 914) && *((_QWORD *)this + 77) )
  {
    v25 = 0LL;
    if ( !*((_QWORD *)this + 97) )
    {
      v8 = *((_DWORD *)this + 172);
      v9 = *((_DWORD *)this + 173);
      v10 = *((_DWORD *)this + 161) - v9;
      *(float *)&v25 = (float)(*((_DWORD *)this + 160) - v8);
      v11 = (float)v10;
      v12 = *((_DWORD *)this + 162) - v8;
      *((float *)&v25 + 1) = v11;
      v13 = _mm_cvtsi32_si128(v12);
      v14 = *((_DWORD *)this + 163) - v9;
      DWORD2(v25) = _mm_cvtepi32_ps(v13).m128_u32[0];
      *((float *)&v25 + 3) = (float)v14;
LABEL_9:
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, &v25);
      return EffectiveBounds;
    }
    *(_QWORD *)&v26 = 0LL;
    BYTE8(v26) = 0;
    WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v26);
    EffectiveBounds = WindowClipShape;
    if ( WindowClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, WindowClipShape, 0x40Fu, 0LL);
    }
    else
    {
      TightBounds = CShapePtr::GetTightBounds(&v26, &v25, 0LL);
      EffectiveBounds = TightBounds;
      if ( TightBounds >= 0 )
      {
        CShapePtr::Release((CShapePtr *)&v26);
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, TightBounds, 0x411u, 0LL);
    }
    CShapePtr::Release((CShapePtr *)&v26);
  }
  return EffectiveBounds;
}

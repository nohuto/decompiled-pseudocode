/*
 * XREFs of ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180062FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x180063140 (-ShouldHitTest@CWindowNode@@MEBA_NXZ.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063160 (-GetContentBounds@CVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800633B4 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800633F8 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x18006359C (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18008CE74 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180244228 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::GetContentBounds(CWindowNode *this, __int64 a2)
{
  int ContentBounds; // eax
  unsigned int v5; // ecx
  unsigned int EffectiveBounds; // ebx
  unsigned int v7; // xmm1_4
  unsigned int v8; // xmm2_4
  float v9; // xmm3_4
  int WindowClipShape; // eax
  unsigned int v12; // ecx
  int TightBounds; // eax
  unsigned int v14; // ecx
  __int64 i; // rax
  _QWORD *DxClipShape; // rax
  unsigned int v17; // ecx
  __int64 j; // rax
  unsigned int v19; // [rsp+20h] [rbp-40h]
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF

  ContentBounds = CVisual::GetContentBounds();
  EffectiveBounds = ContentBounds;
  if ( ContentBounds < 0 )
  {
    v19 = 888;
    goto LABEL_29;
  }
  if ( *((_BYTE *)this + 914) )
    goto LABEL_5;
  v21 = 0LL;
  if ( *((_BYTE *)this + 919) )
  {
    ContentBounds = CWindowNode::EnsureEffectiveSpriteClip(this);
    EffectiveBounds = ContentBounds;
    if ( ContentBounds < 0 )
    {
      v19 = 902;
    }
    else
    {
      ContentBounds = CWindowNode::GetEffectiveBounds(this, *((_QWORD *)this + 113), &v21, 0LL);
      EffectiveBounds = ContentBounds;
      if ( ContentBounds >= 0 )
      {
        for ( i = 0LL; i < 16; i += 4LL )
          *(float *)((char *)&v20 + i) = (float)*(int *)((char *)&v21 + i);
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, &v20);
        goto LABEL_4;
      }
      v19 = 903;
    }
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, ContentBounds, v19, 0LL);
    return EffectiveBounds;
  }
LABEL_4:
  if ( *((_BYTE *)this + 920) )
  {
    DxClipShape = (_QWORD *)CWindowNode::GetDxClipShape(this, &v20);
    EffectiveBounds = CWindowNode::GetEffectiveBounds(this, *DxClipShape, &v21, 0LL);
    CShapePtr::Release((CShapePtr *)&v20);
    if ( (EffectiveBounds & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, EffectiveBounds, 0x38Du, 0LL);
      return EffectiveBounds;
    }
    for ( j = 0LL; j < 16; j += 4LL )
      *(float *)((char *)&v20 + j) = (float)*(int *)((char *)&v21 + j);
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, &v20);
  }
LABEL_5:
  if ( CWindowNode::ShouldHitTest(this) )
  {
    v20 = 0LL;
    if ( !*((_QWORD *)this + 102) )
    {
      *(float *)&v7 = (float)*((int *)this + 189);
      *(float *)&v8 = (float)*((int *)this + 190);
      v9 = (float)*((int *)this + 191);
      *(float *)&v20 = (float)*((int *)this + 188);
      *(_QWORD *)((char *)&v20 + 4) = __PAIR64__(v8, v7);
      *((float *)&v20 + 3) = v9;
LABEL_8:
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, &v20);
      return EffectiveBounds;
    }
    *(_QWORD *)&v21 = 0LL;
    BYTE8(v21) = 0;
    WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v21);
    EffectiveBounds = WindowClipShape;
    if ( WindowClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, WindowClipShape, 0x3A4u, 0LL);
    }
    else
    {
      TightBounds = CShapePtr::GetTightBounds(&v21, &v20, 0LL);
      EffectiveBounds = TightBounds;
      if ( TightBounds >= 0 )
      {
        CShapePtr::Release((CShapePtr *)&v21);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, TightBounds, 0x3A5u, 0LL);
    }
    CShapePtr::Release((CShapePtr *)&v21);
  }
  return EffectiveBounds;
}

/*
 * XREFs of ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800B8400
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180054780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x1800B88A0 (-ShouldHitTest@CWindowNode@@MEBA_NXZ.c)
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800B88C0 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800B8970 (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800B8C80 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800BF4F0 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038@@@details@wil@@QEAA_NXZ @ 0x1800EA188 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_3.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180170188 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x1801F7414 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z @ 0x18026184C (-IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::HitTestContent(CWindowNode *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // ecx
  float v12; // xmm6_4
  __m128i v13; // xmm7
  unsigned int v14; // eax
  float v15; // xmm7_4
  __m128i v16; // xmm8
  int v17; // eax
  CGeometry *v18; // rcx
  float v19; // xmm8_4
  float v20; // xmm9_4
  bool v21; // al
  float x; // xmm2_4
  float y; // xmm3_4
  const struct MilRectF *TouchTargetBounds; // rax
  int ShapeData; // eax
  __int64 v26; // rcx
  FLOAT v27; // xmm1_4
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  bool v32; // al
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  float v36; // xmm1_4
  __m128 v37; // xmm2
  int v38; // eax
  __m128 v39; // xmm2
  float v41; // [rsp+38h] [rbp-59h]
  float v42; // [rsp+38h] [rbp-59h]
  struct D2D_POINT_2F v43[2]; // [rsp+40h] [rbp-51h] BYREF
  struct _D3DCOLORVALUE v44; // [rsp+50h] [rbp-41h] BYREF
  float v45[4]; // [rsp+60h] [rbp-31h] BYREF

  v8 = CVisual::HitTestContent(this, 0, a3, a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4ACu, 0LL);
    return v10;
  }
  if ( CWindowNode::ShouldHitTest(this) && !*a4 )
  {
    v11 = *((_DWORD *)this + 173);
    v12 = (float)(*((_DWORD *)this + 160) - *((_DWORD *)this + 172));
    v13 = _mm_cvtsi32_si128(*((_DWORD *)this + 161) - v11);
    v14 = *((_DWORD *)this + 162) - *((_DWORD *)this + 172);
    v45[0] = v12;
    LODWORD(v15) = _mm_cvtepi32_ps(v13).m128_u32[0];
    v16 = _mm_cvtsi32_si128(v14);
    v17 = *((_DWORD *)this + 163) - v11;
    v45[1] = v15;
    v18 = (CGeometry *)*((_QWORD *)this + 97);
    LODWORD(v19) = _mm_cvtepi32_ps(v16).m128_u32[0];
    v45[2] = v19;
    v20 = (float)v17;
    v45[3] = (float)v17;
    if ( !v18 )
    {
      v21 = IsPointInRect(a3, (const struct MilRectF *)v45);
      *a4 = v21;
      goto LABEL_6;
    }
    v21 = 0;
    if ( *((_BYTE *)v18 + 160) )
      goto LABEL_6;
    *(_QWORD *)&v44.r = 0LL;
    LOBYTE(v44.b) = 0;
    ShapeData = CGeometry::GetShapeData(v18, (const struct D2D_SIZE_F *)((char *)this + 132), (struct CShapePtr *)&v44);
    v10 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, ShapeData, 0x4C5u, 0LL);
      goto LABEL_22;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038>::GetImpl'::`2'::impl) )
    {
      v27 = a3->y - v15;
      v43[0].x = a3->x - v12;
      v43[0].y = v27;
      v28 = CShapePtr::FillContainsPoint((CShapePtr *)&v44, v43, a4);
      v10 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x4CFu, 0LL);
LABEL_22:
        CShapePtr::~CShapePtr((CShapePtr *)&v44);
        return v10;
      }
    }
    else
    {
      v30 = CShapePtr::FillContainsPoint((CShapePtr *)&v44, a3, a4);
      v10 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x4D2u, 0LL);
        goto LABEL_22;
      }
    }
    if ( *a4 )
      *a4 = IsPointInRect(a3, (const struct MilRectF *)v45);
    CShapePtr::~CShapePtr((CShapePtr *)&v44);
    v21 = *a4;
LABEL_6:
    x = a3->x;
    y = a3->y;
    if ( !v21 )
    {
      if ( a2 )
      {
        TouchTargetBounds = (const struct MilRectF *)CVisual::GetTouchTargetBounds(this, &v44);
        if ( IsPointInRect(a3, TouchTargetBounds) )
        {
          *a4 = 1;
          if ( v12 <= x )
          {
            if ( x >= v19 )
              x = v19 - 1.0;
          }
          else
          {
            x = v12;
          }
          if ( v15 <= y )
          {
            if ( y >= v20 )
              y = v20 - 1.0;
          }
          else
          {
            y = v15;
          }
        }
      }
    }
    v32 = *a4;
    if ( *a4 )
    {
      v33 = *((_QWORD *)this + 90);
      if ( !v33 || (*((_BYTE *)this + 836) & 0xA) == 0 )
        goto LABEL_46;
      if ( (LODWORD(x) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v35 = (int)x;
        v36 = x;
        v37 = 0LL;
        v37.m128_f32[0] = (float)v35 - v36;
        v34 = v35 - _mm_cmple_ss(v37, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      }
      else
      {
        v41 = x + 6291456.25;
        v34 = (int)(LODWORD(v41) << 10) >> 11;
      }
      LODWORD(v43[0].x) = v34;
      if ( (LODWORD(y) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v39 = 0LL;
        v39.m128_f32[0] = (float)(int)y - y;
        v38 = (int)y - _mm_cmple_ss(v39, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      }
      else
      {
        v42 = y + 6291456.25;
        v38 = (int)(LODWORD(v42) << 10) >> 11;
      }
      LODWORD(v43[0].y) = v38;
      (*(void (__fastcall **)(__int64, struct _D3DCOLORVALUE *, struct D2D_POINT_2F *))(*(_QWORD *)v33 + 72LL))(
        v33,
        &v44,
        v43);
      if ( (*((_BYTE *)this + 836) & 2) != 0 )
      {
        if ( *((_BYTE *)this + 919) )
        {
          v43[0].x = v44.b;
          v43[0].y = v44.g;
          v43[1].x = v44.r;
          v43[1].y = v44.a;
          v44.r = v44.b;
          LODWORD(v44.a) = _mm_shuffle_ps(*(__m128 *)&v43[0].x, *(__m128 *)&v43[0].x, 255).m128_u32[0];
          LODWORD(v44.g) = _mm_shuffle_ps(*(__m128 *)&v43[0].x, *(__m128 *)&v43[0].x, 85).m128_u32[0];
          LODWORD(v44.b) = _mm_shuffle_ps(*(__m128 *)&v43[0].x, *(__m128 *)&v43[0].x, 170).m128_u32[0];
        }
        v32 = !CColorKey::IsColorKey((CWindowNode *)((char *)this + 784), &v44);
        *a4 = v32;
      }
      else
      {
        v32 = *a4;
      }
      if ( v32 )
      {
        if ( (*((_BYTE *)this + 836) & 8) != 0 )
        {
          v32 = v44.a > 0.0;
          *a4 = v44.a > 0.0;
        }
LABEL_46:
        if ( v32 )
          return v10;
      }
    }
    if ( !*((_QWORD *)this + 108) )
      return v10;
    *(_QWORD *)&v44.r = 0LL;
    LOBYTE(v44.b) = 0;
    CWindowNode::GetDxClipShapeForHitTest(this, (struct CShapePtr *)&v44);
    if ( *(_QWORD *)&v44.r )
      CShapePtr::FillContainsPoint((CShapePtr *)&v44, a3, a4);
    else
      *a4 = IsPointInRect(a3, (const struct MilRectF *)v45);
    goto LABEL_22;
  }
  return v10;
}

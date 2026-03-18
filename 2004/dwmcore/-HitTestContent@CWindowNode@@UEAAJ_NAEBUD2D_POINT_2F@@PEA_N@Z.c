/*
 * XREFs of ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180084570
 * Callers:
 *     <none>
 * Callees:
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001465C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180073590 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800824BC (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x1800849F0 (-ShouldHitTest@CWindowNode@@MEBA_NXZ.c)
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180084A10 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800C5930 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_32337248@@@details@wil@@QEAA_NXZ @ 0x1800E9134 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_32337248@@@d.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x1801F4A54 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z @ 0x18025EDDC (-IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::HitTestContent(CWindowNode *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // r14d
  int v11; // ecx
  float v12; // xmm6_4
  __m128i v13; // xmm7
  unsigned int v14; // eax
  float v15; // xmm7_4
  __m128i v16; // xmm8
  int v17; // eax
  float v18; // xmm8_4
  float v19; // xmm9_4
  CGeometry *v20; // rcx
  float x; // xmm2_4
  float y; // xmm3_4
  const struct MilRectF *TouchTargetBounds; // rax
  int ShapeData; // eax
  __int64 v25; // rcx
  FLOAT v26; // xmm1_4
  int v27; // eax
  __int64 v28; // rcx
  bool v29; // al
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  float v33; // xmm1_4
  __m128 v34; // xmm2
  int v35; // eax
  __m128 v36; // xmm2
  float v38; // [rsp+38h] [rbp-59h]
  float v39; // [rsp+38h] [rbp-59h]
  struct D2D_POINT_2F v40[2]; // [rsp+40h] [rbp-51h] BYREF
  struct _D3DCOLORVALUE v41; // [rsp+50h] [rbp-41h] BYREF
  float v42[4]; // [rsp+60h] [rbp-31h] BYREF

  v8 = CVisual::HitTestContent(this, 0, a3, a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4B2u, 0LL);
    return v10;
  }
  if ( CWindowNode::ShouldHitTest(this) && !*a4 )
  {
    v11 = *((_DWORD *)this + 173);
    v12 = (float)(*((_DWORD *)this + 160) - *((_DWORD *)this + 172));
    v13 = _mm_cvtsi32_si128(*((_DWORD *)this + 161) - v11);
    v14 = *((_DWORD *)this + 162) - *((_DWORD *)this + 172);
    v42[0] = v12;
    LODWORD(v15) = _mm_cvtepi32_ps(v13).m128_u32[0];
    v16 = _mm_cvtsi32_si128(v14);
    v17 = *((_DWORD *)this + 163) - v11;
    v42[1] = v15;
    LODWORD(v18) = _mm_cvtepi32_ps(v16).m128_u32[0];
    v19 = (float)v17;
    v42[2] = v18;
    v42[3] = (float)v17;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_HitTesting_32337248>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_HitTesting_32337248>::GetImpl'::`2'::impl)
      || (v20 = (CGeometry *)*((_QWORD *)this + 97)) == 0LL )
    {
      *a4 = IsPointInRect(a3, (const struct MilRectF *)v42);
      goto LABEL_7;
    }
    if ( *((_BYTE *)v20 + 160) )
      goto LABEL_7;
    *(_QWORD *)&v41.r = 0LL;
    LOBYTE(v41.b) = 0;
    ShapeData = CGeometry::GetShapeData(v20, (const struct D2D_SIZE_F *)((char *)this + 132), (struct CShapePtr *)&v41);
    v10 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, ShapeData, 0x4D8u, 0LL);
    }
    else
    {
      v26 = a3->y - v15;
      v40[0].x = a3->x - v12;
      v40[0].y = v26;
      v27 = CShapePtr::FillContainsPoint((CShape **)&v41, v40, a4);
      v10 = v27;
      if ( v27 >= 0 )
      {
        if ( *a4 )
          *a4 = IsPointInRect(a3, (const struct MilRectF *)v42);
        CShapePtr::Release((CShapePtr *)&v41);
LABEL_7:
        x = a3->x;
        y = a3->y;
        if ( !*a4 )
        {
          if ( a2 )
          {
            TouchTargetBounds = (const struct MilRectF *)CVisual::GetTouchTargetBounds(this, &v41);
            if ( IsPointInRect(a3, TouchTargetBounds) )
            {
              *a4 = 1;
              if ( v12 <= x )
              {
                if ( x >= v18 )
                  x = v18 - 1.0;
              }
              else
              {
                x = v12;
              }
              if ( v15 <= y )
              {
                if ( y >= v19 )
                  y = v19 - 1.0;
              }
              else
              {
                y = v15;
              }
            }
          }
        }
        v29 = *a4;
        if ( *a4 )
        {
          v30 = *((_QWORD *)this + 90);
          if ( !v30 || (*((_BYTE *)this + 836) & 0xA) == 0 )
            goto LABEL_44;
          if ( (LODWORD(x) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v32 = (int)x;
            v33 = x;
            v34 = 0LL;
            v34.m128_f32[0] = (float)v32 - v33;
            v31 = v32 - _mm_cmple_ss(v34, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
          }
          else
          {
            v38 = x + 6291456.25;
            v31 = (int)(LODWORD(v38) << 10) >> 11;
          }
          LODWORD(v40[0].x) = v31;
          if ( (LODWORD(y) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v36 = 0LL;
            v36.m128_f32[0] = (float)(int)y - y;
            v35 = (int)y - _mm_cmple_ss(v36, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
          }
          else
          {
            v39 = y + 6291456.25;
            v35 = (int)(LODWORD(v39) << 10) >> 11;
          }
          LODWORD(v40[0].y) = v35;
          (*(void (__fastcall **)(__int64, struct _D3DCOLORVALUE *, struct D2D_POINT_2F *))(*(_QWORD *)v30 + 72LL))(
            v30,
            &v41,
            v40);
          if ( (*((_BYTE *)this + 836) & 2) != 0 )
          {
            if ( *((_BYTE *)this + 919) )
            {
              v40[0].x = v41.b;
              v40[0].y = v41.g;
              v40[1].x = v41.r;
              v40[1].y = v41.a;
              v41.r = v41.b;
              LODWORD(v41.a) = _mm_shuffle_ps(*(__m128 *)&v40[0].x, *(__m128 *)&v40[0].x, 255).m128_u32[0];
              LODWORD(v41.g) = _mm_shuffle_ps(*(__m128 *)&v40[0].x, *(__m128 *)&v40[0].x, 85).m128_u32[0];
              LODWORD(v41.b) = _mm_shuffle_ps(*(__m128 *)&v40[0].x, *(__m128 *)&v40[0].x, 170).m128_u32[0];
            }
            v29 = !CColorKey::IsColorKey((CWindowNode *)((char *)this + 784), &v41);
            *a4 = v29;
          }
          else
          {
            v29 = *a4;
          }
          if ( v29 )
          {
            if ( (*((_BYTE *)this + 836) & 8) != 0 )
            {
              v29 = v41.a > 0.0;
              *a4 = v41.a > 0.0;
            }
LABEL_44:
            if ( v29 )
              return v10;
          }
        }
        if ( !*((_QWORD *)this + 108) )
          return v10;
        *(_QWORD *)&v41.r = 0LL;
        LOBYTE(v41.b) = 0;
        CWindowNode::GetDxClipShapeForHitTest(this, (struct CShapePtr *)&v41);
        if ( *(_QWORD *)&v41.r )
          CShapePtr::FillContainsPoint((CShape **)&v41, a3, a4);
        else
          *a4 = IsPointInRect(a3, (const struct MilRectF *)v42);
        goto LABEL_20;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x4E1u, 0LL);
    }
LABEL_20:
    CShapePtr::Release((CShapePtr *)&v41);
  }
  return v10;
}

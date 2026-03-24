/*
 * XREFs of ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C7B90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x180068888 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180068AA8 (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x1800C7F10 (-ShouldHitTest@CWindowNode@@MEBA_NXZ.c)
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C7F30 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800C98E8 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x18016BD24 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x1801F3984 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z @ 0x180260CAC (-IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::HitTestContent(CWindowNode *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // r14d
  int v11; // ecx
  __m128i v12; // xmm5
  unsigned int v13; // eax
  __m128i v14; // xmm6
  int v15; // eax
  float v16; // xmm6_4
  float v17; // xmm7_4
  bool v18; // al
  float x; // xmm2_4
  float y; // xmm3_4
  const struct MilRectF *TouchTargetBounds; // rax
  float v22; // xmm4_4
  float v23; // xmm5_4
  bool v24; // al
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  float v28; // xmm1_4
  __m128 v29; // xmm2
  int v30; // eax
  __m128 v31; // xmm2
  float v33; // [rsp+38h] [rbp-29h]
  float v34; // [rsp+38h] [rbp-29h]
  __m128 v35; // [rsp+40h] [rbp-21h] BYREF
  struct _D3DCOLORVALUE v36; // [rsp+50h] [rbp-11h] BYREF
  float v37[4]; // [rsp+60h] [rbp-1h] BYREF

  v8 = CVisual::HitTestContent(this, 0, a3, a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4B1u, 0LL);
    return v10;
  }
  if ( CWindowNode::ShouldHitTest(this) && !*a4 )
  {
    v11 = *((_DWORD *)this + 173);
    v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 161) - v11);
    v13 = *((_DWORD *)this + 162) - *((_DWORD *)this + 172);
    v37[0] = (float)(*((_DWORD *)this + 160) - *((_DWORD *)this + 172));
    v14 = _mm_cvtsi32_si128(v13);
    v15 = *((_DWORD *)this + 163) - v11;
    LODWORD(v37[1]) = _mm_cvtepi32_ps(v12).m128_u32[0];
    LODWORD(v16) = _mm_cvtepi32_ps(v14).m128_u32[0];
    v17 = (float)v15;
    v37[2] = v16;
    v37[3] = (float)v15;
    v18 = IsPointInRect(a3, (const struct MilRectF *)v37);
    *a4 = v18;
    x = a3->x;
    y = a3->y;
    if ( !v18 )
    {
      if ( a2 )
      {
        TouchTargetBounds = (const struct MilRectF *)CVisual::GetTouchTargetBounds(this, &v36);
        if ( IsPointInRect(a3, TouchTargetBounds) )
        {
          *a4 = 1;
          if ( v22 <= x )
          {
            if ( x >= v16 )
              x = v16 - 1.0;
          }
          else
          {
            x = v22;
          }
          if ( v23 <= y )
          {
            if ( y >= v17 )
              y = v17 - 1.0;
          }
          else
          {
            y = v23;
          }
        }
      }
    }
    v24 = *a4;
    if ( *a4 )
    {
      v25 = *((_QWORD *)this + 90);
      if ( v25 )
      {
        if ( (*((_BYTE *)this + 836) & 0xA) != 0 )
        {
          if ( (LODWORD(x) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v27 = (int)x;
            v28 = x;
            v29 = 0LL;
            v29.m128_f32[0] = (float)v27 - v28;
            v26 = v27 - _mm_cmple_ss(v29, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
          }
          else
          {
            v33 = x + 6291456.25;
            v26 = (int)(LODWORD(v33) << 10) >> 11;
          }
          v35.m128_i32[0] = v26;
          if ( (LODWORD(y) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v31 = 0LL;
            v31.m128_f32[0] = (float)(int)y - y;
            v30 = (int)y - _mm_cmple_ss(v31, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
          }
          else
          {
            v34 = y + 6291456.25;
            v30 = (int)(LODWORD(v34) << 10) >> 11;
          }
          v35.m128_i32[1] = v30;
          (*(void (__fastcall **)(__int64, struct _D3DCOLORVALUE *, __m128 *))(*(_QWORD *)v25 + 72LL))(v25, &v36, &v35);
          if ( (*((_BYTE *)this + 836) & 2) != 0 )
          {
            if ( *((_BYTE *)this + 919) )
            {
              v35.m128_u64[0] = __PAIR64__(LODWORD(v36.g), LODWORD(v36.b));
              v35.m128_u64[1] = __PAIR64__(LODWORD(v36.a), LODWORD(v36.r));
              v36.r = v36.b;
              LODWORD(v36.a) = _mm_shuffle_ps(v35, v35, 255).m128_u32[0];
              LODWORD(v36.g) = _mm_shuffle_ps(v35, v35, 85).m128_u32[0];
              LODWORD(v36.b) = _mm_shuffle_ps(v35, v35, 170).m128_u32[0];
            }
            v24 = !CColorKey::IsColorKey((CWindowNode *)((char *)this + 784), &v36);
            *a4 = v24;
          }
          else
          {
            v24 = *a4;
          }
          if ( !v24 )
          {
LABEL_33:
            if ( *((_QWORD *)this + 108) )
            {
              *(_QWORD *)&v36.r = 0LL;
              LOBYTE(v36.b) = 0;
              CWindowNode::GetDxClipShapeForHitTest(this, (struct CShapePtr *)&v36);
              if ( *(_QWORD *)&v36.r )
                CShapePtr::FillContainsPoint((CShape **)&v36, a3, a4);
              else
                *a4 = IsPointInRect(a3, (const struct MilRectF *)v37);
              CShapePtr::~CShapePtr((CShapePtr *)&v36);
            }
            return v10;
          }
          if ( (*((_BYTE *)this + 836) & 8) != 0 )
          {
            v24 = v36.a > 0.0;
            *a4 = v36.a > 0.0;
          }
        }
      }
    }
    if ( v24 )
      return v10;
    goto LABEL_33;
  }
  return v10;
}

/*
 * XREFs of ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180062E10
 * Callers:
 *     <none>
 * Callees:
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180062BD0 (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x180062F54 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x180063140 (-ShouldHitTest@CWindowNode@@MEBA_NXZ.c)
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800632F0 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800676F4 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?GetPixelColor@CGdiSpriteBitmap@@QEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x1802077D0 (-GetPixelColor@CGdiSpriteBitmap@@QEBA-AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x180244280 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z @ 0x1802A15C4 (-IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::HitTestContent(CWindowNode *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // r14d
  float v11; // xmm4_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  bool v14; // al
  float x; // xmm2_4
  float y; // xmm3_4
  bool v17; // al
  const struct MilRectF *TouchTargetBounds; // rax
  float v21; // xmm4_4
  float v22; // xmm5_4
  UINT32 v23; // eax
  int v24; // eax
  float v25; // xmm1_4
  __m128 v26; // xmm2
  UINT32 v27; // eax
  __m128 v28; // xmm2
  CGdiSpriteBitmap *v29; // rax
  bool v30; // al
  float v31; // [rsp+38h] [rbp-29h]
  float v32; // [rsp+38h] [rbp-29h]
  D2D_POINT_2U v33[2]; // [rsp+40h] [rbp-21h] BYREF
  struct _D3DCOLORVALUE v34; // [rsp+50h] [rbp-11h] BYREF
  float v35[4]; // [rsp+60h] [rbp-1h] BYREF

  v8 = CVisual::HitTestContent(this, 0, a3, a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x43Eu, 0LL);
  }
  else if ( !*a4 && CWindowNode::ShouldHitTest(this) )
  {
    v11 = (float)*((int *)this + 189);
    v12 = (float)*((int *)this + 190);
    v13 = (float)*((int *)this + 191);
    v35[0] = (float)*((int *)this + 188);
    v35[1] = v11;
    v35[2] = v12;
    v35[3] = v13;
    v14 = IsPointInRect(a3, (const struct MilRectF *)v35);
    *a4 = v14;
    x = a3->x;
    y = a3->y;
    if ( !v14 )
    {
      if ( a2 )
      {
        TouchTargetBounds = (const struct MilRectF *)CVisual::GetTouchTargetBounds(this, &v34);
        if ( IsPointInRect(a3, TouchTargetBounds) )
        {
          *a4 = 1;
          if ( v22 <= x )
          {
            if ( x >= v12 )
              x = v12 - 1.0;
          }
          else
          {
            x = v22;
          }
          if ( v21 <= y )
          {
            if ( y >= v13 )
              y = v13 - 1.0;
          }
          else
          {
            y = v21;
          }
        }
      }
    }
    if ( !*a4 )
      goto LABEL_45;
    if ( *((_BYTE *)this + 919) && (*((_BYTE *)this + 876) & 0xA) != 0 )
    {
      if ( (LODWORD(x) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v24 = (int)x;
        v25 = x;
        v26 = 0LL;
        v26.m128_f32[0] = (float)v24 - v25;
        v23 = v24 - _mm_cmple_ss(v26, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      }
      else
      {
        v31 = x + 6291456.25;
        v23 = (int)(LODWORD(v31) << 10) >> 11;
      }
      v33[0].x = v23;
      if ( (LODWORD(y) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v28 = 0LL;
        v28.m128_f32[0] = (float)(int)y - y;
        v27 = (int)y - _mm_cmple_ss(v28, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      }
      else
      {
        v32 = y + 6291456.25;
        v27 = (int)(LODWORD(v32) << 10) >> 11;
      }
      v33[0].y = v27;
      v29 = (CGdiSpriteBitmap *)CPtrArrayBase::operator[]((char *)this + 800, 0LL);
      CGdiSpriteBitmap::GetPixelColor(v29, &v34, v33);
      if ( (*((_BYTE *)this + 876) & 2) != 0 )
      {
        if ( *((_BYTE *)this + 917) )
        {
          v33[0].x = LODWORD(v34.b);
          v33[0].y = LODWORD(v34.g);
          v33[1].x = LODWORD(v34.r);
          v33[1].y = LODWORD(v34.a);
          v34.r = v34.b;
          LODWORD(v34.a) = _mm_shuffle_ps(*(__m128 *)&v33[0].x, *(__m128 *)&v33[0].x, 255).m128_u32[0];
          LODWORD(v34.g) = _mm_shuffle_ps(*(__m128 *)&v33[0].x, *(__m128 *)&v33[0].x, 85).m128_u32[0];
          LODWORD(v34.b) = _mm_shuffle_ps(*(__m128 *)&v33[0].x, *(__m128 *)&v33[0].x, 170).m128_u32[0];
        }
        v30 = !CColorKey::IsColorKey((CWindowNode *)((char *)this + 824), &v34);
        *a4 = v30;
      }
      else
      {
        v30 = *a4;
      }
      if ( !v30 || (*((_BYTE *)this + 876) & 8) != 0 && (v17 = v34.a > 0.0, *a4 = v34.a > 0.0, !v17) )
      {
LABEL_45:
        if ( *((_BYTE *)this + 920) )
        {
          *(_QWORD *)&v34.r = 0LL;
          LOBYTE(v34.b) = 0;
          CWindowNode::GetDxClipShapeForHitTest(this, (struct CShapePtr *)&v34);
          if ( *(_QWORD *)&v34.r )
            CShapePtr::FillContainsPoint((CShape **)&v34, a3, a4);
          else
            *a4 = IsPointInRect(a3, (const struct MilRectF *)v35);
          CShapePtr::Release((CShapePtr *)&v34);
        }
      }
    }
  }
  return v10;
}

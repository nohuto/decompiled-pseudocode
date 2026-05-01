/*
 * XREFs of ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x18036D2F8
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18036D5E8 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x18035E54C (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x18036DA64 (-ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z.c)
 */

_OWORD *__fastcall KeyboardHosting::ViewRectHelper::GetAvoidanceRect(
        _OWORD *a1,
        struct Windows::Foundation::Rect *a2,
        struct Windows::Foundation::Rect *a3)
{
  __m128 v6; // xmm2
  float v7; // xmm1_4
  __int128 v9; // [rsp+20h] [rbp-10h] BYREF

  KeyboardHosting::ViewRectHelper::ValidateRect(a2);
  KeyboardHosting::ViewRectHelper::ValidateRect(a3);
  *a1 = 0LL;
  v9 = *(_OWORD *)a2;
  if ( !KeyboardHosting::IsRectNull((float *)&v9) )
  {
    v9 = *(_OWORD *)a3;
    if ( !KeyboardHosting::IsRectNull((float *)&v9) )
    {
      v6 = (__m128)_mm_loadu_si128((const __m128i *)a2);
      v7 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
      LODWORD(v9) = (int)v6.m128_f32[0];
      DWORD2(v9) = (int)(float)(_mm_shuffle_ps(v6, v6, 170).m128_f32[0] + v6.m128_f32[0]);
      DWORD1(v9) = (int)v7;
LABEL_9:
      HIDWORD(v9) = (int)(float)(_mm_shuffle_ps(v6, v6, 255).m128_f32[0] + v7);
      *a1 = v9;
      return a1;
    }
  }
  v9 = *(_OWORD *)a2;
  if ( !KeyboardHosting::IsRectNull((float *)&v9) )
  {
    v6 = (__m128)_mm_loadu_si128((const __m128i *)a2);
LABEL_8:
    LODWORD(v9) = (int)v6.m128_f32[0];
    v7 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
    DWORD1(v9) = (int)v7;
    DWORD2(v9) = (int)(float)(_mm_shuffle_ps(v6, v6, 170).m128_f32[0] + v6.m128_f32[0]);
    goto LABEL_9;
  }
  v9 = *(_OWORD *)a3;
  if ( !KeyboardHosting::IsRectNull((float *)&v9) )
  {
    v6 = (__m128)_mm_loadu_si128((const __m128i *)a3);
    goto LABEL_8;
  }
  return a1;
}

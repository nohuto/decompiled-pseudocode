/*
 * XREFs of ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x18035D134
 * Callers:
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x1803490C8 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?GetCurrentTextSelectionRect@TouchKeyboardExperienceManager@@UEAAJPEAUtagRECT@@@Z @ 0x18034A300 (-GetCurrentTextSelectionRect@TouchKeyboardExperienceManager@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x18035DBFC (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetCurrentTextSelectionRect(
        KeyboardHosting::TabTipAdapter *this,
        struct tagRECT *a2,
        __int64 a3)
{
  unsigned __int8 v3; // al
  __int64 v4; // r9
  __m128 v5; // xmm2
  _DWORD *v6; // r10
  float v7; // xmm1_4
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = *(_OWORD *)((char *)this + 472);
  v3 = ((__int64 (__fastcall *)(__int128 *, struct tagRECT *, __int64, KeyboardHosting::TabTipAdapter *))KeyboardHosting::IsRectNull)(
         &v9,
         a2,
         a3,
         this);
  v5 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 16 * (v3 ^ 1LL) + 456));
  *v6 = (int)v5.m128_f32[0];
  v7 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  result = 0LL;
  v6[1] = (int)v7;
  v6[2] = (int)(float)(_mm_shuffle_ps(v5, v5, 170).m128_f32[0] + v5.m128_f32[0]);
  v6[3] = (int)(float)(_mm_shuffle_ps(v5, v5, 255).m128_f32[0] + v7);
  return result;
}

/*
 * XREFs of ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x18036DA64
 * Callers:
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x18036D2F8 (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180159818 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x18035E54C (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 */

void __fastcall KeyboardHosting::ViewRectHelper::ValidateRect(struct _GUID *a1)
{
  HWND ForegroundWindow; // rax
  struct _GUID v3; // xmm6
  __m128 v4; // xmm2
  float v5; // xmm1_4
  struct _GUID v6; // [rsp+20h] [rbp-48h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-38h] BYREF

  ForegroundWindow = GetForegroundWindow();
  v3 = 0LL;
  Rect = 0LL;
  if ( ForegroundWindow )
  {
    GetWindowRect(ForegroundWindow, &Rect);
    v3 = (struct _GUID)Rect;
  }
  v6 = *a1;
  if ( !KeyboardHosting::IsRectNull((float *)&v6.Data1) )
  {
    if ( *(float *)a1->Data4 < 1.0 )
      *(_DWORD *)a1->Data4 = 1065353216;
    if ( *(float *)&a1->Data4[4] < 1.0 )
      *(_DWORD *)&a1->Data4[4] = 1065353216;
    v6 = v3;
    if ( !_tlgGuidIsZero(&v6) )
    {
      v4 = (__m128)_mm_loadu_si128((const __m128i *)a1);
      v5 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
      *(float *)&a1->Data1 = (float)(int)v4.m128_f32[0];
      *(float *)a1->Data4 = (float)((int)(float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] + v4.m128_f32[0])
                                  - (int)v4.m128_f32[0]);
      *(float *)&a1->Data2 = (float)(int)v5;
      *(float *)&a1->Data4[4] = (float)((int)(float)(_mm_shuffle_ps(v4, v4, 255).m128_f32[0] + v5) - (int)v5);
    }
  }
}

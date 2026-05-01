/*
 * XREFs of _lambda_a818a4d1196700db3f726f95e02b7ab7_::operator() @ 0x1803A0244
 * Callers:
 *     ??$LambdaCustomPaintProc@V_lambda_a818a4d1196700db3f726f95e02b7ab7_@@PEAUID2D1DeviceContext@@@@YAXPEAUID2D1DeviceContext@@AEBUtagSIZE@@_J@Z @ 0x18039FCE0 (--$LambdaCustomPaintProc@V_lambda_a818a4d1196700db3f726f95e02b7ab7_@@PEAUID2D1DeviceContext@@@@Y.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180012934 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18008E5A6 (GetThreadUILanguage_0.c)
 *     ?_RenderIcon@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1803A1674 (-_RenderIcon@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 *     ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1803A17F8 (-_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 */

__int64 __fastcall lambda_a818a4d1196700db3f726f95e02b7ab7_::operator()(
        CSwitchItemElement **a1,
        struct ID2D1DeviceContext *a2,
        __int64 a3)
{
  CSwitchItemElement *v4; // rcx
  float v6; // xmm6_4
  __m128i v7; // xmm1
  LANGID ThreadUILanguage_0; // ax
  float v9; // xmm2_4
  float v10; // xmm3_4
  int v11; // eax
  D2D_RECT_F v13; // [rsp+20h] [rbp-40h] BYREF
  struct D2D_RECT_F v14; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v13.left = 0.0;
  v13.top = 0.0;
  v4 = *a1;
  v6 = (float)(int)a3;
  v7 = _mm_cvtsi32_si128(*((_DWORD *)v4 + 84));
  v14.top = 0.0;
  v13.right = _mm_cvtepi32_ps(v7).m128_f32[0];
  v13.bottom = (float)SHIDWORD(a3);
  v14.bottom = (float)SHIDWORD(a3);
  v14.left = (float)*((int *)v4 + 88) + v13.right;
  v14.right = (float)(int)a3 - (float)*((int *)v4 + 89);
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
  {
    v9 = v13.right - v13.left;
    v10 = v14.right - v14.left;
    v13.right = v6 - (float)(v13.left - 0.0);
    v13.left = v13.right - v9;
    v14.right = v6 - (float)(v14.left - 0.0);
    v14.left = v14.right - v10;
  }
  CSwitchItemElement::_RenderIcon(*a1, &v13, a2);
  v11 = CSwitchItemElement::_RenderText(*a1, &v14, a2);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1E6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
      (const char *)(unsigned int)v11);
  return 0LL;
}

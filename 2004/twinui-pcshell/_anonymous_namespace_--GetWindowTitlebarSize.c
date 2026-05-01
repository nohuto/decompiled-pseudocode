/*
 * XREFs of _anonymous_namespace_::GetWindowTitlebarSize @ 0x1802878D0
 * Callers:
 *     ?UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x180288FFC (-UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Exper.c)
 * Callees:
 *     ?GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ @ 0x180047484 (-GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800474A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@details@wil@@QE.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall anonymous_namespace_::GetWindowTitlebarSize(HWND hWnd, int nNumber, char a3)
{
  float v5; // xmm6_4
  __m128 v6; // xmm7
  int v7; // ebx
  unsigned int v8; // eax
  __m128 v9; // xmm0
  __int128 pvAttribute; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-48h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetImpl'::`2'::impl,
    0,
    a3);
  pvAttribute = 0LL;
  v5 = (float)nNumber;
  if ( DwmGetWindowAttribute(hWnd, 5u, &pvAttribute, 0x10u) < 0
    || (v6 = (__m128)COERCE_UNSIGNED_INT((float)(HIDWORD(pvAttribute) - DWORD1(pvAttribute))),
        v6.m128_f32[0] = (float)(v6.m128_f32[0] * 100.0) / v5,
        v6.m128_f32[0] == 0.0) )
  {
    v6 = (__m128)COERCE_UNSIGNED_INT((float)(int)GetDefaultTitlebarHeightInLogicalPixels());
  }
  Rect = 0LL;
  GetClientRect(hWnd, &Rect);
  v7 = Rect.right - Rect.left;
  if ( (GetWindowLongW(hWnd, -16) & 0x200000) != 0 )
  {
    v8 = MulDiv(nNumber, 96, 100);
    v7 += GetSystemMetricsForDpi(2LL, v8);
  }
  v9 = (__m128)COERCE_UNSIGNED_INT((float)v7);
  v9.m128_f32[0] = (float)(v9.m128_f32[0] * 100.0) / v5;
  return _mm_unpacklo_ps(v9, v6).m128_u64[0];
}

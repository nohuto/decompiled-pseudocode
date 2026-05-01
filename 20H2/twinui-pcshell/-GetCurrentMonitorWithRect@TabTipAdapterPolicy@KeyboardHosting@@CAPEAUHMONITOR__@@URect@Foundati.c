/*
 * XREFs of ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x180367904
 * Callers:
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1803678AC (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180368040 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180368620 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAW4ShellRequestT.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

HMONITOR __fastcall KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(const __m128i *a1)
{
  __m128 v1; // xmm2
  float v2; // xmm1_4
  RECT rc; // [rsp+20h] [rbp-28h] BYREF

  v1 = (__m128)_mm_loadu_si128(a1);
  v2 = _mm_shuffle_ps(v1, v1, 85).m128_f32[0];
  rc.left = (int)v1.m128_f32[0];
  rc.top = (int)v2;
  rc.right = (int)(float)(_mm_shuffle_ps(v1, v1, 170).m128_f32[0] + v1.m128_f32[0]);
  rc.bottom = (int)(float)(_mm_shuffle_ps(v1, v1, 255).m128_f32[0] + v2);
  return MonitorFromRect(&rc, 2u);
}

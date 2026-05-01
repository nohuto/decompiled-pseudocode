/*
 * XREFs of ?DrawInsetRect@MultitaskingViewUtils@@YAXPEAUID2D1DeviceContext@@AEAUD2D_RECT_F@@PEAUID2D1SolidColorBrush@@H@Z @ 0x1803AF4EC
 * Callers:
 *     _lambda_3620ca84e17db7610b457f2d5c27bd2d_::operator() @ 0x1803B2B10 (_lambda_3620ca84e17db7610b457f2d5c27bd2d_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MultitaskingViewUtils::DrawInsetRect(
        MultitaskingViewUtils *this,
        const __m128i *a2,
        struct D2D_RECT_F *a3,
        struct ID2D1SolidColorBrush *a4)
{
  __m128i v4; // xmm0
  __int64 v5; // rax
  void (__fastcall *v6)(MultitaskingViewUtils *, __m128i *, struct D2D_RECT_F *); // rax
  __m128i v7; // [rsp+30h] [rbp-28h] BYREF

  v4 = _mm_loadu_si128(a2);
  v5 = *(_QWORD *)this;
  v7 = v4;
  v6 = *(void (__fastcall **)(MultitaskingViewUtils *, __m128i *, struct D2D_RECT_F *))(v5 + 128);
  *(float *)v7.m128i_i32 = *(float *)v4.m128i_i32 + (float)((float)(int)a4 * 0.5);
  *(float *)&v7.m128i_i32[2] = *(float *)&v4.m128i_i32[2] - (float)((float)(int)a4 * 0.5);
  *(float *)&v7.m128i_i32[1] = *(float *)&v4.m128i_i32[1] + (float)((float)(int)a4 * 0.5);
  *(float *)&v7.m128i_i32[3] = *(float *)&v4.m128i_i32[3] - (float)((float)(int)a4 * 0.5);
  v6(this, &v7, a3);
}

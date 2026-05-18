/*
 * XREFs of sub_1800B3BB4 @ 0x1800B3BB4
 * Callers:
 *     sub_1800B3610 @ 0x1800B3610 (sub_1800B3610.c)
 *     sub_1800B3A70 @ 0x1800B3A70 (sub_1800B3A70.c)
 *     sub_1800B3B2C @ 0x1800B3B2C (sub_1800B3B2C.c)
 * Callees:
 *     sub_1800B2470 @ 0x1800B2470 (sub_1800B2470.c)
 */

void __fastcall sub_1800B3BB4(__int64 a1)
{
  __m128 *v2; // rax
  __m128 v3; // xmm2
  __m128 v4; // xmm1
  float v5; // xmm7_4
  __m128 v6; // xmm2
  __m128 v7; // [rsp+20h] [rbp-38h] BYREF
  __m128 v8; // [rsp+30h] [rbp-28h] BYREF

  v2 = sub_1800B2470(&v7, (__m128 *)(a1 + 304), (__m128 *)(a1 + 320));
  *(__m128 *)(a1 + 400) = *sub_1800B2470(&v8, v2, (__m128 *)(a1 + 336));
  if ( a1 == -400 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  *(__m128 *)(a1 + 400) = _mm_mul_ps((__m128)xmmword_1801D2310, *(__m128 *)(a1 + 400));
  v3 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 256));
  v4 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 272));
  v5 = (float)((float)(_mm_shuffle_ps(v3, v3, 85).m128_f32[0] * 0.71520001) + (float)(v3.m128_f32[0] * 0.21259999))
     + (float)(_mm_shuffle_ps(v3, v3, 170).m128_f32[0] * 0.0722);
  v6 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 288));
  *(float *)(a1 + 416) = v5;
  *(float *)(a1 + 420) = (float)((float)(_mm_shuffle_ps(v4, v4, 85).m128_f32[0] * 0.71520001)
                               + (float)(v4.m128_f32[0] * 0.21259999))
                       + (float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] * 0.0722);
  *(float *)(a1 + 424) = (float)((float)(_mm_shuffle_ps(v6, v6, 85).m128_f32[0] * 0.71520001)
                               + (float)(v6.m128_f32[0] * 0.21259999))
                       + (float)(_mm_shuffle_ps(v6, v6, 170).m128_f32[0] * 0.0722);
  sub_180081344((_DWORD *)(a1 + 416));
}

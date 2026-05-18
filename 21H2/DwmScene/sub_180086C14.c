/*
 * XREFs of sub_180086C14 @ 0x180086C14
 * Callers:
 *     sub_1800866A4 @ 0x1800866A4 (sub_1800866A4.c)
 *     sub_180090360 @ 0x180090360 (sub_180090360.c)
 *     sub_1800B9484 @ 0x1800B9484 (sub_1800B9484.c)
 *     sub_1800FE7B0 @ 0x1800FE7B0 (sub_1800FE7B0.c)
 *     sub_1801023A0 @ 0x1801023A0 (sub_1801023A0.c)
 *     sub_18010BED0 @ 0x18010BED0 (sub_18010BED0.c)
 *     sub_180115870 @ 0x180115870 (sub_180115870.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180086C14(_DWORD *a1)
{
  __m128 v1; // xmm6
  __m128 v2; // xmm3
  __m128 v3; // xmm1
  __m128 v4; // xmm3
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm6

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v1 = _mm_movelh_ps((__m128)*(unsigned __int64 *)a1, (__m128)(unsigned int)a1[2]);
  v2 = _mm_mul_ps(v1, v1);
  v3 = _mm_shuffle_ps(v2, v2, 153);
  v2.m128_f32[0] = (float)(v2.m128_f32[0] + v3.m128_f32[0]) + _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  v4 = _mm_shuffle_ps(v2, v2, 0);
  v5 = _mm_sqrt_ps(v4);
  v6 = _mm_cmpneq_ps((__m128)xmmword_18013FC00, v4);
  v7 = _mm_or_ps(
         _mm_and_ps(_mm_and_ps(_mm_div_ps(v1, v5), _mm_cmpneq_ps(v5, (__m128)0LL)), v6),
         _mm_andnot_ps(v6, (__m128)xmmword_18013FC10));
  *a1 = v7.m128_i32[0];
  a1[1] = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  a1[2] = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
}

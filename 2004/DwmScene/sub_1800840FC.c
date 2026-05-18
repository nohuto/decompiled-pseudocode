/*
 * XREFs of sub_1800840FC @ 0x1800840FC
 * Callers:
 *     sub_18007F750 @ 0x18007F750 (sub_18007F750.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_1800840FC(double a1, double a2, double a3)
{
  __m128 v3; // xmm7
  __m128 v4; // xmm6
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm8
  __m128 v12; // xmm9
  __m128 v13; // xmm7
  __m128 v14; // xmm7
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm7
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __m128 v23; // xmm2
  __m128 v24; // xmm1
  __m128 v25; // xmm5
  __m128 v26; // xmm3
  __m128 v27; // xmm1
  __m128 v28; // xmm1

  v3 = *(__m128 *)&a2;
  if ( (_mm_movemask_ps(_mm_cmpeq_ps((__m128)0LL, *(__m128 *)&a2)) & 7) == 7 )
    wassert(
      L"!XMVector3Equal(EyeDirection, XMVectorZero())",
      L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl",
      0x7B3u);
  if ( (_mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps((__m128)xmmword_180139B20, *(__m128 *)&a2), (__m128)xmmword_180139B00)) & 7) != 0 )
    wassert(L"!XMVector3IsInfinite(EyeDirection)", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl", 0x7B4u);
  if ( (_mm_movemask_ps(_mm_cmpeq_ps((__m128)0LL, *(__m128 *)&a3)) & 7) == 7 )
    wassert(
      L"!XMVector3Equal(UpDirection, XMVectorZero())",
      L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl",
      0x7B5u);
  if ( (_mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps((__m128)xmmword_180139B20, *(__m128 *)&a3), (__m128)xmmword_180139B00)) & 7) != 0 )
    wassert(L"!XMVector3IsInfinite(UpDirection)", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl", 0x7B6u);
  v4 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 201);
  v5 = _mm_mul_ps(*(__m128 *)&a2, *(__m128 *)&a2);
  v6 = _mm_shuffle_ps(v5, v5, 153);
  v7 = _mm_sub_ps((__m128)0LL, *(__m128 *)&a1);
  v5.m128_f32[0] = (float)(v5.m128_f32[0] + v6.m128_f32[0]) + _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  v8 = _mm_shuffle_ps(v5, v5, 0);
  v9 = _mm_sqrt_ps(v8);
  v10 = _mm_cmpneq_ps(v8, (__m128)xmmword_180139B00);
  v11 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_cmpneq_ps((__m128)0LL, v9), _mm_div_ps(v3, v9)), v10),
          _mm_andnot_ps(v10, (__m128)xmmword_180139B10));
  v12 = _mm_mul_ps(v7, v11);
  v13 = _mm_shuffle_ps(v11, v11, 210);
  v14 = _mm_and_ps(
          _mm_sub_ps(_mm_mul_ps(v13, v4), _mm_mul_ps(_mm_shuffle_ps(v13, v13, 210), _mm_shuffle_ps(v4, v4, 201))),
          (__m128)xmmword_180139A50);
  v15 = _mm_mul_ps(v14, v14);
  v16 = _mm_shuffle_ps(v15, v15, 153);
  v15.m128_f32[0] = (float)(v15.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
  v17 = _mm_shuffle_ps(v15, v15, 0);
  v18 = _mm_sqrt_ps(v17);
  v19 = _mm_cmpneq_ps(v17, (__m128)xmmword_180139B00);
  v20 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_div_ps(v14, v18), _mm_cmpneq_ps((__m128)0LL, v18)), v19),
          _mm_andnot_ps(v19, (__m128)xmmword_180139B10));
  v21 = _mm_mul_ps(v7, v20);
  v22 = _mm_shuffle_ps(v20, v20, 210);
  v23 = _mm_shuffle_ps(v11, v11, 201);
  v24 = _mm_shuffle_ps(v21, v21, 153);
  v25 = _mm_and_ps(
          _mm_sub_ps(_mm_mul_ps(v22, v23), _mm_mul_ps(_mm_shuffle_ps(v22, v22, 210), _mm_shuffle_ps(v23, v23, 201))),
          (__m128)xmmword_180139A50);
  v26 = _mm_mul_ps(v7, v25);
  v21.m128_f32[0] = (float)(v21.m128_f32[0] + v24.m128_f32[0]) + _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
  v27 = _mm_shuffle_ps(v26, v26, 153);
  v26.m128_f32[0] = v26.m128_f32[0] + v27.m128_f32[0];
  v9.m128_f32[0] = _mm_shuffle_ps(v27, v27, 85).m128_f32[0];
  v28 = _mm_shuffle_ps(v12, v12, 153);
  v26.m128_f32[0] = v26.m128_f32[0] + v9.m128_f32[0];
  v12.m128_f32[0] = (float)(v12.m128_f32[0] + v28.m128_f32[0]) + _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
  return _mm_shuffle_ps(
           _mm_shuffle_ps(
             _mm_or_ps(
               _mm_andnot_ps((__m128)xmmword_180139B80, _mm_shuffle_ps(v21, v21, 0)),
               _mm_and_ps((__m128)xmmword_180139B80, v20)),
             _mm_or_ps(
               _mm_andnot_ps((__m128)xmmword_180139B80, _mm_shuffle_ps(v26, v26, 0)),
               _mm_and_ps((__m128)xmmword_180139B80, v25)),
             68),
           _mm_shuffle_ps(
             _mm_or_ps(
               _mm_andnot_ps((__m128)xmmword_180139B80, _mm_shuffle_ps(v12, v12, 0)),
               _mm_and_ps((__m128)xmmword_180139B80, v11)),
             (__m128)xmmword_180139A20,
             68),
           136);
}

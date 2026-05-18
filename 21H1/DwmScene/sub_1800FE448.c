/*
 * XREFs of sub_1800FE448 @ 0x1800FE448
 * Callers:
 *     sub_180100300 @ 0x180100300 (sub_180100300.c)
 * Callees:
 *     sub_1800FFFB0 @ 0x1800FFFB0 (sub_1800FFFB0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     floorf @ 0x18011F790 (floorf.c)
 */

__m128 *__fastcall sub_1800FE448(__int64 a1, __m128 *a2, __m128 *a3)
{
  int v3; // edi
  __m128 v5; // xmm1
  int *v6; // r14
  __int64 v7; // r12
  __int64 v8; // rbx
  float v9; // xmm6_4
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // r14d
  __int64 v14; // r15
  int v15; // edx
  __int64 v16; // r12
  float v17; // xmm1_4
  __m128 v18; // xmm6
  float v19; // xmm0_4
  __m128 X; // [rsp+28h] [rbp-58h] BYREF
  float v23; // [rsp+38h] [rbp-48h]
  float v24[3]; // [rsp+3Ch] [rbp-44h]
  __int64 v25; // [rsp+48h] [rbp-38h]
  int v26; // [rsp+50h] [rbp-30h]
  _DWORD v27[4]; // [rsp+58h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 136);
  if ( !a3 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  v5 = *a3;
  v27[1] = 1;
  v25 = 0LL;
  v6 = v27;
  v26 = 0;
  v7 = 3LL;
  *(_QWORD *)v24 = 0LL;
  v27[0] = 0;
  v27[2] = 2;
  *a3 = _mm_mul_ps(
          _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v3), (__m128)COERCE_UNSIGNED_INT((float)v3), 0),
          _mm_min_ps(_mm_max_ps(v5, (__m128)xmmword_180139A90), (__m128)xmmword_180139A80));
  v5.m128_i32[0] = a3->m128_i32[1];
  X.m128_i32[0] = a3->m128_i32[0];
  X.m128_i32[2] = a3->m128_i32[2];
  v23 = 0.0;
  X.m128_i32[1] = v5.m128_i32[0];
  do
  {
    v8 = *v6;
    v9 = X.m128_f32[v8];
    v10 = (int)floorf(v9);
    v11 = v10;
    if ( v10 > v3 - 2 )
      v11 = v3 - 2;
    if ( v10 < 0 )
      v11 = 0;
    ++v6;
    *((_DWORD *)&v25 + v8) = v11;
    v24[v8 - 1] = v9 - (float)v11;
    --v7;
  }
  while ( v7 );
  v12 = v26;
  v13 = 0;
  v14 = 0LL;
  v15 = v3 * HIDWORD(v25);
  *a2 = (__m128)xmmword_18020DC70;
  v16 = (int)v25 + v3 * v3 * v12 + v15;
  do
  {
    if ( (v13 & 1) != 0 )
      v17 = v23;
    else
      v17 = 1.0 - v23;
    if ( (v13 & 2) != 0 )
    {
      v18 = (__m128)LODWORD(v24[0]);
    }
    else
    {
      v18 = (__m128)0x3F800000u;
      v18.m128_f32[0] = 1.0 - v24[0];
    }
    if ( (v13 & 4) != 0 )
      v19 = v24[1];
    else
      v19 = 1.0 - v24[1];
    v18.m128_f32[0] = (float)(v18.m128_f32[0] * v17) * v19;
    sub_1800FFFB0(a1, &X, ((v13 & 4) != 0 ? v3 * v3 : 0) + v16 + ((v13 & 2) != 0 ? v3 : 0) + (v14 & 1));
    ++v13;
    ++v14;
    *a2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), X), *a2);
  }
  while ( v13 < 8 );
  return a2;
}

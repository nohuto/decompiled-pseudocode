/*
 * XREFs of sub_180083B34 @ 0x180083B34
 * Callers:
 *     sub_18007FA44 @ 0x18007FA44 (sub_18007FA44.c)
 * Callees:
 *     sub_180084024 @ 0x180084024 (sub_180084024.c)
 *     sub_1800844B4 @ 0x1800844B4 (sub_1800844B4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall sub_180083B34(_DWORD *a1, _OWORD *a2, _OWORD *a3, double a4)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __int64 v7; // rbx
  _DWORD *v9; // rsi
  __m128 v10; // xmm8
  __m128 v11; // xmm1
  __m128 v12; // xmm7
  unsigned __int32 *v13; // r14
  __m128 v14; // xmm1
  unsigned __int32 v15; // xmm7_4
  __m128 v16; // xmm6
  unsigned __int32 *v17; // rdi
  __m128 v18; // xmm1
  unsigned __int32 v19; // xmm6_4
  __int64 v20; // rdx
  float v21; // xmm1_4
  bool v22; // cc
  float v23; // xmm0_4
  __int64 v24; // rdi
  __int64 v25; // r9
  __int64 v26; // r8
  __m128 *v27; // r14
  __m128 v28; // xmm2
  __m128 v29; // xmm1
  __m128 v30; // xmm2
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  __m128 v33; // xmm3
  float v34; // xmm2_4
  float v35; // xmm4_4
  float v36; // xmm1_4
  __m128 v37; // xmm3
  __m128 v38; // xmm2
  __m128 *v39; // rax
  __m128 v40; // xmm2
  __m128 v41; // xmm1
  __m128 v42; // xmm2
  __m128 v43; // xmm1
  __m128 v44; // xmm2
  __m128 v45; // xmm3
  __m128 v46; // xmm3
  __m128 v47; // xmm2
  __m128 *v48; // rax
  __m128 v49; // xmm3
  __m128 v50; // xmm1
  __m128 v51; // xmm3
  __m128 v52; // xmm0
  __m128 v53; // xmm3
  unsigned __int64 v54; // xmm8_8^8
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  float v58; // xmm0_4
  __int128 v60; // xmm0
  _QWORD v61[4]; // [rsp+28h] [rbp-99h]
  __m128 v62; // [rsp+48h] [rbp-79h] BYREF
  __m128 v63; // [rsp+58h] [rbp-69h] BYREF
  _OWORD v64[2]; // [rsp+68h] [rbp-59h] BYREF

  v7 = 0LL;
  v9 = a1;
  if ( !a1 )
    wassert(L"outScale != nullptr", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl", 0x3DDu);
  if ( !a2 )
    wassert(L"outRotQuat != nullptr", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl", 0x3DEu);
  if ( !a3 )
    wassert(L"outTrans != nullptr", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl", 0x3DFu);
  v62 = v4;
  v10 = _mm_mul_ps(v4, v4);
  v61[0] = &v62;
  *a3 = *(_OWORD *)&a4;
  v64[1] = xmmword_180139A20;
  v61[1] = &v63;
  v61[2] = v64;
  v63 = v5;
  v64[0] = v6;
  v12 = _mm_mul_ps(v5, v5);
  v13 = a1 + 1;
  v11 = _mm_shuffle_ps(v10, v10, 102);
  v10.m128_f32[0] = (float)(v10.m128_f32[0] + v11.m128_f32[0]) + _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
  *a1 = _mm_sqrt_ps(_mm_shuffle_ps(v10, v10, 0)).m128_u32[0];
  v14 = _mm_shuffle_ps(v12, v12, 102);
  v12.m128_f32[0] = (float)(v12.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
  v15 = _mm_sqrt_ps(_mm_shuffle_ps(v12, v12, 0)).m128_u32[0];
  if ( a1 == (_DWORD *)-4LL )
    wassert(L"x != nullptr", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathVector.inl", 0x1F0u);
  v16 = _mm_mul_ps(v6, v6);
  v17 = a1 + 2;
  *v13 = v15;
  v18 = _mm_shuffle_ps(v16, v16, 102);
  v16.m128_f32[0] = (float)(v16.m128_f32[0] + v18.m128_f32[0]) + _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
  v19 = _mm_sqrt_ps(_mm_shuffle_ps(v16, v16, 0)).m128_u32[0];
  if ( a1 == (_DWORD *)-8LL )
    wassert(L"x != nullptr", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathVector.inl", 0x1F0u);
  *v17 = v19;
  v20 = 2LL;
  v21 = *(float *)v13;
  v22 = *(float *)v13 <= *(float *)a1;
  a1[3] = 0;
  v23 = *(float *)v17;
  if ( v22 )
  {
    if ( v23 <= *(float *)a1 )
    {
      v24 = 0LL;
      if ( v23 <= v21 )
      {
        v25 = 2LL;
        goto LABEL_23;
      }
      v26 = 2LL;
    }
    else
    {
      v24 = 2LL;
      v26 = 0LL;
    }
    v25 = 1LL;
    goto LABEL_24;
  }
  if ( v23 > v21 )
  {
    v24 = 2LL;
    v25 = 0LL;
LABEL_23:
    v26 = 1LL;
    goto LABEL_24;
  }
  v24 = 1LL;
  if ( v23 <= *(float *)a1 )
  {
    v26 = 0LL;
    v25 = 2LL;
  }
  else
  {
    v26 = 2LL;
    v25 = 0LL;
  }
LABEL_24:
  if ( *(float *)&a1[v24] < 0.000099999997 )
  {
    a1 = (_DWORD *)v61[v24];
    *(_OWORD *)a1 = *off_180208630[v24];
  }
  v27 = (__m128 *)v61[v24];
  v28 = _mm_mul_ps(*v27, *v27);
  v29 = _mm_shuffle_ps(v28, v28, 153);
  v28.m128_f32[0] = (float)(v28.m128_f32[0] + v29.m128_f32[0]) + _mm_shuffle_ps(v29, v29, 85).m128_f32[0];
  v30 = _mm_shuffle_ps(v28, v28, 0);
  v31 = _mm_sqrt_ps(v30);
  v32 = _mm_cmpneq_ps(v30, (__m128)xmmword_180139B00);
  v33 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_div_ps(*v27, v31), _mm_cmpneq_ps((__m128)0LL, v31)), v32),
          _mm_andnot_ps(v32, (__m128)xmmword_180139B10));
  *v27 = v33;
  if ( *(float *)&v9[v26] < 0.000099999997 )
  {
    v34 = fabs(_mm_shuffle_ps(v33, v33, 85).m128_f32[0]);
    v35 = fabs(v33.m128_f32[0]);
    v36 = fabs(_mm_shuffle_ps(v33, v33, 170).m128_f32[0]);
    if ( v34 <= v35 )
    {
      if ( v36 <= v35 )
      {
        LOBYTE(v7) = v36 <= v34;
        ++v7;
      }
      else
      {
        v7 = 1LL;
      }
    }
    else if ( v36 <= v34 )
    {
      if ( v36 > v35 )
        v20 = 0LL;
      v7 = v20;
    }
    v37 = _mm_shuffle_ps(v33, v33, 201);
    v38 = _mm_shuffle_ps(*(__m128 *)off_180208630[v7], *(__m128 *)off_180208630[v7], 210);
    *(__m128 *)v61[v26] = _mm_and_ps(
                            _mm_sub_ps(
                              _mm_mul_ps(v38, v37),
                              _mm_mul_ps(_mm_shuffle_ps(v38, v38, 210), _mm_shuffle_ps(v37, v37, 201))),
                            (__m128)xmmword_180139A50);
  }
  v39 = (__m128 *)v61[v26];
  v40 = _mm_mul_ps(*v39, *v39);
  v41 = _mm_shuffle_ps(v40, v40, 153);
  v40.m128_f32[0] = (float)(v40.m128_f32[0] + v41.m128_f32[0]) + _mm_shuffle_ps(v41, v41, 85).m128_f32[0];
  v42 = _mm_shuffle_ps(v40, v40, 0);
  v43 = _mm_sqrt_ps(v42);
  v44 = _mm_cmpneq_ps(v42, (__m128)xmmword_180139B00);
  v45 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_div_ps(*v39, v43), _mm_cmpneq_ps((__m128)0LL, v43)), v44),
          _mm_andnot_ps(v44, (__m128)xmmword_180139B10));
  *v39 = v45;
  if ( *(float *)&v9[v25] < 0.000099999997 )
  {
    v46 = _mm_shuffle_ps(v45, v45, 210);
    v47 = _mm_shuffle_ps(*v27, *v27, 201);
    *(__m128 *)v61[v25] = _mm_and_ps(
                            _mm_sub_ps(
                              _mm_mul_ps(v46, v47),
                              _mm_mul_ps(_mm_shuffle_ps(v46, v46, 210), _mm_shuffle_ps(v47, v47, 201))),
                            (__m128)xmmword_180139A50);
  }
  v48 = (__m128 *)v61[v25];
  v49 = _mm_mul_ps(*v48, *v48);
  v50 = _mm_shuffle_ps(v49, v49, 153);
  v49.m128_f32[0] = (float)(v49.m128_f32[0] + v50.m128_f32[0]) + _mm_shuffle_ps(v50, v50, 85).m128_f32[0];
  v51 = _mm_shuffle_ps(v49, v49, 0);
  v52 = _mm_sqrt_ps(v51);
  v53 = _mm_cmpneq_ps(v51, (__m128)xmmword_180139B00);
  *v48 = _mm_or_ps(
           _mm_and_ps(_mm_and_ps(_mm_cmpneq_ps((__m128)0LL, v52), _mm_div_ps(*v48, v52)), v53),
           _mm_andnot_ps(v53, (__m128)xmmword_180139B10));
  v54 = v62.m128_u64[1];
  v58 = sub_180084024(a1, v20);
  if ( v58 < 0.0 )
  {
    v58 = -v58;
    *(float *)&v9[v24] = -*(float *)&v9[v24];
    *v27 = _mm_sub_ps((__m128)0LL, *v27);
    v54 = v62.m128_u64[1];
  }
  if ( (float)((float)(v58 + -1.0) * (float)(v58 + -1.0)) > 0.000099999997 )
    return 0;
  *((_QWORD *)&v60 + 1) = v54;
  *(double *)&v60 = sub_1800844B4(v56, v55, v57);
  *a2 = v60;
  return 1;
}

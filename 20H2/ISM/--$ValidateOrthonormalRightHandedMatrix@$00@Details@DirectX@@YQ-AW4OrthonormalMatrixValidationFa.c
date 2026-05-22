/*
 * XREFs of ??$ValidateOrthonormalRightHandedMatrix@$00@Details@DirectX@@YQ?AW4OrthonormalMatrixValidationFailures@1@UXMMATRIX@1@@Z @ 0x18014F674
 * Callers:
 *     _lambda_f2d9a31b738d46358cc103eee0272db8_::operator() @ 0x1801583B8 (_lambda_f2d9a31b738d46358cc103eee0272db8_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall DirectX::Details::ValidateOrthonormalRightHandedMatrix<1>(
        double a1,
        double a2,
        double a3,
        double a4)
{
  __m128 v4; // xmm7
  unsigned __int8 v5; // cl
  __m128 v6; // xmm12
  __m128 v7; // xmm6
  __m128 v8; // xmm5
  BOOL v9; // r10d
  __m128 v10; // xmm2
  __m128 v11; // xmm5
  __m128 v12; // xmm4
  __m128 v13; // xmm1
  float v14; // xmm0_4
  __m128 v15; // xmm1
  float v16; // xmm0_4
  __m128 v17; // xmm1
  __m128 v18; // xmm2
  __m128 v19; // xmm5
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __m128 v22; // xmm4
  unsigned __int8 v23; // r9
  __m128 v24; // xmm2
  __m128 v25; // xmm5
  __m128 v26; // xmm4
  __m128 v27; // xmm1
  float v28; // xmm0_4
  __m128 v29; // xmm1
  float v30; // xmm0_4
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  __m128 v33; // xmm5
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  __m128 v36; // xmm4
  __m128 v37; // xmm6
  __m128 v38; // xmm7
  __m128 v39; // xmm6
  __m128 v40; // xmm1

  v4 = *(__m128 *)&a1;
  v5 = 0;
  v6 = *(__m128 *)&a3;
  v7 = *(__m128 *)&a2;
  v8 = _mm_sub_ps(
         _mm_shuffle_ps(
           _mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a2, 238),
           _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a4, 238),
           221),
         (__m128)_xmm);
  v9 = _mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v8), v8), (__m128)_xmm)) != 15;
  v10 = _mm_mul_ps(*(__m128 *)&a1, *(__m128 *)&a2);
  v11 = _mm_mul_ps(v6, *(__m128 *)&a1);
  v12 = _mm_mul_ps(v6, *(__m128 *)&a2);
  v13 = _mm_shuffle_ps(v10, v10, 153);
  v10.m128_f32[0] = v10.m128_f32[0] + v13.m128_f32[0];
  v14 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
  v15 = _mm_shuffle_ps(v11, v11, 153);
  v11.m128_f32[0] = v11.m128_f32[0] + v15.m128_f32[0];
  v10.m128_f32[0] = v10.m128_f32[0] + v14;
  v16 = _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
  v17 = _mm_shuffle_ps(v12, v12, 153);
  v11.m128_f32[0] = v11.m128_f32[0] + v16;
  v18 = _mm_sub_ps(_mm_shuffle_ps(v10, v10, 0), (__m128)_xmm);
  v19 = _mm_shuffle_ps(v11, v11, 0);
  v12.m128_f32[0] = (float)(v12.m128_f32[0] + v17.m128_f32[0]) + _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
  v20 = _mm_shuffle_ps(v12, v12, 0);
  if ( (_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v18), v18), (__m128)_xmm)) & 7) != 7
    || (v21 = _mm_sub_ps(v19, (__m128)_xmm),
        (_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v21), v21), (__m128)_xmm)) & 7) != 7)
    || (v22 = _mm_sub_ps(v20, (__m128)_xmm),
        v23 = 1,
        (_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v22), v22), (__m128)_xmm)) & 7) != 7) )
  {
    v23 = 0;
  }
  v24 = _mm_mul_ps(v4, v4);
  v25 = _mm_mul_ps(v7, v7);
  v26 = _mm_mul_ps(v6, v6);
  v27 = _mm_shuffle_ps(v24, v24, 153);
  v24.m128_f32[0] = v24.m128_f32[0] + v27.m128_f32[0];
  v28 = _mm_shuffle_ps(v27, v27, 85).m128_f32[0];
  v29 = _mm_shuffle_ps(v25, v25, 153);
  v25.m128_f32[0] = v25.m128_f32[0] + v29.m128_f32[0];
  v24.m128_f32[0] = v24.m128_f32[0] + v28;
  v30 = _mm_shuffle_ps(v29, v29, 85).m128_f32[0];
  v31 = _mm_shuffle_ps(v26, v26, 153);
  v25.m128_f32[0] = v25.m128_f32[0] + v30;
  v32 = _mm_sub_ps(_mm_shuffle_ps(v24, v24, 0), DirectX::g_XMOne);
  v33 = _mm_shuffle_ps(v25, v25, 0);
  v26.m128_f32[0] = (float)(v26.m128_f32[0] + v31.m128_f32[0]) + _mm_shuffle_ps(v31, v31, 85).m128_f32[0];
  v34 = _mm_shuffle_ps(v26, v26, 0);
  if ( (_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v32), v32), (__m128)_xmm)) & 7) == 7 )
  {
    v35 = _mm_sub_ps(v33, DirectX::g_XMOne);
    if ( (_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v35), v35), (__m128)_xmm)) & 7) == 7 )
    {
      v36 = _mm_sub_ps(v34, DirectX::g_XMOne);
      if ( (_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v36), v36), (__m128)_xmm)) & 7) == 7 )
        v5 = 1;
    }
  }
  v37 = _mm_shuffle_ps(v7, v7, 210);
  v38 = _mm_shuffle_ps(v4, v4, 201);
  v39 = _mm_mul_ps(
          _mm_and_ps(
            _mm_sub_ps(_mm_mul_ps(v37, v38), _mm_mul_ps(_mm_shuffle_ps(v38, v38, 201), _mm_shuffle_ps(v37, v37, 210))),
            DirectX::g_XMMask3),
          v6);
  v40 = _mm_shuffle_ps(v39, v39, 153);
  v39.m128_f32[0] = (float)(v39.m128_f32[0] + v40.m128_f32[0]) + _mm_shuffle_ps(v40, v40, 85).m128_f32[0];
  return ((_mm_movemask_ps(_mm_cmplt_ps((__m128)_xmm, _mm_shuffle_ps(v39, v39, 0))) & 7) != 7 ? 8 : 0) | v9 | (4 * (v5 ^ 1)) | (2 * (v23 ^ 1u));
}

/*
 * XREFs of ?CalculateViewTransformsForSlate@CStereoscopicContentManager@@AEAAXW4StereoscopicContentMode@@MMAEBUStereoscopicSlateData@@PEAUStereoscopicViewData@@@Z @ 0x180252A00
 * Callers:
 *     ?CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA?BVCMILMatrix@@PEBVCVisualTree@@IIHH@Z @ 0x180252794 (-CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA-BVCMILMatrix@@PEBVCVisual.c)
 * Callees:
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x18001717C (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1801F7370 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CStereoscopicContentManager::CalculateViewTransformsForSlate(
        __int64 a1,
        char a2,
        double a3,
        double a4,
        __m128 *a5,
        __int64 a6)
{
  __m128 v7; // xmm6
  __m128 v8; // xmm7
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  int v21; // esi
  __m128 v22; // xmm8
  __m128 v23; // xmm3
  __m128 v24; // xmm0
  __m128 v25; // xmm1
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  __m128 v28; // xmm10
  __int64 v29; // rbx
  __m128 v30; // xmm11
  __int64 v31; // rdi
  __m128 *v32; // rax
  __m128 v33; // xmm1
  __m128 v34; // xmm2
  __m128 v35; // xmm3
  double v36; // xmm0_8
  double v37; // xmm0_8
  __m128 v38; // xmm0
  __m128 v39; // xmm5
  __m128 v40; // xmm6
  __m128 v41; // xmm0
  __m128 v42; // xmm2
  __m128 v43; // xmm0
  double v44; // xmm0_8
  double v45; // xmm1_8
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  __m128 v48; // xmm4
  unsigned __int64 v49; // xmm0_8
  double v50; // xmm0_8
  __int128 v51; // xmm1
  __int128 v52; // xmm2
  __m128 v53; // xmm3
  unsigned __int64 v54; // xmm0_8
  __m128 v55; // xmm0
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v57; // [rsp+28h] [rbp-E0h] BYREF
  __m128 v58[4]; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v59[4]; // [rsp+78h] [rbp-90h] BYREF
  __m128 v60[4]; // [rsp+B8h] [rbp-50h] BYREF
  __m128 v61[4]; // [rsp+F8h] [rbp-10h] BYREF
  __m128 v62[4]; // [rsp+138h] [rbp+30h] BYREF
  __m128 v63[4]; // [rsp+178h] [rbp+70h] BYREF
  __m128 v64[4]; // [rsp+1B8h] [rbp+B0h] BYREF
  _OWORD v65[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  _OWORD v66[4]; // [rsp+238h] [rbp+130h] BYREF
  _OWORD v67[4]; // [rsp+278h] [rbp+170h] BYREF
  _QWORD v68[3]; // [rsp+2B8h] [rbp+1B0h]
  _QWORD v69[3]; // [rsp+2D0h] [rbp+1C8h]

  v7 = *(__m128 *)&a4;
  v57 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  v8 = *(__m128 *)&a3;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v10 = *(_OWORD *)(a1 + 216);
  v65[0] = *(_OWORD *)(a1 + 200);
  v11 = *(_OWORD *)(a1 + 232);
  v65[1] = v10;
  v12 = *(_OWORD *)(a1 + 248);
  v65[2] = v11;
  v13 = *(_OWORD *)(a1 + 264);
  v65[3] = v12;
  v14 = *(_OWORD *)(a1 + 280);
  v66[0] = v13;
  v15 = *(_OWORD *)(a1 + 296);
  v66[1] = v14;
  v16 = *(_OWORD *)(a1 + 312);
  v66[2] = v15;
  v17 = *(__m128 *)(a1 + 136);
  v66[3] = v16;
  v18 = *(__m128 *)(a1 + 152);
  v59[0] = v17;
  v19 = *(__m128 *)(a1 + 168);
  v59[1] = v18;
  v20 = *(__m128 *)(a1 + 184);
  v59[2] = v19;
  v59[3] = v20;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v57);
  v21 = a2 & 1;
  v22 = (__m128)_xmm;
  v67[1] = DirectX::g_XMIdentityR1;
  v68[0] = v65;
  v68[1] = v66;
  v67[0] = DirectX::g_XMIdentityR0;
  v68[2] = v67;
  v69[0] = a6 + 64;
  v67[3] = DirectX::g_XMIdentityR3;
  v23 = *(__m128 *)&a3;
  v23.m128_f32[0] = *(float *)&a3 * -0.5;
  v69[1] = a6 + 128;
  v8.m128_f32[0] = *(float *)&a3 * 0.5;
  v69[2] = a6;
  v67[2] = DirectX::g_XMIdentityR2;
  v24 = *a5;
  v60[1] = a5[1];
  v25 = a5[3];
  v60[0] = v24;
  v26 = a5[2];
  v60[3] = v25;
  v27 = v7;
  v7.m128_f32[0] = v7.m128_f32[0] * 0.5;
  v27.m128_f32[0] = v27.m128_f32[0] * -0.5;
  v60[2] = v26;
  v28 = _mm_unpacklo_ps(_mm_unpacklo_ps(v23, (__m128)0LL), _mm_unpacklo_ps(v27, (__m128)(unsigned int)FLOAT_1_0));
  v29 = 0LL;
  v30 = _mm_unpacklo_ps(_mm_unpacklo_ps(v8, (__m128)0LL), _mm_unpacklo_ps(v7, (__m128)(unsigned int)FLOAT_1_0));
  v31 = 3LL;
  do
  {
    v32 = (__m128 *)v68[v29];
    v33 = v32[1];
    v34 = v32[2];
    v35 = v32[3];
    *(_QWORD *)&v36 = DirectX::XMMatrixInverse(
                        0LL,
                        *(double *)v33.m128_u64,
                        *(double *)v34.m128_u64,
                        *(double *)v35.m128_u64).m128_u64[0];
    *(_QWORD *)&v37 = DirectX::XMMatrixMultiply(v36, v59).m128_u64[0];
    v38 = DirectX::XMMatrixMultiply(v37, v60);
    v61[0] = (__m128)DirectX::g_XMIdentityR0;
    v61[1] = (__m128)DirectX::g_XMIdentityR1;
    v61[2] = (__m128)DirectX::g_XMIdentityR2;
    v39 = _mm_mul_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_mul_ps((__m128)0LL, v34), _mm_mul_ps(v22, v35)),
              _mm_add_ps(_mm_mul_ps((__m128)0LL, v38), _mm_mul_ps((__m128)0LL, v33))),
            (__m128)_xmm);
    v40 = _mm_unpacklo_ps(
            _mm_unpacklo_ps(v39, (__m128)0LL),
            _mm_unpacklo_ps(_mm_shuffle_ps(v39, v39, 85), (__m128)(unsigned int)FLOAT_1_0));
    v41 = (__m128)LODWORD(FLOAT_N1_0);
    v61[3] = v40;
    v41.m128_f32[0] = (float)(-1.0 / _mm_shuffle_ps(v39, v39, 170).m128_f32[0]) * 4.0;
    v42 = _mm_unpacklo_ps((__m128)_xmm, _mm_unpacklo_ps((__m128)0LL, v41));
    v43 = DirectX::XMMatrixMultiply(*(double *)&_xmm, v61);
    v62[3] = (__m128)_xmm;
    v62[2] = v42;
    v62[1] = (__m128)_xmm;
    v62[0] = v43;
    *(_QWORD *)&v44 = DirectX::XMMatrixInverse(0LL, DirectX::g_XMIdentityR1, 0.0, *(double *)v40.m128_u64).m128_u64[0];
    v63[0] = DirectX::XMMatrixMultiply(v44, v62);
    v63[1] = (__m128)DirectX::g_XMIdentityR1;
    v45 = DirectX::g_XMIdentityR0;
    v63[2] = (__m128)DirectX::g_XMIdentityR2;
    v46 = DirectX::g_XMIdentityR1;
    v63[3] = v40;
    v47 = DirectX::g_XMIdentityR2;
    v58[2] = (__m128)_xmm;
    v48 = v28;
    v64[0] = (__m128)DirectX::g_XMIdentityR0;
    v64[1] = (__m128)DirectX::g_XMIdentityR1;
    v64[2] = (__m128)DirectX::g_XMIdentityR2;
    v58[3] = (__m128)DirectX::g_XMIdentityR3;
    v64[3] = v30;
    v58[0] = (__m128)_xmm;
    v58[1] = (__m128)_xmm;
    if ( v21 )
    {
      v49 = DirectX::XMMatrixMultiply(DirectX::g_XMIdentityR0, v58).m128_u64[0];
      v48 = v28;
      v47 = DirectX::g_XMIdentityR2;
      v46 = DirectX::g_XMIdentityR1;
      v45 = *(double *)&v49;
    }
    v50 = v45;
    v51 = v46;
    v52 = v47;
    v53 = v48;
    v54 = DirectX::XMMatrixMultiply(v50, v63).m128_u64[0];
    if ( v21 )
      v54 = DirectX::XMMatrixMultiply(*(double *)&v54, v58).m128_u64[0];
    v55 = DirectX::XMMatrixMultiply(*(double *)&v54, v64);
    result = v69[v29++];
    v22 = (__m128)_xmm;
    *(__m128 *)result = v55;
    *(_OWORD *)(result + 16) = v51;
    *(_OWORD *)(result + 32) = v52;
    *(__m128 *)(result + 48) = v53;
    --v31;
  }
  while ( v31 );
  return result;
}

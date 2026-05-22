/*
 * XREFs of _lambda_f2d9a31b738d46358cc103eee0272db8_::operator() @ 0x1801588A8
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18015DA10 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??$IsValidFloat@M@Details@@YA_NM@Z @ 0x1800C4738 (--$IsValidFloat@M@Details@@YA_NM@Z.c)
 *     ??$AreValidFloats@UXMFLOAT3@DirectX@@@@YA_NAEBUXMFLOAT3@DirectX@@@Z @ 0x18014E450 (--$AreValidFloats@UXMFLOAT3@DirectX@@@@YA_NAEBUXMFLOAT3@DirectX@@@Z.c)
 *     ??$GetPoseAtTime@AEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE_ID@@AEA_JAEB_JAEB_JAEA_JAEA_JAEAW4TracePredictionType@@AEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@AEB_NAEBI@HolographicDriverClientContinuousTrace@@SAXAEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE_ID@@AEA_JAEB_J322AEAW4TracePredictionType@@AEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@AEB_NAEBI@Z @ 0x18014EA30 (--$GetPoseAtTime@AEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE.c)
 *     ??$ValidateOrthonormalRightHandedMatrix@$00@Details@DirectX@@YQ?AW4OrthonormalMatrixValidationFailures@1@UXMMATRIX@1@@Z @ 0x18014FB64 (--$ValidateOrthonormalRightHandedMatrix@$00@Details@DirectX@@YQ-AW4OrthonormalMatrixValidationFa.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_3f94c1c330aebc4cd0e0e5305e75e493___ @ 0x180151428 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_180151428.c)
 *     ?GetPoseAtTime_OrientationInvalid_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x18015E35C (-GetPoseAtTime_OrientationInvalid_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 *     ?GetPoseAtTime_TranslationInvalid_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x18015E540 (-GetPoseAtTime_TranslationInvalid_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 *     ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x1801605E8 (-IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z.c)
 *     ?XMMatrixRTInverse@DirectX@@YQ?AUXMMATRIX@1@U21@@Z @ 0x180166EF0 (-XMMatrixRTInverse@DirectX@@YQ-AUXMMATRIX@1@U21@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167EDC (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall lambda_f2d9a31b738d46358cc103eee0272db8_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  __int64 **v3; // r15
  __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  bool v8; // zf
  __int64 v9; // rcx
  HolographicDriverClientContinuousTrace *v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rdi
  float *v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // r11
  __m128 v16; // xmm0
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // rcx
  HolographicDriverClientContinuousTrace *v22; // rcx
  __int64 *v23; // rax
  float **v24; // rdi
  __int64 v25; // rcx
  float *v26; // rsi
  __int64 v27; // rcx
  __m128 v28; // xmm2
  __m128 v29; // xmm2
  __m128 v30; // xmm1
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 *v33; // rcx
  __int64 **v34; // rax
  __int64 v35; // rdx
  __m128 v36; // xmm0
  __m128 v37; // xmm2
  __m128 v38; // xmm1
  __m128 v39; // xmm0
  __m128 v40; // xmm2
  __m128 v41; // xmm7
  __m128 v42; // xmm1
  _DWORD *v43; // rdx
  __int64 v44; // rcx
  __m128 v45; // xmm2
  __int64 v46; // rcx
  __m128 v47; // xmm4
  __int64 v48; // rcx
  __int64 v49; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-98h] BYREF
  __int64 v51; // [rsp+78h] [rbp-90h] BYREF
  __int64 v52; // [rsp+80h] [rbp-88h] BYREF
  __int64 v53; // [rsp+88h] [rbp-80h] BYREF
  int v54; // [rsp+90h] [rbp-78h]
  __int64 v55; // [rsp+98h] [rbp-70h]
  int v56; // [rsp+A0h] [rbp-68h]
  __int64 v57; // [rsp+A8h] [rbp-60h]
  int v58; // [rsp+B0h] [rbp-58h]
  __int64 v59; // [rsp+B8h] [rbp-50h]
  int v60; // [rsp+C0h] [rbp-48h]
  __int64 v61; // [rsp+C8h] [rbp-40h]
  int v62; // [rsp+D0h] [rbp-38h]
  __int64 v63; // [rsp+D8h] [rbp-30h]
  int v64; // [rsp+E0h] [rbp-28h]
  __int64 v65; // [rsp+E8h] [rbp-20h] BYREF

  v2 = **a1;
  v3 = a1 + 1;
  LODWORD(v51) = *(_DWORD *)(v2 + 16);
  if ( (a1[1][13] & 0x40) == 0 )
  {
    *(_DWORD *)(v2 + 156) &= ~1u;
    v2 = **a1;
  }
  v4 = v2 + 72;
  if ( !AreValidFloats<DirectX::XMFLOAT3>((float *)(v2 + 72)) )
  {
    *(_DWORD *)(**a1 + 16) &= ~1u;
    *(_DWORD *)(**a1 + 156) &= ~1u;
  }
  v6 = **a1;
  v7 = *(_BYTE *)(v6 + 156) & 1;
  v8 = (*(_BYTE *)(v6 + 16) & 1) == 0;
  LOBYTE(v49) = v7;
  if ( v8 && !v7 )
  {
    *(_QWORD *)v4 = qword_180209940;
    *(_DWORD *)(v4 + 8) = dword_180209948;
    if ( HolographicDriverClientContinuousTrace::IsEnabled(v6, v5) )
    {
      wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
        v9,
        _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
      HolographicDriverClientContinuousTrace::GetPoseAtTime_TranslationInvalid_(v10);
    }
  }
  v11 = 0;
  v12 = **a1;
  v13 = (float *)(v12 + 36);
  do
  {
    if ( !Details::IsValidFloat<float>(*v13) )
    {
      v19 = **a1;
      goto LABEL_15;
    }
    ++v11;
    ++v13;
  }
  while ( v11 < 9 );
  v15 = **a1;
  v16 = *(__m128 *)(v15 + 36);
  v17 = *(__m128 *)(v15 + 52);
  v18 = _mm_shuffle_ps(v17, v16, 244);
  if ( !(unsigned int)DirectX::Details::ValidateOrthonormalRightHandedMatrix<1>(
                        COERCE_DOUBLE(v16.m128_u64[0] & DirectX::g_XMMask3),
                        COERCE_DOUBLE(_mm_shuffle_ps(v18, v18, 82).m128_u64[0] & DirectX::g_XMMask3),
                        COERCE_DOUBLE(_mm_shuffle_ps(v17, *(__m128 *)(v15 + 68), 14).m128_u64[0] & DirectX::g_XMMask3),
                        *(double *)_mm_or_si128(_mm_srli_si128(*(__m128i *)(v15 + 68), 4), DirectX::g_XMIdentityR3).m128i_i64) )
    goto LABEL_16;
LABEL_15:
  *(_DWORD *)(v19 + 16) &= ~2u;
  v19 = **a1;
LABEL_16:
  if ( (*(_BYTE *)(v19 + 16) & 2) == 0 )
  {
    *(_OWORD *)(v12 + 36) = xmmword_1801C7498;
    *(_OWORD *)(v12 + 52) = xmmword_1801C74A8;
    *(_DWORD *)(v12 + 68) = 1065353216;
    v20 = **a1;
    *(_DWORD *)(v20 + 16) &= 0xFFFFFF8D;
    if ( HolographicDriverClientContinuousTrace::IsEnabled(v20, v14) )
    {
      wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
        v21,
        _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
      HolographicDriverClientContinuousTrace::GetPoseAtTime_OrientationInvalid_(v22);
    }
  }
  v23 = *a1;
  v24 = (float **)&v53;
  v54 = 4;
  v56 = 16;
  v58 = 8;
  v25 = *v23;
  v60 = 32;
  v62 = 64;
  v64 = 128;
  v53 = v25 + 84;
  v55 = v25 + 96;
  v57 = v25 + 108;
  v59 = v25 + 120;
  v61 = v25 + 132;
  v63 = v25 + 144;
  do
  {
    v26 = *v24;
    if ( !AreValidFloats<DirectX::XMFLOAT3>(*v24) )
    {
      *(_QWORD *)v26 = qword_180209940;
      *((_DWORD *)v26 + 2) = dword_180209948;
      *(_DWORD *)(**a1 + 16) &= ~*((_DWORD *)v24 + 2);
    }
    v24 += 2;
  }
  while ( v24 != (float **)&v65 );
  v27 = **a1;
  v28 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(v27 + 144), (__m128)*(unsigned int *)(v27 + 152));
  v29 = _mm_mul_ps(v28, v28);
  v30 = _mm_shuffle_ps(v29, v29, 153);
  if ( (float)((float)(v29.m128_f32[0] + v30.m128_f32[0]) + _mm_shuffle_ps(v30, v30, 85).m128_f32[0]) > 1.0201 )
    *(_DWORD *)(v27 + 16) &= ~0x80u;
  if ( *(_DWORD *)a1[2] )
  {
    v52 = -1LL;
    v32 = 0LL;
  }
  else
  {
    v31 = a1[4];
    v52 = *a1[3];
    v32 = *v31 - v52;
  }
  v33 = (__int64 *)*a1[5];
  if ( v33 )
  {
    *v33 = v32;
    v34 = (__int64 **)a1[5];
    if ( **v34 < 0 )
      **v34 = 0LL;
  }
  if ( ((*v3)[13] & 0x10) == 0 )
  {
    v35 = **a1;
    if ( (*(_BYTE *)(v35 + 16) & 2) != 0 )
    {
      v36 = *(__m128 *)(v35 + 36);
      v37 = *(__m128 *)(v35 + 52);
      v38 = _mm_shuffle_ps(v37, v36, 244);
      v39 = _mm_and_ps(v36, DirectX::g_XMMask3);
      v40 = _mm_and_ps(_mm_shuffle_ps(v37, *(__m128 *)(v35 + 68), 14), DirectX::g_XMMask3);
      *(double *)v39.m128_u64 = DirectX::XMMatrixRTInverse();
      v41 = _mm_movelh_ps((__m128)(unsigned __int64)qword_180208AA8, (__m128)(unsigned int)dword_180208AB0);
      v42 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v41, v41, 85), _mm_and_ps(_mm_shuffle_ps(v38, v38, 82), DirectX::g_XMMask3)),
                _mm_mul_ps(_mm_shuffle_ps(v41, v41, 0), v39)),
              _mm_mul_ps(_mm_shuffle_ps(v41, v41, 170), v40));
      v43[33] = v42.m128_i32[0];
      v43[34] = _mm_shuffle_ps(v42, v42, 85).m128_u32[0];
      v43[35] = _mm_shuffle_ps(v42, v42, 170).m128_u32[0];
      *(_DWORD *)(**a1 + 16) |= 0x40u;
    }
  }
  v44 = **a1;
  v45 = _mm_sub_ps(
          (__m128)0LL,
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(v44 + 84), (__m128)*(unsigned int *)(v44 + 92)));
  *(_DWORD *)(v44 + 84) = v45.m128_i32[0];
  *(_DWORD *)(v44 + 88) = _mm_shuffle_ps(v45, v45, 85).m128_u32[0];
  *(_DWORD *)(v44 + 92) = _mm_shuffle_ps(v45, v45, 170).m128_u32[0];
  v46 = **a1;
  v47 = _mm_sub_ps(
          (__m128)0LL,
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(v46 + 96), (__m128)*(unsigned int *)(v46 + 104)));
  *(_DWORD *)(v46 + 96) = v47.m128_i32[0];
  *(_DWORD *)(v46 + 100) = _mm_shuffle_ps(v47, v47, 85).m128_u32[0];
  *(_DWORD *)(v46 + 104) = _mm_shuffle_ps(v47, v47, 170).m128_u32[0];
  QueryPerformanceCounter(&PerformanceCount);
  HolographicDriverClientContinuousTrace::GetPoseAtTime<Windows::Internal::Holographic::SpatialGraphNodeReference * const &,SPATIAL_NODE_ID &,__int64 &,__int64 const &,__int64 const &,__int64 &,__int64 &,enum TracePredictionType &,SPATIAL_GRAPH_DYNAMIC_NODE_POSE &,bool const &,unsigned int const &>(
    a1 + 1,
    (unsigned __int64)(*v3 + 11),
    a1[6],
    &PerformanceCount,
    &v52,
    a1[4],
    (_QWORD *)(**a1 + 8),
    a1[2],
    **a1,
    (char *)&v49,
    &v51);
  v48 = (__int64)(*v3 + 11);
  PerformanceCount.QuadPart = (LONGLONG)*a1;
  Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_3f94c1c330aebc4cd0e0e5305e75e493___(
    v48,
    (__int64)&PerformanceCount);
}

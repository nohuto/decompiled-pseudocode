/*
 * XREFs of ?ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@4@1@Z @ 0x18016ACA0
 * Callers:
 *     ?TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2@Z @ 0x18016F8BC (-TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_J.c)
 *     ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x18016FEA0 (-UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x18004A65B (sqrtf_0.c)
 *     ?XMMatrixRotationQuaternion@DirectX@@YQ?AUXMMATRIX@1@T__m128@@@Z @ 0x1800C6AE8 (-XMMatrixRotationQuaternion@DirectX@@YQ-AUXMMATRIX@1@T__m128@@@Z.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800DA494 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1800DD0D8 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 *     ?XMQuaternionRotationMatrix@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x1800E1EA8 (-XMQuaternionRotationMatrix@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 *     ??$ControllerIsFarFromHeadChanged@AEAKAEAKAEA_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0AEA_N@Z @ 0x180168168 (--$ControllerIsFarFromHeadChanged@AEAKAEAKAEA_N@SpatialInteractionTrace@SpatialInteractionDevice.c)
 *     _lambda_dd13b2336fcec22e7e4908217f5c08fb_::operator() @ 0x18016A290 (_lambda_dd13b2336fcec22e7e4908217f5c08fb_--operator().c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ComputeControllerPoses(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a3,
        __m128 *a4,
        __m128 *a5)
{
  int v6; // r14d
  __m128 v7; // xmm0
  int v8; // r12d
  __m128 v9; // xmm3
  char v10; // si
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  __m128 v16; // xmm1
  int v17; // r15d
  char v18; // r14
  __m128i v19; // xmm9
  __m128 v20; // xmm10
  char v21; // r12
  __m128 v22; // xmm8
  __m128 v23; // xmm7
  __m128 v24; // xmm6
  __m128 v25; // xmm8
  __m128 v26; // xmm6
  __m128 v27; // xmm3
  __m128 v28; // xmm7
  __m128i v29; // xmm3
  __m128 v30; // xmm7
  __m128 v31; // xmm9
  double v32; // xmm15_8
  __m128 v33; // xmm3
  __m128 v34; // xmm14
  __m128 v35; // xmm1
  __m128 v36; // xmm13
  __m128 v37; // xmm10
  __m128 v38; // xmm2
  __m128 v39; // xmm8
  __m128 v40; // xmm3
  __m128 v41; // xmm0
  __m128 v42; // xmm6
  __m128 v43; // xmm0
  __m128 v44; // xmm11
  __m128 v45; // xmm10
  __m128 v46; // xmm4
  __m128 v47; // xmm11
  __m128 v48; // xmm6
  __m128 v49; // xmm7
  double v50; // xmm0_8
  __m128 v51; // xmm0
  __m128 v52; // xmm4
  __m128 v53; // xmm3
  __m128 v54; // xmm12
  __m128 v55; // xmm2
  __m128 v56; // xmm0
  __m128 v57; // xmm1
  __m128 v58; // xmm0
  __m128 v59; // xmm1
  __m128 v60; // xmm2
  __m128 v61; // xmm3
  bool v62; // zf
  char v63; // al
  __m128 v64; // xmm0
  __m128 v65; // xmm8
  __m128 v66; // xmm6
  double v67; // xmm0_8
  double v68; // xmm0_8
  double v69; // xmm15_8
  __int128 v70; // xmm0
  __m128 v71; // xmm6
  double v72; // xmm0_8
  double v73; // xmm10_8
  __m128 v74; // xmm6
  __m128 v75; // xmm7
  __m128 v76; // xmm8
  __m128 v77; // xmm9
  double v78; // xmm0_8
  char v79; // cl
  __m128 v80; // xmm0
  __m128 v81; // xmm6
  double v82; // xmm1_8
  double v83; // xmm2_8
  char v84; // cl
  char v85; // cl
  float v86; // xmm0_4
  bool *v87; // r8
  __m128 v88; // [rsp+38h] [rbp-D0h] BYREF
  int v89; // [rsp+48h] [rbp-C0h]
  __m128 v90; // [rsp+58h] [rbp-B0h]
  __int128 v91; // [rsp+68h] [rbp-A0h]
  __m128 v92; // [rsp+78h] [rbp-90h]
  __m128 v93; // [rsp+88h] [rbp-80h]
  __m128 v94; // [rsp+98h] [rbp-70h]
  __m128 v95; // [rsp+A8h] [rbp-60h]
  __m128 v96; // [rsp+B8h] [rbp-50h]
  __m128 v97; // [rsp+C8h] [rbp-40h]
  __m128 v98; // [rsp+D8h] [rbp-30h] BYREF
  __m128 v99; // [rsp+E8h] [rbp-20h]
  __m128 v100; // [rsp+F8h] [rbp-10h]
  __m128 v101; // [rsp+108h] [rbp+0h]
  _OWORD v102[4]; // [rsp+118h] [rbp+10h] BYREF

  v6 = *((_DWORD *)a3 + 4);
  v7 = *(__m128 *)((char *)a2 + 36);
  v8 = *((_DWORD *)a2 + 4);
  v9 = *(__m128 *)((char *)a2 + 68);
  v10 = 1;
  v11 = *(__m128 *)((char *)a2 + 52);
  v89 = v8 & 2;
  v12 = _mm_shuffle_ps(v11, v7, 244);
  v13 = _mm_and_ps(_mm_shuffle_ps(v11, v9, 14), DirectX::g_XMMask3);
  v16 = _mm_and_ps(_mm_shuffle_ps(v12, v12, 82), DirectX::g_XMMask3);
  v17 = v6 & 2;
  v18 = v6 & 1;
  v19 = _mm_or_si128(_mm_srli_si128((__m128i)v9, 4), DirectX::g_XMIdentityR3);
  v20 = DirectX::XMMatrixInverse(0LL, *(double *)v16.m128_u64, *(double *)v13.m128_u64, *(double *)v19.m128i_i64);
  v21 = v8 & 1;
  if ( !v21 )
    v19 = (__m128i)xmmword_180207AB8;
  v22 = *(__m128 *)((char *)a3 + 36);
  v23 = *(__m128 *)((char *)a3 + 52);
  v24 = _mm_shuffle_ps(v23, v22, 244);
  v25 = _mm_and_ps(v22, DirectX::g_XMMask3);
  v26 = _mm_and_ps(_mm_shuffle_ps(v24, v24, 82), DirectX::g_XMMask3);
  v27 = *(__m128 *)((char *)a3 + 68);
  v28 = _mm_and_ps(_mm_shuffle_ps(v23, v27, 14), DirectX::g_XMMask3);
  v29 = _mm_or_si128(_mm_srli_si128((__m128i)v27, 4), DirectX::g_XMIdentityR3);
  if ( !v18 )
    v29 = (__m128i)xmmword_180207AB8;
  if ( (!v17 || !v18) && (*((_BYTE *)this + 72) & 0x40) == 0 && *((_BYTE *)this + 904) && v17 )
  {
    v30 = *(__m128 *)((char *)this + 836);
    v31 = *(__m128 *)((char *)this + 852);
    *(_QWORD *)&v32 = _mm_unpacklo_ps(
                        _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 9), (__m128)*((unsigned int *)a3 + 11)),
                        _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 10), (__m128)0LL)).m128_u64[0];
    v33 = _mm_unpacklo_ps(*(__m128 *)((char *)this + 884), (__m128)0LL);
    v34 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 12), (__m128)*((unsigned int *)a3 + 14)),
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 13), (__m128)0LL));
    v35 = _mm_unpackhi_ps(*(__m128 *)((char *)this + 868), (__m128)0LL);
    v36 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 15), (__m128)*((unsigned int *)a3 + 17)),
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 16), (__m128)0LL));
    v37 = _mm_movelh_ps(*(__m128 *)((char *)this + 868), v35);
    v38 = (__m128)*((unsigned int *)this + 225);
    v39 = _mm_shuffle_ps(v30, v31, 14);
    v40 = _mm_add_ps(_mm_movehl_ps(v33, _mm_shuffle_ps(v38, v33, 16)), _mm_movehl_ps((__m128)0LL, v35));
    v41 = _mm_shuffle_ps(*(__m128 *)((char *)this + 884), v38, 78);
    v42 = _mm_shuffle_ps(v41, DirectX::g_XMIdentityR3, 238);
    v43 = _mm_shuffle_ps(v41, DirectX::g_XMIdentityR3, 68);
    v44 = _mm_shuffle_ps(v37, v40, 238);
    v45 = _mm_shuffle_ps(v37, v40, 68);
    v46 = _mm_shuffle_ps(v44, v42, 136);
    v47 = _mm_shuffle_ps(v44, v42, 221);
    v48 = *(__m128 *)((char *)this + 820);
    v98 = _mm_shuffle_ps(v45, v43, 136);
    v49 = _mm_shuffle_ps(v30, v48, 244);
    v99 = _mm_shuffle_ps(v45, v43, 221);
    v100 = v46;
    v101 = v47;
    *(_QWORD *)&v50 = DirectX::XMMatrixMultiply(v32, &v98).m128_u64[0];
    v98 = _mm_and_ps(v48, DirectX::g_XMMask3);
    v99 = _mm_and_ps(_mm_shuffle_ps(v49, v49, 82), DirectX::g_XMMask3);
    v100 = _mm_and_ps(v39, DirectX::g_XMMask3);
    v101 = (__m128)_mm_or_si128(_mm_srli_si128((__m128i)v31, 4), DirectX::g_XMIdentityR3);
    v51 = DirectX::XMMatrixMultiply(v50, &v98);
    v52 = (__m128)_xmm;
    v91 = _xmm;
    v53 = v36;
    v90 = v36;
    v88 = v34;
    v54 = v51;
    *((_BYTE *)this + 1180) = 1;
    v18 = 1;
LABEL_11:
    v55 = v88;
    goto LABEL_12;
  }
  v62 = (*((_BYTE *)this + 72) & 0x40) == 0;
  *((_BYTE *)this + 1180) = 0;
  if ( !v62 )
  {
    v63 = *((_BYTE *)this + 1180);
    if ( (*((_BYTE *)a3 + 156) & 1) != 0 )
      v63 = 1;
    *((_BYTE *)this + 1180) = v63;
  }
  v99 = v16;
  v100 = v13;
  v98 = v20;
  v101 = (__m128)v19;
  v64 = DirectX::XMMatrixMultiply(*(double *)v25.m128_u64, &v98);
  v91 = (__int128)v29;
  v52 = (__m128)v29;
  v90 = v28;
  v53 = v28;
  v88 = v26;
  v54 = v64;
  if ( !v17 )
    goto LABEL_11;
  v55 = v26;
  if ( v18 )
  {
    *(__m128 *)((char *)this + 820) = _mm_shuffle_ps(v64, _mm_shuffle_ps(v26, v64, 160), 36);
    *(__m128 *)((char *)this + 836) = _mm_shuffle_ps(v26, v28, 73);
    *(__m128 *)((char *)this + 852) = _mm_shuffle_ps(_mm_shuffle_ps(v28, v52, 10), v52, 152);
    *(__m128 *)((char *)this + 868) = _mm_shuffle_ps(v25, _mm_shuffle_ps(v25, v26, 10), 132);
    *(__m128 *)((char *)this + 884) = _mm_shuffle_ps(v26, v28, 73);
    *((_DWORD *)this + 225) = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
    *((_BYTE *)this + 904) = 1;
  }
LABEL_12:
  v56 = *a4;
  v99 = a4[1];
  v57 = a4[3];
  v98 = v56;
  v58 = a4[2];
  v101 = v57;
  v59 = v55;
  v60 = v53;
  v100 = v58;
  v61 = v52;
  v94 = v52;
  v93 = v60;
  v92 = v59;
  v102[0] = DirectX::XMMatrixMultiply(*(double *)v54.m128_u64, &v98);
  v102[1] = v59;
  v102[2] = v60;
  v102[3] = v94;
  if ( !v21 || !v89 || !v18 )
    v10 = 0;
  v65 = _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3);
  v66 = _mm_or_ps(
          _mm_and_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 508), (__m128)*((unsigned int *)this + 129)),
            DirectX::g_XMMask3),
          v65);
  *(_QWORD *)&v67 = DirectX::XMMatrixRotationQuaternion(*((double *)this + 65)).m128_u64[0];
  v98 = (__m128)DirectX::g_XMIdentityR0;
  v99 = (__m128)DirectX::g_XMIdentityR1;
  v100 = (__m128)DirectX::g_XMIdentityR2;
  v101 = v66;
  *(_QWORD *)&v68 = DirectX::XMMatrixMultiply(v67, &v98).m128_u64[0];
  v98 = (__m128)v102[0];
  v99 = v59;
  v100 = v60;
  v101 = v61;
  *(_QWORD *)&v69 = DirectX::XMMatrixMultiply(v68, &v98).m128_u64[0];
  v70 = *(_OWORD *)((char *)this + 552);
  v71 = _mm_and_ps(
          _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 540), (__m128)*((unsigned int *)this + 137)),
          DirectX::g_XMMask3);
  v97 = v61;
  v96 = v60;
  v95 = v59;
  *(_QWORD *)&v72 = DirectX::XMMatrixRotationQuaternion(*(double *)&v70).m128_u64[0];
  v98 = (__m128)DirectX::g_XMIdentityR0;
  v99 = (__m128)DirectX::g_XMIdentityR1;
  v100 = (__m128)DirectX::g_XMIdentityR2;
  v101 = _mm_or_ps(v71, v65);
  *(_QWORD *)&v73 = DirectX::XMMatrixMultiply(v72, &v98).m128_u64[0];
  v98 = v54;
  v74 = *a5;
  v75 = a5[1];
  v76 = a5[2];
  v77 = a5[3];
  v99 = v88;
  v101 = (__m128)v91;
  v100 = v90;
  *(_QWORD *)&v78 = DirectX::XMMatrixMultiply(v73, &v98).m128_u64[0];
  v98 = v74;
  v99 = v75;
  v100 = v76;
  v101 = v77;
  v74.m128_u64[0] = DirectX::XMMatrixMultiply(v78, &v98).m128_u64[0];
  v98 = (__m128)v102[0];
  v99 = v92;
  v100 = v93;
  v101 = v94;
  v77.m128_u64[0] = DirectX::XMMatrixMultiply(v73, &v98).m128_u64[0];
  *(__m128 *)((char *)this + 1148) = DirectX::XMQuaternionRotationMatrix(
                                       *(double *)v74.m128_u64,
                                       *(double *)v59.m128_u64,
                                       *(double *)v60.m128_u64);
  *((_DWORD *)this + 291) = v61.m128_i32[0];
  *((_DWORD *)this + 292) = _mm_shuffle_ps(v61, v61, 85).m128_u32[0];
  *((_DWORD *)this + 293) = _mm_shuffle_ps(v61, v61, 170).m128_u32[0];
  *((_BYTE *)this + 1177) = v79;
  *((_BYTE *)this + 1176) = v10;
  v80 = DirectX::XMQuaternionRotationMatrix(*(double *)v77.m128_u64, *(double *)v59.m128_u64, *(double *)v60.m128_u64);
  v81 = v97;
  v82 = *(double *)v95.m128_u64;
  v83 = *(double *)v96.m128_u64;
  *((__m128 *)this + 66) = v80;
  *((_DWORD *)this + 268) = v61.m128_i32[0];
  *((_DWORD *)this + 269) = _mm_shuffle_ps(v61, v61, 85).m128_u32[0];
  *((_DWORD *)this + 270) = _mm_shuffle_ps(v61, v61, 170).m128_u32[0];
  *((_BYTE *)this + 1085) = v84;
  *((_BYTE *)this + 1084) = v10;
  *((__m128 *)this + 64) = DirectX::XMQuaternionRotationMatrix(v69, v82, v83);
  *((_DWORD *)this + 260) = v81.m128_i32[0];
  v88.m128_u64[1] = (unsigned __int64)v102;
  *((_DWORD *)this + 261) = _mm_shuffle_ps(v81, v81, 85).m128_u32[0];
  *((_DWORD *)this + 262) = _mm_shuffle_ps(v81, v81, 170).m128_u32[0];
  *((_BYTE *)this + 1053) = v85;
  *((_BYTE *)this + 1052) = v10;
  v88.m128_u64[0] = (unsigned __int64)a3;
  lambda_dd13b2336fcec22e7e4908217f5c08fb_::operator()(
    &v88,
    (bool *)this + 1124,
    (_DWORD *)this + 272,
    4,
    (unsigned __int64 *)((char *)a3 + 84));
  lambda_dd13b2336fcec22e7e4908217f5c08fb_::operator()(
    &v88,
    (bool *)this + 1125,
    (_DWORD *)this + 275,
    16,
    (unsigned __int64 *)a3 + 12);
  lambda_dd13b2336fcec22e7e4908217f5c08fb_::operator()(
    &v88,
    (bool *)this + 1126,
    (_DWORD *)this + 278,
    128,
    (unsigned __int64 *)a3 + 18);
  if ( *((_BYTE *)this + 1176) )
  {
    v86 = sqrtf_0(
            (float)((float)(*((float *)this + 291) * *((float *)this + 291))
                  + (float)(*((float *)this + 292) * *((float *)this + 292)))
          + (float)(*((float *)this + 293) * *((float *)this + 293)));
    v87 = (bool *)this + 1185;
    if ( v86 > 1.5 != *((_BYTE *)this + 1185) )
    {
      *v87 = v86 > 1.5;
      SpatialInteractionDevices::SpatialInteractionTrace::ControllerIsFarFromHeadChanged<unsigned long &,unsigned long &,bool &>(
        (unsigned int *)this + 2,
        (unsigned int *)this + 3,
        v87);
    }
  }
}

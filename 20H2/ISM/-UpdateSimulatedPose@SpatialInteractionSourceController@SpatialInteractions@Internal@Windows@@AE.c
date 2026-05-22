/*
 * XREFs of ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x18016FE10
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x18016D590 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?XMMatrixRotationQuaternion@DirectX@@YQ?AUXMMATRIX@1@T__m128@@@Z @ 0x1800C6A58 (-XMMatrixRotationQuaternion@DirectX@@YQ-AUXMMATRIX@1@T__m128@@@Z.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800DA404 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?XMMatrixRTInverse@DirectX@@YQ?AUXMMATRIX@1@U21@@Z @ 0x180166A40 (-XMMatrixRTInverse@DirectX@@YQ-AUXMMATRIX@1@U21@@Z.c)
 *     ?ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@4@1@Z @ 0x18016AC10 (-ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateSimulatedPose(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        __int64 a2,
        const struct SpatialInteractionDevices::PoseData *a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a4,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a5,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a6)
{
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v12; // xmm7
  __m128 v13; // xmm6
  int v14; // eax
  __m128 v15; // xmm10
  double v16; // xmm14_8
  __m128 v17; // xmm15
  __m128 v18; // xmm10
  unsigned __int64 v19; // xmm0_8
  int v20; // eax
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128i v23; // xmm3
  double v24; // xmm0_8
  __m128 v25; // xmm5
  __m128 v26; // xmm6
  __m128 v27; // xmm7
  __m128 v28; // xmm6
  __m128 v29; // xmm5
  __m128i v30; // xmm4
  unsigned __int8 v31; // dl
  __m128 v32; // xmm0
  __m128 v33; // xmm6
  double v34; // xmm0_8
  __m128 v35; // xmm0
  __m128 *v36; // r8
  __m128 v37; // [rsp+38h] [rbp-D0h]
  __m128 v38; // [rsp+48h] [rbp-C0h]
  __m128 v39; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v40; // [rsp+68h] [rbp-A0h]
  __m128 v41; // [rsp+78h] [rbp-90h]
  __m128i v42; // [rsp+88h] [rbp-80h]
  _QWORD v43[2]; // [rsp+98h] [rbp-70h] BYREF
  int v44; // [rsp+A8h] [rbp-60h]
  __int128 v45; // [rsp+BCh] [rbp-4Ch]
  __int128 v46; // [rsp+CCh] [rbp-3Ch]
  __int128 v47; // [rsp+DCh] [rbp-2Ch]
  _QWORD v48[2]; // [rsp+138h] [rbp+30h] BYREF
  int v49; // [rsp+148h] [rbp+40h]
  __m128 v50; // [rsp+15Ch] [rbp+54h]
  __m128 v51; // [rsp+16Ch] [rbp+64h]
  __m128 v52; // [rsp+17Ch] [rbp+74h]
  wil::details::in1diag3 *retaddr; // [rsp+2B0h] [rbp+1A8h]

  if ( a4 )
  {
    v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, _QWORD, _QWORD *))(*(_QWORD *)a4 + 32LL))(
            a4,
            a2,
            0LL,
            v43);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        978LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)(unsigned int)v14);
    v12 = (__m128)v45;
    v13 = (__m128)v46;
  }
  else
  {
    memset_0(v43, 0, 0xA0uLL);
    v43[0] = a2;
    v12 = (__m128)xmmword_1801C6330;
    v44 = 3;
    v13 = (__m128)xmmword_1801C6340;
    v47 = xmmword_1801C6350;
    v45 = xmmword_1801C6330;
    v46 = xmmword_1801C6340;
  }
  memset_0(v48, 0, 0xA0uLL);
  v49 = 0;
  v15 = (__m128)DirectX::g_XMIdentityR3;
  v16 = DirectX::g_XMIdentityR0;
  v17 = (__m128)DirectX::g_XMIdentityR1;
  v48[0] = a2;
  v37 = (__m128)DirectX::g_XMIdentityR2;
  v38 = (__m128)DirectX::g_XMIdentityR3;
  if ( *((_BYTE *)a3 + 28) )
  {
    v18 = _mm_and_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)a3, (__m128)*((unsigned int *)a3 + 2)),
            DirectX::g_XMMask3);
    v49 = 1;
    v7 = _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3);
    v15 = _mm_or_ps(v18, v7);
  }
  if ( *((_BYTE *)a3 + 29) )
  {
    v19 = DirectX::XMMatrixRotationQuaternion(*(double *)((char *)a3 + 12)).m128_u64[0];
    v38 = v8;
    v49 = v20 | 2;
    v17 = v6;
    v37 = v7;
    v16 = *(double *)&v19;
  }
  v21 = *((__m128 *)a6 + 1);
  v22 = *((__m128 *)a6 + 2);
  v23 = *((__m128i *)a6 + 3);
  *(_QWORD *)&v24 = DirectX::XMMatrixRTInverse(*(double *)a6, *(double *)v21.m128_u64, *(double *)v22.m128_u64).m128_u64[0];
  v25 = v13;
  v26 = _mm_shuffle_ps(v13, v12, 244);
  v27 = _mm_and_ps(v12, DirectX::g_XMMask3);
  v28 = _mm_and_ps(_mm_shuffle_ps(v26, v26, 82), DirectX::g_XMMask3);
  v29 = _mm_and_ps(_mm_shuffle_ps(v25, (__m128)v47, 14), DirectX::g_XMMask3);
  v30 = _mm_or_si128(_mm_srli_si128((__m128i)v47, 4), DirectX::g_XMIdentityR3);
  if ( (v31 & (unsigned __int8)v44) == 0 )
    v30 = (__m128i)xmmword_180207AB8;
  v39 = v27;
  v40 = v28;
  v41 = v29;
  v42 = v30;
  v32 = DirectX::XMMatrixMultiply(v24, &v39);
  v39 = (__m128)DirectX::g_XMIdentityR0;
  v40 = (__m128)DirectX::g_XMIdentityR1;
  v33 = v32;
  v41 = (__m128)DirectX::g_XMIdentityR2;
  v42 = (__m128i)v15;
  *(_QWORD *)&v34 = DirectX::XMMatrixMultiply(v16, &v39).m128_u64[0];
  v39 = v33;
  v40 = v21;
  v41 = v22;
  v42 = v23;
  v35 = DirectX::XMMatrixMultiply(v34, &v39);
  v50 = _mm_shuffle_ps(v35, _mm_shuffle_ps(v17, v35, 160), 36);
  v52 = _mm_shuffle_ps(_mm_shuffle_ps(v37, v38, 10), v38, 152);
  v51 = _mm_shuffle_ps(v17, v37, 73);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ComputeControllerPoses(
    this,
    (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v43,
    (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v48,
    (__m128 *)a5,
    v36);
}

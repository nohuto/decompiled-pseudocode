/*
 * XREFs of ?Parse@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800DBD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800DA404 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ??$SpatialInteractionEyeGaze_CombinedGaze@AEAMAEAMAEAMAEAMAEAMAEAM@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAXAEAM00000@Z @ 0x1800DAF34 (--$SpatialInteractionEyeGaze_CombinedGaze@AEAMAEAMAEAMAEAMAEAMAEAM@SpatialInteractionTraceContin.c)
 *     ?UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J@Z @ 0x1800DCCB0 (-UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1800DD048 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::Parse(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject *this,
        char *a2,
        __int64 a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a4,
        __int64 a5,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a6,
        __m128 *a7,
        bool *a8,
        enum MPCAugmentedInputGestureType *a9,
        bool *a10,
        bool *a11)
{
  char v13; // al
  __int64 result; // rax
  char v15; // di
  int v16; // eax
  unsigned int v17; // esi
  __m128 v18; // xmm5
  char v19; // r8
  __m128 v20; // xmm6
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  __m128 v23; // xmm1
  __m128 v24; // xmm4
  __int64 v25; // rcx
  int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // rax
  int v29; // r10d
  __int64 v30; // rdx
  char v31; // di
  __m128 v32; // xmm3
  __m128 v33; // xmm2
  __m128 v34; // xmm5
  __m128 v35; // xmm0
  __m128 v36; // xmm1
  __m128 v37; // xmm6
  __m128 v38; // xmm5
  __m128 v39; // xmm1
  __m128 v40; // xmm2
  __m128 v41; // xmm3
  double v42; // xmm0_8
  __m128 v43; // xmm5
  __m128 v44; // xmm4
  __m128 v45; // xmm5
  __m128 v46; // xmm8
  __m128 v47; // xmm9
  __m128 v48; // xmm6
  __m128 v49; // xmm0
  __m128 v50; // xmm4
  __m128 v51; // xmm6
  __m128 v52; // xmm2
  __m128 v53; // xmm4
  __m128 v54; // xmm3
  __m128 v55[4]; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v56[4]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v57[16]; // [rsp+B8h] [rbp-50h] BYREF
  int v58; // [rsp+C8h] [rbp-40h]
  __m128 v59; // [rsp+DCh] [rbp-2Ch]
  __m128 v60; // [rsp+ECh] [rbp-1Ch]
  __m128 v61; // [rsp+FCh] [rbp-Ch]
  _BYTE v62[16]; // [rsp+158h] [rbp+50h] BYREF
  int v63; // [rsp+168h] [rbp+60h]
  __m128 v64; // [rsp+17Ch] [rbp+74h]
  __m128 v65; // [rsp+18Ch] [rbp+84h]
  __m128 v66; // [rsp+19Ch] [rbp+94h]
  wil::details::in1diag3 *retaddr; // [rsp+260h] [rbp+158h]

  *a10 = 0;
  v13 = *((_BYTE *)this + 105);
  *((_BYTE *)this + 105) = 0;
  *a11 = v13 != 0;
  *(_DWORD *)a9 = 0;
  *a8 = 0;
  if ( *((_QWORD *)this + 11) )
  {
    if ( a4 )
      goto LABEL_3;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( a4 )
    goto LABEL_10;
LABEL_3:
  if ( ++*((_DWORD *)this + 328) >= 0x78u )
  {
    *((_DWORD *)this + 328) = 0;
    *((_BYTE *)this + 105) = 1;
  }
  result = Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::UpdateState(this, a5);
  if ( (int)result >= 0 )
  {
    v15 = 3;
    if ( a4 )
    {
      v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, _QWORD, _BYTE *))(*(_QWORD *)a4 + 32LL))(
              a4,
              a5,
              0LL,
              v57);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBE,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
          (const char *)(unsigned int)v16);
        return v17;
      }
      v18 = v60;
      v19 = v58;
      v20 = v59;
      v21 = (__m128)DirectX::g_XMIdentityR0;
      v22 = (__m128)DirectX::g_XMIdentityR1;
      v23 = (__m128)DirectX::g_XMIdentityR2;
      v24 = (__m128)DirectX::g_XMIdentityR3;
    }
    else
    {
      v22 = (__m128)DirectX::g_XMIdentityR1;
      v19 = 3;
      v21 = (__m128)DirectX::g_XMIdentityR0;
      v23 = (__m128)DirectX::g_XMIdentityR2;
      v24 = (__m128)DirectX::g_XMIdentityR3;
      v20 = _mm_shuffle_ps(
              DirectX::g_XMIdentityR0,
              _mm_shuffle_ps(DirectX::g_XMIdentityR1, DirectX::g_XMIdentityR0, 160),
              36);
      v18 = _mm_shuffle_ps(DirectX::g_XMIdentityR1, DirectX::g_XMIdentityR2, 73);
      v61 = _mm_shuffle_ps(
              _mm_shuffle_ps(DirectX::g_XMIdentityR2, DirectX::g_XMIdentityR3, 10),
              DirectX::g_XMIdentityR3,
              152);
      v58 = 3;
      v59 = v20;
      v60 = v18;
    }
    v25 = *((_QWORD *)this + 11);
    if ( v25 )
    {
      v26 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v25 + 32LL))(v25, a5, 0LL, v62);
      v27 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC8,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
          (const char *)(unsigned int)v26);
        return v27;
      }
      v18 = v60;
      v19 = v58;
      v20 = v59;
      v15 = v63;
    }
    else
    {
      v63 = 3;
      v64 = _mm_shuffle_ps(v21, _mm_shuffle_ps(v22, v21, 160), 36);
      v66 = _mm_shuffle_ps(_mm_shuffle_ps(v23, v24, 10), v24, 152);
      v65 = _mm_shuffle_ps(v22, v23, 73);
    }
    *((_BYTE *)this + 1249) = *((_BYTE *)this + 1212);
    v28 = 1000000LL * *((_QWORD *)this + 147);
    *((_BYTE *)this + 1248) = 0;
    v29 = v15 & 2;
    v30 = v28 % qword_180208308;
    v31 = v15 & 1;
    *((_QWORD *)this + 152) = 10 * (v28 / qword_180208308);
    if ( (v19 & 2) != 0 && (v19 & 1) != 0 && v29 && v31 )
    {
      if ( *((_BYTE *)this + 1184) )
      {
        v32 = v61;
        *((_BYTE *)this + 1248) = 1;
        v33 = v18;
        v34 = _mm_shuffle_ps(v18, v20, 244);
        v35.m128_u64[1] = _mm_and_ps(v20, DirectX::g_XMMask3).m128_u64[1];
        v36 = _mm_and_ps(_mm_shuffle_ps(v34, v34, 82), DirectX::g_XMMask3);
        *(double *)v35.m128_u64 = DirectX::XMMatrixInverse(0LL, v30);
        v55[1] = v36;
        v55[3] = (__m128)_mm_or_si128(_mm_srli_si128((__m128i)v32, 4), DirectX::g_XMIdentityR3);
        v37 = _mm_shuffle_ps(v65, v64, 244);
        v38 = _mm_and_ps(_mm_shuffle_ps(v33, v32, 14), DirectX::g_XMMask3);
        v39 = _mm_and_ps(_mm_shuffle_ps(v37, v37, 82), DirectX::g_XMMask3);
        v40 = _mm_and_ps(DirectX::g_XMMask3, _mm_shuffle_ps(v65, v66, 14));
        v55[0] = v35;
        v41 = (__m128)_mm_or_si128(_mm_srli_si128((__m128i)v66, 4), DirectX::g_XMIdentityR3);
        v55[2] = v38;
        *(_QWORD *)&v42 = DirectX::XMMatrixMultiply(COERCE_DOUBLE(v64.m128_u64[0] & DirectX::g_XMMask3), v55).m128_u64[0];
        v43 = a7[1];
        v56[0] = *a7;
        v44 = a7[2];
        v56[1] = v43;
        v45 = a7[3];
        v56[2] = v44;
        v56[3] = v45;
        v46 = DirectX::XMMatrixMultiply(v42, v56);
        v47 = v40;
        v48 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 1188), (__m128)*((unsigned int *)this + 299));
        v49 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v46);
        v50 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 85), v39);
        v51 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 170), v40);
        v52 = _mm_movelh_ps((__m128)*((unsigned __int64 *)this + 150), (__m128)*((unsigned int *)this + 302));
        v53 = _mm_add_ps(_mm_add_ps(_mm_add_ps(v50, v49), v51), v41);
        *((_DWORD *)this + 306) = v53.m128_i32[0];
        v54 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v52, v52, 85), v39), _mm_mul_ps(_mm_shuffle_ps(v52, v52, 0), v46)),
                _mm_mul_ps(_mm_shuffle_ps(v52, v52, 170), v47));
        *((_DWORD *)this + 307) = _mm_shuffle_ps(v53, v53, 85).m128_u32[0];
        *((_DWORD *)this + 308) = _mm_shuffle_ps(v53, v53, 170).m128_u32[0];
        *((_DWORD *)this + 309) = v54.m128_i32[0];
        *((_DWORD *)this + 310) = _mm_shuffle_ps(v54, v54, 85).m128_u32[0];
        *((_DWORD *)this + 311) = _mm_shuffle_ps(v54, v54, 170).m128_u32[0];
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::SpatialInteractionEyeGaze_CombinedGaze<float &,float &,float &,float &,float &,float &>(
          (float *)this + 306,
          (float *)this + 307,
          (float *)this + 308,
          (float *)this + 309,
          (float *)this + 310,
          (float *)this + 311);
      }
    }
    return 0LL;
  }
  return result;
}

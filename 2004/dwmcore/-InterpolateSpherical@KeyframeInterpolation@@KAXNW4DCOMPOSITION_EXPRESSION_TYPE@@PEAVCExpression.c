/*
 * XREFs of ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802062F4
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800298B8 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 * Callees:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800C0388 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800C3B98 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800D78C4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     _o_acos_0 @ 0x1800E3A14 (_o_acos_0.c)
 *     _o_sin_0 @ 0x1800E3A74 (_o_sin_0.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x18021D16C (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x18021D578 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall KeyframeInterpolation::InterpolateSpherical(double a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r14
  float v10; // xmm8_4
  __m128 v11; // xmm4
  __m128 v12; // xmm3
  float v13; // xmm5_4
  float v14; // xmm0_4
  double v15; // xmm0_8
  __int128 v16; // xmm1
  float v17; // xmm2_4
  __int32 v18; // eax
  unsigned __int64 v19; // xmm0_8
  int v20; // eax
  float v21; // xmm0_4
  unsigned __int64 v22; // xmm1_8
  float v23; // xmm1_4
  double v24; // xmm9_8
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm10_4
  float v28; // xmm7_4
  float v29; // xmm3_4
  __int64 i; // rax
  __int64 j; // rax
  __int64 k; // rax
  float v33; // xmm3_4
  unsigned int v34; // xmm1_4
  unsigned int v35; // xmm0_4
  float v36; // xmm3_4
  __m128 v37; // xmm2
  float v38; // xmm1_4
  unsigned int v39; // xmm1_4
  float v40; // xmm0_4
  __m128 v41; // xmm4
  unsigned int v42; // xmm0_4
  float v43; // xmm7_4
  float v44; // xmm1_4
  float v45; // xmm3_4
  __m128 v46; // xmm2
  float v47; // xmm1_4
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm0_4
  float v51; // xmm3_4
  float v52; // xmm1_4
  float v53; // xmm7_4
  __int64 result; // rax
  __m128 v55; // [rsp+38h] [rbp-A1h] BYREF
  __int128 v56; // [rsp+48h] [rbp-91h] BYREF
  float v57; // [rsp+58h] [rbp-81h] BYREF
  float v58; // [rsp+5Ch] [rbp-7Dh]
  float v59; // [rsp+60h] [rbp-79h]
  float v60; // [rsp+64h] [rbp-75h]
  __int64 v61; // [rsp+98h] [rbp-41h]
  int v62; // [rsp+A0h] [rbp-39h]
  char v63; // [rsp+A4h] [rbp-35h]
  void *retaddr; // [rsp+130h] [rbp+57h]

  memset_0(&v57, 0, 0x40uLL);
  v9 = 0LL;
  v61 = 0LL;
  v10 = *(float *)&FLOAT_1_0;
  v62 = 18;
  v63 = 0;
  if ( a2 != 18 )
  {
    if ( a2 == 35 )
    {
      v22 = *(_QWORD *)a4;
      *(_QWORD *)&v56 = *(_QWORD *)a3;
      v55.m128_u64[0] = v22;
      D3DXVec2Normalize((struct D2DVector2 *)&v56, (const struct D2DVector2 *)&v56);
      D3DXVec2Normalize((struct D2DVector2 *)&v55, (const struct D2DVector2 *)&v55);
      v23 = (float)(*(float *)&v56 * v55.m128_f32[0]) + (float)(*((float *)&v56 + 1) * v55.m128_f32[1]);
      v21 = FLOAT_N1_0;
      if ( v23 >= -1.0 )
        v21 = fminf(1.0, v23);
    }
    else
    {
      switch ( a2 )
      {
        case '4':
          v18 = *(_DWORD *)(a3 + 8);
          v55.m128_u64[0] = *(_QWORD *)a3;
          v19 = *(_QWORD *)a4;
          v55.m128_i32[2] = v18;
          v20 = *(_DWORD *)(a4 + 8);
          *(_QWORD *)&v56 = v19;
          DWORD2(v56) = v20;
          D3DXVec3Normalize((struct D2DVector3 *)&v55, (const struct D2DVector3 *)&v55);
          D3DXVec3Normalize((struct D2DVector3 *)&v56, (const struct D2DVector3 *)&v56);
          v17 = (float)((float)(v55.m128_f32[1] * *((float *)&v56 + 1)) + (float)(*(float *)&v56 * v55.m128_f32[0]))
              + (float)(v55.m128_f32[2] * *((float *)&v56 + 2));
          break;
        case 'E':
          v16 = *(_OWORD *)a4;
          v55 = *(__m128 *)a3;
          v56 = v16;
          D3DXVec4Normalize((struct D2DVector4 *)&v55, (const struct D2DVector4 *)&v55);
          D3DXVec4Normalize((struct D2DVector4 *)&v56, (const struct D2DVector4 *)&v56);
          v17 = (float)((float)((float)(v55.m128_f32[0] * *(float *)&v56)
                              + (float)(v55.m128_f32[1] * *((float *)&v56 + 1)))
                      + (float)(v55.m128_f32[2] * *((float *)&v56 + 2)))
              + (float)(v55.m128_f32[3] * *((float *)&v56 + 3));
          break;
        case 'G':
          v11 = (__m128)_mm_loadu_si128((const __m128i *)a3);
          v12 = (__m128)_mm_loadu_si128((const __m128i *)a4);
          v10 = FLOAT_N1_0;
          v13 = (float)((float)((float)(v11.m128_f32[0] * v12.m128_f32[0])
                              + (float)(_mm_shuffle_ps(v11, v11, 85).m128_f32[0]
                                      * _mm_shuffle_ps(v12, v12, 85).m128_f32[0]))
                      + (float)(_mm_shuffle_ps(v11, v11, 170).m128_f32[0] * _mm_shuffle_ps(v12, v12, 170).m128_f32[0]))
              + (float)(_mm_shuffle_ps(v11, v11, 255).m128_f32[0] * _mm_shuffle_ps(v12, v12, 255).m128_f32[0]);
          if ( v13 >= -1.0 )
            v14 = fminf(1.0, v13);
          else
            v14 = FLOAT_N1_0;
          if ( v14 >= 0.0 )
            v10 = *(float *)&FLOAT_1_0;
          v15 = v14;
          goto LABEL_20;
        default:
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
      }
      v21 = FLOAT_N1_0;
      if ( v17 >= -1.0 )
        v21 = fminf(1.0, v17);
    }
    v15 = v21;
LABEL_20:
    v24 = o_acos_0(v15);
    goto LABEL_22;
  }
  v24 = 0.0;
LABEL_22:
  v25 = v24;
  if ( COERCE_FLOAT(LODWORD(v25) & _xmm) < 0.0000011920929 )
  {
    v26 = a1;
    KeyframeInterpolation::ExpressionValueLerp(a2, v26, a3, a4, (__int64)&v57);
    v9 = v61;
    goto LABEL_41;
  }
  v27 = o_sin_0(v24);
  v28 = o_sin_0(a1 * v24);
  v29 = o_sin_0((1.0 - a1) * v24);
  switch ( a2 )
  {
    case 18:
      v33 = (float)((float)((float)(v29 * *(float *)a3) * v10) + (float)(v28 * *(float *)a4)) / v27;
LABEL_39:
      v57 = v33;
      break;
    case 35:
      v62 = 35;
      v52 = (float)((float)(v28 * *(float *)a4) + (float)((float)(v29 * *(float *)a3) * v10)) * (float)(1.0 / v27);
      v53 = (float)((float)(v28 * *(float *)(a4 + 4)) + (float)((float)(v29 * *(float *)(a3 + 4)) * v10))
          * (float)(1.0 / v27);
      v57 = v52;
      v58 = v53;
      break;
    case 52:
      v62 = 52;
      v48 = v29 * *(float *)(a3 + 4);
      v49 = (float)((float)(v29 * *(float *)a3) * v10) + (float)(v28 * *(float *)a4);
      v50 = v28 * *(float *)(a4 + 4);
      v51 = (float)((float)(v29 * *(float *)(a3 + 8)) * v10) + (float)(v28 * *(float *)(a4 + 8));
      v57 = v49 * (float)(1.0 / v27);
      v59 = v51 * (float)(1.0 / v27);
      v58 = (float)((float)(v48 * v10) + v50) * (float)(1.0 / v27);
      break;
    case 69:
      v62 = 69;
      *(float *)&v34 = v29 * *(float *)(a3 + 4);
      v55.m128_f32[0] = v29 * *(float *)a3;
      *(float *)&v35 = v29 * *(float *)(a3 + 8);
      v36 = v29 * *(float *)(a3 + 12);
      *(unsigned __int64 *)((char *)v55.m128_u64 + 4) = __PAIR64__(v35, v34);
      v55.m128_f32[3] = v36;
      v37 = v55;
      v38 = _mm_shuffle_ps(v55, v55, 85).m128_f32[0];
      v55.m128_f32[0] = v55.m128_f32[0] * v10;
      v55.m128_f32[1] = v38 * v10;
      *(float *)&v39 = v28 * *(float *)(a4 + 4);
      v55.m128_f32[2] = _mm_shuffle_ps(v37, v37, 170).m128_f32[0] * v10;
      v40 = v28 * *(float *)a4;
      v55.m128_f32[3] = _mm_shuffle_ps(v37, v37, 255).m128_f32[0] * v10;
      v41 = v55;
      v55.m128_f32[0] = v40;
      *(float *)&v42 = v28 * *(float *)(a4 + 8);
      v43 = v28 * *(float *)(a4 + 12);
      *(unsigned __int64 *)((char *)v55.m128_u64 + 4) = __PAIR64__(v42, v39);
      v55.m128_f32[3] = v43;
      v44 = _mm_shuffle_ps(v55, v55, 85).m128_f32[0];
      v37.m128_f32[0] = _mm_shuffle_ps(v55, v55, 170).m128_f32[0];
      v45 = _mm_shuffle_ps(v55, v55, 255).m128_f32[0];
      v55.m128_f32[0] = v55.m128_f32[0] + v41.m128_f32[0];
      v55.m128_f32[1] = v44 + _mm_shuffle_ps(v41, v41, 85).m128_f32[0];
      v55.m128_f32[2] = v37.m128_f32[0] + _mm_shuffle_ps(v41, v41, 170).m128_f32[0];
      v55.m128_f32[3] = v45 + _mm_shuffle_ps(v41, v41, 255).m128_f32[0];
      v46 = v55;
      v47 = _mm_shuffle_ps(v55, v55, 85).m128_f32[0];
      v55.m128_f32[0] = v55.m128_f32[0] * (float)(1.0 / v27);
      v55.m128_f32[2] = _mm_shuffle_ps(v46, v46, 170).m128_f32[0] * (float)(1.0 / v27);
      v55.m128_f32[1] = v47 * (float)(1.0 / v27);
      v55.m128_f32[3] = _mm_shuffle_ps(v46, v46, 255).m128_f32[0] * (float)(1.0 / v27);
      v57 = v55.m128_f32[0];
      LODWORD(v58) = _mm_shuffle_ps(v55, v55, 85).m128_u32[0];
      LODWORD(v60) = _mm_shuffle_ps(v55, v55, 255).m128_u32[0];
      LODWORD(v59) = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
      break;
    default:
      for ( i = 0LL; i < 4; ++i )
        v55.m128_f32[i] = v29 * *(float *)(a3 + 4 * i);
      for ( j = 0LL; j < 4; ++j )
        *(float *)((char *)&v56 + j * 4) = v10 * v55.m128_f32[j];
      for ( k = 0LL; k < 4; ++k )
        v55.m128_f32[k] = v28 * *(float *)(a4 + 4 * k);
      v62 = 71;
      v58 = (float)(v55.m128_f32[1] + *((float *)&v56 + 1)) * (float)(1.0 / v27);
      v59 = (float)(v55.m128_f32[2] + *((float *)&v56 + 2)) * (float)(1.0 / v27);
      v60 = (float)(v55.m128_f32[3] + *((float *)&v56 + 3)) * (float)(1.0 / v27);
      v33 = (float)(v55.m128_f32[0] + *(float *)&v56) * (float)(1.0 / v27);
      goto LABEL_39;
  }
  v63 = 1;
LABEL_41:
  result = CExpressionValue::operator=(a5, (__int64)&v57);
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return result;
}

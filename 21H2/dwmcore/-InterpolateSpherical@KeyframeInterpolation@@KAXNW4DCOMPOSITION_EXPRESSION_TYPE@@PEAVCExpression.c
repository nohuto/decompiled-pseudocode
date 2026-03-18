/*
 * XREFs of ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802577B0
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18001BC8C (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800207F8 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800D6B1C (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     _o_acos_0 @ 0x180101874 (_o_acos_0.c)
 *     _o_sin_0 @ 0x180101958 (_o_sin_0.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x18026E3B0 (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x18026E938 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall KeyframeInterpolation::InterpolateSpherical(double a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r14
  float v10; // xmm8_4
  __m128 v11; // xmm3
  __m128 v12; // xmm5
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
  float v32; // xmm3_4
  unsigned int v33; // xmm1_4
  unsigned int v34; // xmm0_4
  float v35; // xmm3_4
  __m128 v36; // xmm2
  float v37; // xmm1_4
  unsigned int v38; // xmm1_4
  float v39; // xmm0_4
  __m128 v40; // xmm4
  unsigned int v41; // xmm0_4
  float v42; // xmm7_4
  float v43; // xmm1_4
  float v44; // xmm3_4
  __m128 v45; // xmm2
  float v46; // xmm1_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm3_4
  float v51; // xmm1_4
  float v52; // xmm7_4
  __m128 v54; // [rsp+38h] [rbp-A1h] BYREF
  __int128 v55; // [rsp+48h] [rbp-91h] BYREF
  float v56; // [rsp+58h] [rbp-81h] BYREF
  float v57; // [rsp+5Ch] [rbp-7Dh]
  float v58; // [rsp+60h] [rbp-79h]
  float v59; // [rsp+64h] [rbp-75h]
  __int64 v60; // [rsp+98h] [rbp-41h] BYREF
  int v61; // [rsp+A0h] [rbp-39h]
  char v62; // [rsp+A4h] [rbp-35h]
  void *retaddr; // [rsp+130h] [rbp+57h]

  memset_0(&v56, 0, 0x40uLL);
  v9 = 0LL;
  v60 = 0LL;
  v10 = *(float *)&FLOAT_1_0;
  v61 = 18;
  v62 = 0;
  if ( a2 != 18 )
  {
    if ( a2 == 35 )
    {
      v22 = *(_QWORD *)a4;
      *(_QWORD *)&v55 = *(_QWORD *)a3;
      v54.m128_u64[0] = v22;
      D3DXVec2Normalize((struct D2DVector2 *)&v55, (const struct D2DVector2 *)&v55);
      D3DXVec2Normalize((struct D2DVector2 *)&v54, (const struct D2DVector2 *)&v54);
      v23 = (float)(*(float *)&v55 * v54.m128_f32[0]) + (float)(*((float *)&v55 + 1) * v54.m128_f32[1]);
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
          v54.m128_u64[0] = *(_QWORD *)a3;
          v19 = *(_QWORD *)a4;
          v54.m128_i32[2] = v18;
          v20 = *(_DWORD *)(a4 + 8);
          *(_QWORD *)&v55 = v19;
          DWORD2(v55) = v20;
          D3DXVec3Normalize((struct D2DVector3 *)&v54, (const struct D2DVector3 *)&v54);
          D3DXVec3Normalize((struct D2DVector3 *)&v55, (const struct D2DVector3 *)&v55);
          v17 = (float)((float)(v54.m128_f32[1] * *((float *)&v55 + 1)) + (float)(*(float *)&v55 * v54.m128_f32[0]))
              + (float)(v54.m128_f32[2] * *((float *)&v55 + 2));
          break;
        case 'E':
          v16 = *(_OWORD *)a4;
          v54 = *(__m128 *)a3;
          v55 = v16;
          D3DXVec4Normalize((struct D2DVector4 *)&v54, (const struct D2DVector4 *)&v54);
          D3DXVec4Normalize((struct D2DVector4 *)&v55, (const struct D2DVector4 *)&v55);
          v17 = (float)((float)((float)(v54.m128_f32[0] * *(float *)&v55)
                              + (float)(v54.m128_f32[1] * *((float *)&v55 + 1)))
                      + (float)(v54.m128_f32[2] * *((float *)&v55 + 2)))
              + (float)(v54.m128_f32[3] * *((float *)&v55 + 3));
          break;
        case 'G':
          v11 = (__m128)_mm_loadu_si128((const __m128i *)a4);
          v10 = FLOAT_N1_0;
          v12 = (__m128)_mm_loadu_si128((const __m128i *)a3);
          v13 = (float)((float)((float)(v12.m128_f32[0] * v11.m128_f32[0])
                              + (float)(_mm_shuffle_ps(v12, v12, 85).m128_f32[0]
                                      * _mm_shuffle_ps(v11, v11, 85).m128_f32[0]))
                      + (float)(_mm_shuffle_ps(v12, v12, 170).m128_f32[0] * _mm_shuffle_ps(v11, v11, 170).m128_f32[0]))
              + (float)(_mm_shuffle_ps(v12, v12, 255).m128_f32[0] * _mm_shuffle_ps(v11, v11, 255).m128_f32[0]);
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
  if ( COERCE_FLOAT(LODWORD(v25) & _xmm) >= 0.0000011920929 )
  {
    v27 = o_sin_0(v24);
    v28 = o_sin_0(a1 * v24);
    v29 = o_sin_0((1.0 - a1) * v24);
    if ( a2 != 18 )
    {
      switch ( a2 )
      {
        case '#':
          v61 = 35;
          v51 = (float)((float)(v28 * *(float *)a4) + (float)((float)(v29 * *(float *)a3) * v10)) * (float)(1.0 / v27);
          v52 = (float)((float)(v28 * *(float *)(a4 + 4)) + (float)((float)(v29 * *(float *)(a3 + 4)) * v10))
              * (float)(1.0 / v27);
          v56 = v51;
          v57 = v52;
          break;
        case '4':
          v61 = 52;
          v47 = v29 * *(float *)(a3 + 4);
          v48 = (float)((float)(v29 * *(float *)a3) * v10) + (float)(v28 * *(float *)a4);
          v49 = v28 * *(float *)(a4 + 4);
          v50 = (float)((float)(v29 * *(float *)(a3 + 8)) * v10) + (float)(v28 * *(float *)(a4 + 8));
          v56 = v48 * (float)(1.0 / v27);
          v58 = v50 * (float)(1.0 / v27);
          v57 = (float)((float)(v47 * v10) + v49) * (float)(1.0 / v27);
          break;
        case 'E':
          v61 = 69;
          *(float *)&v33 = v29 * *(float *)(a3 + 4);
          v54.m128_f32[0] = v29 * *(float *)a3;
          *(float *)&v34 = v29 * *(float *)(a3 + 8);
          v35 = v29 * *(float *)(a3 + 12);
          *(unsigned __int64 *)((char *)v54.m128_u64 + 4) = __PAIR64__(v34, v33);
          v54.m128_f32[3] = v35;
          v36 = v54;
          v37 = _mm_shuffle_ps(v54, v54, 85).m128_f32[0];
          v54.m128_f32[0] = v54.m128_f32[0] * v10;
          v54.m128_f32[1] = v37 * v10;
          *(float *)&v38 = v28 * *(float *)(a4 + 4);
          v54.m128_f32[2] = _mm_shuffle_ps(v36, v36, 170).m128_f32[0] * v10;
          v39 = v28 * *(float *)a4;
          v54.m128_f32[3] = _mm_shuffle_ps(v36, v36, 255).m128_f32[0] * v10;
          v40 = v54;
          v54.m128_f32[0] = v39;
          *(float *)&v41 = v28 * *(float *)(a4 + 8);
          v42 = v28 * *(float *)(a4 + 12);
          *(unsigned __int64 *)((char *)v54.m128_u64 + 4) = __PAIR64__(v41, v38);
          v54.m128_f32[3] = v42;
          v43 = _mm_shuffle_ps(v54, v54, 85).m128_f32[0];
          v36.m128_f32[0] = _mm_shuffle_ps(v54, v54, 170).m128_f32[0];
          v44 = _mm_shuffle_ps(v54, v54, 255).m128_f32[0];
          v54.m128_f32[0] = v54.m128_f32[0] + v40.m128_f32[0];
          v54.m128_f32[1] = v43 + _mm_shuffle_ps(v40, v40, 85).m128_f32[0];
          v54.m128_f32[2] = v36.m128_f32[0] + _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
          v54.m128_f32[3] = v44 + _mm_shuffle_ps(v40, v40, 255).m128_f32[0];
          v45 = v54;
          v46 = _mm_shuffle_ps(v54, v54, 85).m128_f32[0];
          v54.m128_f32[0] = v54.m128_f32[0] * (float)(1.0 / v27);
          v54.m128_f32[2] = _mm_shuffle_ps(v45, v45, 170).m128_f32[0] * (float)(1.0 / v27);
          v54.m128_f32[1] = v46 * (float)(1.0 / v27);
          v54.m128_f32[3] = _mm_shuffle_ps(v45, v45, 255).m128_f32[0] * (float)(1.0 / v27);
          v56 = v54.m128_f32[0];
          LODWORD(v57) = _mm_shuffle_ps(v54, v54, 85).m128_u32[0];
          LODWORD(v59) = _mm_shuffle_ps(v54, v54, 255).m128_u32[0];
          LODWORD(v58) = _mm_shuffle_ps(v54, v54, 170).m128_u32[0];
          break;
        default:
          for ( i = 0LL; i < 4; ++i )
            v54.m128_f32[i] = v29 * *(float *)(a3 + 4 * i);
          for ( j = 0LL; j < 4; ++j )
            *(float *)((char *)&v55 + j * 4) = v10 * v54.m128_f32[j];
          do
          {
            v54.m128_f32[v9] = v28 * *(float *)(a4 + 4 * v9);
            ++v9;
          }
          while ( v9 < 4 );
          v61 = 71;
          v57 = (float)(v54.m128_f32[1] + *((float *)&v55 + 1)) * (float)(1.0 / v27);
          v58 = (float)(v54.m128_f32[2] + *((float *)&v55 + 2)) * (float)(1.0 / v27);
          v59 = (float)(v54.m128_f32[3] + *((float *)&v55 + 3)) * (float)(1.0 / v27);
          v32 = (float)(v54.m128_f32[0] + *(float *)&v55) * (float)(1.0 / v27);
          goto LABEL_38;
      }
LABEL_39:
      v62 = 1;
      goto LABEL_40;
    }
    v32 = (float)((float)((float)(v29 * *(float *)a3) * v10) + (float)(v28 * *(float *)a4)) / v27;
LABEL_38:
    v56 = v32;
    goto LABEL_39;
  }
  v26 = a1;
  KeyframeInterpolation::ExpressionValueLerp(a2, v26, a3, a4, (__int64)&v56);
LABEL_40:
  CExpressionValue::operator=(a5, (__int64)&v56);
  return Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v60);
}

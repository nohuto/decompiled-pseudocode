/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180065760
 * Callers:
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x180064240 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z.c)
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180083290 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 * Callees:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180012694 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180012A4C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x18001A28C (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057AD4 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18006DCD0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BB0BC (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800BB0BC.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BB44C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800BB44C.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BDD20 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800BDD20.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BDF54 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800BDF54.c)
 *     ?IsCloseRealOneMatrixEpsilon@@YA_NM@Z @ 0x1800DDE50 (-IsCloseRealOneMatrixEpsilon@@YA_NM@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@QEAA_NXZ @ 0x1800E9B30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@detail.c)
 *     ?IsCloseRealMatrixEpsilon@@YA_NMM@Z @ 0x1800EA1F0 (-IsCloseRealMatrixEpsilon@@YA_NMM@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A9250 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801A9250.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A9820 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A9BC8 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A9C44 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A9CC0 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801AA00C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801AA0C8 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801AA184 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float a4,
        __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r14
  int v8; // r13d
  char v9; // di
  int v10; // r12d
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  bool v14; // si
  __int64 v15; // r8
  bool v16; // r15
  __m128 v17; // xmm12
  __m128 v18; // xmm8
  __m128 v19; // xmm7
  __m128 v20; // xmm9
  __m128 v21; // xmm10
  __m128 v22; // xmm13
  float v23; // xmm6_4
  unsigned int v24; // ebx
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  __m128 v27; // xmm6
  unsigned int v28; // edi
  __int64 v29; // r13
  int v30; // r10d
  int v31; // r11d
  __int64 v32; // rdi
  __m128 *v33; // rdx
  __m128 *v34; // r8
  __m128 *v35; // rcx
  __m128 *v36; // r9
  _OWORD *m128_f32; // rax
  signed __int64 v38; // r8
  __int64 v39; // rcx
  _OWORD *v40; // rax
  __int64 v41; // rcx
  signed __int64 v42; // rdx
  CMILMatrix *v43; // rax
  CMILMatrix *v44; // rax
  __int64 result; // rax
  CMILMatrix *v46; // rdx
  int v47; // [rsp+20h] [rbp-E0h]
  _QWORD v48[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v49; // [rsp+40h] [rbp-C0h]
  int v50; // [rsp+44h] [rbp-BCh]
  __int64 v51; // [rsp+48h] [rbp-B8h]
  int v52; // [rsp+50h] [rbp-B0h]
  int v53; // [rsp+54h] [rbp-ACh]
  unsigned int v54; // [rsp+58h] [rbp-A8h]
  float v55; // [rsp+5Ch] [rbp-A4h]
  char v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h]
  int v58; // [rsp+70h] [rbp-90h]
  int v59; // [rsp+74h] [rbp-8Ch]
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  __int64 v62; // [rsp+90h] [rbp-70h]
  _BYTE v63[80]; // [rsp+A0h] [rbp-60h] BYREF
  struct D2D_MATRIX_3X2_F v64; // [rsp+F0h] [rbp-10h] BYREF

  v5 = *(_DWORD *)(a1 + 16);
  v7 = a1;
  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(_BYTE *)(a1 + 97);
  v48[0] = *(_QWORD *)(a1 + 48);
  v10 = 8 * v5 + 16;
  v61 = *(_QWORD *)(a1 + 32);
  v48[1] = v61;
  v51 = *(_QWORD *)(a1 + 40);
  v53 = *(_DWORD *)(a1 + 12);
  v62 = a1;
  v55 = a4;
  v49 = v10;
  v11 = *a5;
  v12 = *((_DWORD *)a5 + 2);
  v13 = *((_DWORD *)a5 + 3);
  v60 = v11;
  v57 = v11;
  v59 = v13;
  v50 = v8;
  v52 = v10;
  v54 = v5;
  v56 = v9;
  v47 = v12;
  v58 = v12;
  v14 = (v5 & 1) == 0 && (v11 & 0xF) == 0;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a2) )
  {
    v16 = 0;
    v20 = (__m128)(unsigned int)FLOAT_1_0;
    v20.m128_f32[0] = 1.0 / *(float *)(v7 + 88);
    v17 = (__m128)*(unsigned int *)(v15 + 48);
    v21 = (__m128)(unsigned int)FLOAT_1_0;
    v21.m128_f32[0] = 1.0 / *(float *)(v7 + 92);
    v18 = v20;
    v18.m128_f32[0] = v20.m128_f32[0] * *(float *)v15;
    v19 = v21;
    v19.m128_f32[0] = v21.m128_f32[0] * *(float *)(v15 + 16);
    v20.m128_f32[0] = v20.m128_f32[0] * *(float *)(v15 + 4);
    v21.m128_f32[0] = v21.m128_f32[0] * *(float *)(v15 + 20);
    v22 = (__m128)*(unsigned int *)(v15 + 52);
    LODWORD(v64.m11) = v18.m128_i32[0];
    *(_QWORD *)&v64.m[0][1] = __PAIR64__(v19.m128_u32[0], v20.m128_u32[0]);
    *(_QWORD *)&v64.m[1][1] = __PAIR64__(v17.m128_u32[0], v21.m128_u32[0]);
    LODWORD(v64.dy) = v22.m128_i32[0];
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl) )
    {
      if ( IsCloseRealMatrixEpsilon(v18.m128_f32[0], v21.m128_f32[0])
        && IsCloseRealMatrixEpsilon(v20.m128_f32[0], COERCE_FLOAT(v19.m128_i32[0] ^ _xmm)) )
      {
        v16 = IsCloseRealOneMatrixEpsilon((float)(v18.m128_f32[0] * v18.m128_f32[0]) + (float)(v19.m128_f32[0]
                                                                                             * v19.m128_f32[0]));
      }
    }
    else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v18.m128_f32[0] - v21.m128_f32[0]) & _xmm) <= 0.0000011920929
           && COERCE_FLOAT(COERCE_UNSIGNED_INT(v20.m128_f32[0] - COERCE_FLOAT(v19.m128_i32[0] ^ _xmm)) & _xmm) <= 0.0000011920929 )
    {
      v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                           (float)((float)(v18.m128_f32[0] * v18.m128_f32[0])
                                 + (float)(v19.m128_f32[0] * v19.m128_f32[0]))
                         - 1.0) & _xmm) < 0.0000011920929;
    }
    LODWORD(v23) = COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm;
    if ( v16 )
    {
      if ( v23 >= 0.0000011920929 )
      {
        v44 = CMILMatrix::CMILMatrix((CMILMatrix *)v63, &v64);
        if ( v14 )
        {
          if ( v9 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
              v48,
              v44);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              v48,
              v44);
        }
        else if ( v9 )
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v48,
            v44);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v48,
            v44);
        }
      }
      else if ( v14 )
      {
        v24 = v5 >> 1;
        v25 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, (__m128)0LL), _mm_unpacklo_ps(v20, (__m128)0LL));
        v26 = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, (__m128)0LL), _mm_unpacklo_ps(v21, (__m128)0LL));
        v27 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, (__m128)(unsigned int)FLOAT_1_0), _mm_unpacklo_ps(v22, (__m128)0LL));
        if ( v8 )
        {
          v28 = v8 - 1;
          v29 = v60;
          v30 = 0;
          v31 = 0;
          v32 = (v28 >> 1) + 1;
          do
          {
            v33 = (__m128 *)(v61 + v31 + v10);
            v34 = (__m128 *)(v61 + v31);
            v35 = (__m128 *)(v29 + v30);
            v36 = (__m128 *)(v29 + v30 + v47);
            *v35 = _mm_or_ps(
                     _mm_andnot_ps(
                       (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                       _mm_add_ps(
                         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v34, *v34, 85), v26), v27),
                         _mm_mul_ps(_mm_shuffle_ps(*v34, *v34, 0), v25))),
                     _mm_and_ps(*v34, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
            if ( v24 )
            {
              m128_f32 = (_OWORD *)v35[1].m128_f32;
              v38 = (char *)v34 - (char *)v35;
              v39 = v24;
              do
              {
                *m128_f32 = *(_OWORD *)((char *)m128_f32 + v38);
                ++m128_f32;
                --v39;
              }
              while ( v39 );
            }
            *v36 = _mm_or_ps(
                     _mm_andnot_ps(
                       (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                       _mm_add_ps(
                         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v33, *v33, 85), v26), v27),
                         _mm_mul_ps(_mm_shuffle_ps(*v33, *v33, 0), v25))),
                     _mm_and_ps(*v33, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
            if ( v24 )
            {
              v40 = (_OWORD *)v36[1].m128_f32;
              v41 = v24;
              v42 = (char *)v33 - (char *)v36;
              do
              {
                *v40 = *(_OWORD *)((char *)v40 + v42);
                ++v40;
                --v41;
              }
              while ( v41 );
            }
            v31 += 2 * v10;
            v30 += 2 * v47;
            --v32;
          }
          while ( v32 );
          v7 = v62;
        }
      }
      else
      {
        v43 = CMILMatrix::CMILMatrix((CMILMatrix *)v63, &v64);
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v48,
          v43);
      }
      result = *(unsigned int *)(v7 + 8);
      dword_180345394 += result;
    }
    else
    {
      v46 = CMILMatrix::CMILMatrix((CMILMatrix *)v63, &v64);
      if ( v23 >= 0.0000011920929 )
      {
        if ( v14 )
        {
          if ( v9 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
              v48,
              v46);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              v48,
              v46);
          result = *(unsigned int *)(v7 + 8);
          dword_180345398 += result;
        }
        else
        {
          if ( v9 )
            VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
              v48,
              v46);
          else
            VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              v48,
              v46);
          result = *(unsigned int *)(v7 + 8);
          dword_180345398 += result;
        }
      }
      else
      {
        if ( v14 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
            v48,
            v46);
        else
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
            v48,
            v46);
        result = *(unsigned int *)(v7 + 8);
        dword_180345398 += result;
      }
    }
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(v7, (__int64)v63, v15);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.0000011920929 )
    {
      if ( v9 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v48,
          v63);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          (__int64)v48,
          (CMILMatrix *)v63);
      result = *(unsigned int *)(v7 + 8);
      dword_18034539C += result;
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v48,
        (CMILMatrix *)v63);
      result = *(unsigned int *)(v7 + 8);
      dword_18034539C += result;
    }
  }
  return result;
}

/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800845B0
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1800724A4 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x180083090 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z.c)
 * Callees:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180013C94 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180013FC4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x18001A07C (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18008CAB0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x1800930C8 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BA7EC (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800BA7EC.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BAAE4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800BAAE4.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BD9E0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800BD9E0.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BDC14 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800BDC14.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C0458 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?IsCloseRealMatrixEpsilon@@YA_NMM@Z @ 0x1800EA7B0 (-IsCloseRealMatrixEpsilon@@YA_NMM@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A7430 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801A7430.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A79B4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A7D5C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A7DD8 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A7E54 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A81A0 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A8258 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A8310 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float a4,
        __int64 *a5)
{
  int v5; // r9d
  __int64 v6; // rdi
  int v8; // esi
  char v9; // r10
  int v10; // r12d
  int v11; // ecx
  __int64 v12; // r13
  int v13; // eax
  char v14; // r8
  __int64 v15; // r11
  float v16; // xmm4_4
  unsigned int v17; // xmm5_4
  __m128 v18; // xmm8
  float v19; // xmm4_4
  __m128 v20; // xmm3
  __m128 v21; // xmm11
  __m128 v22; // xmm12
  float v23; // xmm5_4
  unsigned int v24; // r9d
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  unsigned int v27; // r9d
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128 v30; // xmm6
  int v31; // r11d
  int v32; // ebx
  __int64 v33; // rsi
  __m128 *v34; // rdx
  __m128 *v35; // r8
  __m128 *v36; // rcx
  __m128 *v37; // r10
  _OWORD *m128_f32; // rax
  signed __int64 v39; // r8
  __int64 v40; // rcx
  _OWORD *v41; // rax
  __int64 v42; // rcx
  signed __int64 v43; // rdx
  CMILMatrix *v44; // rax
  CMILMatrix *v45; // rax
  char v46; // r10
  CMILMatrix *v47; // rax
  char v48; // r10
  __int64 result; // rax
  CMILMatrix *v50; // rax
  CMILMatrix *v51; // rax
  CMILMatrix *v52; // rax
  char v53; // r10
  CMILMatrix *v54; // rax
  char v55; // r10
  char v56; // r10
  int v57; // [rsp+20h] [rbp-E0h]
  _QWORD v58[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v59; // [rsp+40h] [rbp-C0h]
  int v60; // [rsp+44h] [rbp-BCh]
  __int64 v61; // [rsp+48h] [rbp-B8h]
  int v62; // [rsp+50h] [rbp-B0h]
  int v63; // [rsp+54h] [rbp-ACh]
  int v64; // [rsp+58h] [rbp-A8h]
  float v65; // [rsp+5Ch] [rbp-A4h]
  char v66; // [rsp+60h] [rbp-A0h]
  __int64 v67; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+70h] [rbp-90h]
  int v69; // [rsp+74h] [rbp-8Ch]
  __int64 v70; // [rsp+80h] [rbp-80h]
  __int64 v71; // [rsp+88h] [rbp-78h]
  _BYTE v72[80]; // [rsp+90h] [rbp-70h] BYREF
  struct D2D_MATRIX_3X2_F v73; // [rsp+E0h] [rbp-20h] BYREF

  v5 = *(_DWORD *)(a1 + 16);
  v6 = a1;
  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(_BYTE *)(a1 + 97);
  v58[0] = *(_QWORD *)(a1 + 48);
  v10 = 8 * v5 + 16;
  v70 = *(_QWORD *)(a1 + 32);
  v58[1] = v70;
  v61 = *(_QWORD *)(a1 + 40);
  v63 = *(_DWORD *)(a1 + 12);
  v71 = a1;
  v65 = a4;
  v59 = v10;
  v11 = *((_DWORD *)a5 + 2);
  v12 = *a5;
  v13 = *((_DWORD *)a5 + 3);
  v67 = *a5;
  v69 = v13;
  v60 = v8;
  v62 = v10;
  v64 = v5;
  v66 = v9;
  v57 = v11;
  v68 = v11;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a2) )
  {
    v16 = 1.0 / *(float *)(v6 + 88);
    v18 = (__m128)(unsigned int)FLOAT_1_0;
    v18.m128_f32[0] = 1.0 / *(float *)(v6 + 92);
    *(float *)&v17 = v16 * *(float *)v15;
    v20 = v18;
    v18.m128_f32[0] = v18.m128_f32[0] * *(float *)(v15 + 20);
    v19 = v16 * *(float *)(v15 + 4);
    v20.m128_f32[0] = v20.m128_f32[0] * *(float *)(v15 + 16);
    v21 = (__m128)*(unsigned int *)(v15 + 48);
    v22 = (__m128)*(unsigned int *)(v15 + 52);
    *(_QWORD *)&v73.m11 = __PAIR64__(LODWORD(v19), v17);
    *(_QWORD *)&v73.m[1][0] = __PAIR64__(v18.m128_u32[0], v20.m128_u32[0]);
    *(_QWORD *)&v73.m[2][0] = __PAIR64__(v22.m128_u32[0], v21.m128_u32[0]);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v17 - v18.m128_f32[0]) & _xmm) <= 0.000081380211
      && IsCloseRealMatrixEpsilon(v19, COERCE_FLOAT(v20.m128_i32[0] ^ _xmm))
      && IsCloseRealOne((float)(v20.m128_f32[0] * v20.m128_f32[0]) + (float)(v23 * v23), 0.000081380211) )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.0000011920929 )
      {
        if ( v14 )
        {
          v45 = CMILMatrix::CMILMatrix((CMILMatrix *)v72, &v73);
          if ( v46 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
              v58,
              v45);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              v58,
              v45);
        }
        else
        {
          v47 = CMILMatrix::CMILMatrix((CMILMatrix *)v72, &v73);
          if ( v48 )
            VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
              v58,
              v47);
          else
            VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              v58,
              v47);
        }
      }
      else if ( v14 )
      {
        v27 = v24 >> 1;
        v28 = _mm_unpacklo_ps(_mm_unpacklo_ps(v26, (__m128)0LL), _mm_unpacklo_ps(v25, (__m128)0LL));
        v29 = _mm_unpacklo_ps(_mm_unpacklo_ps(v20, (__m128)0LL), _mm_unpacklo_ps(v18, (__m128)0LL));
        v30 = _mm_unpacklo_ps(_mm_unpacklo_ps(v21, (__m128)(unsigned int)FLOAT_1_0), _mm_unpacklo_ps(v22, (__m128)0LL));
        if ( v8 )
        {
          v31 = 0;
          v32 = 0;
          v33 = ((unsigned int)(v8 - 1) >> 1) + 1;
          do
          {
            v34 = (__m128 *)(v70 + v32 + v10);
            v35 = (__m128 *)(v70 + v32);
            v36 = (__m128 *)(v12 + v31);
            v37 = (__m128 *)(v12 + v31 + v57);
            *v36 = _mm_or_ps(
                     _mm_andnot_ps(
                       (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                       _mm_add_ps(
                         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v35, *v35, 85), v29), v30),
                         _mm_mul_ps(_mm_shuffle_ps(*v35, *v35, 0), v28))),
                     _mm_and_ps(*v35, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
            if ( v27 )
            {
              m128_f32 = (_OWORD *)v36[1].m128_f32;
              v39 = (char *)v35 - (char *)v36;
              v40 = v27;
              do
              {
                *m128_f32 = *(_OWORD *)((char *)m128_f32 + v39);
                ++m128_f32;
                --v40;
              }
              while ( v40 );
            }
            *v37 = _mm_or_ps(
                     _mm_andnot_ps(
                       (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                       _mm_add_ps(
                         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v34, *v34, 85), v29), v30),
                         _mm_mul_ps(_mm_shuffle_ps(*v34, *v34, 0), v28))),
                     _mm_and_ps(*v34, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
            if ( v27 )
            {
              v41 = (_OWORD *)v37[1].m128_f32;
              v42 = v27;
              v43 = (char *)v34 - (char *)v37;
              do
              {
                *v41 = *(_OWORD *)((char *)v41 + v43);
                ++v41;
                --v42;
              }
              while ( v42 );
            }
            v32 += 2 * v10;
            v31 += 2 * v57;
            --v33;
          }
          while ( v33 );
          v6 = v71;
        }
      }
      else
      {
        v44 = CMILMatrix::CMILMatrix((CMILMatrix *)v72, &v73);
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v58,
          v44);
      }
      result = *(unsigned int *)(v6 + 8);
      dword_180344384 += result;
    }
    else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.0000011920929 )
    {
      if ( v14 )
      {
        v52 = CMILMatrix::CMILMatrix((CMILMatrix *)v72, &v73);
        if ( v53 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v58,
            v52);
        else
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v58,
            v52);
        result = *(unsigned int *)(v6 + 8);
        dword_180344388 += result;
      }
      else
      {
        v54 = CMILMatrix::CMILMatrix((CMILMatrix *)v72, &v73);
        if ( v55 )
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v58,
            v54);
        else
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v58,
            v54);
        result = *(unsigned int *)(v6 + 8);
        dword_180344388 += result;
      }
    }
    else
    {
      if ( v14 )
      {
        v50 = CMILMatrix::CMILMatrix((CMILMatrix *)v72, &v73);
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v58,
          v50);
      }
      else
      {
        v51 = CMILMatrix::CMILMatrix((CMILMatrix *)v72, &v73);
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v58,
          v51);
      }
      result = *(unsigned int *)(v6 + 8);
      dword_180344388 += result;
    }
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(v6, (__int64)v72, v15);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.0000011920929 )
    {
      if ( v56 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v58,
          v72);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          (__int64)v58,
          (CMILMatrix *)v72);
      result = *(unsigned int *)(v6 + 8);
      dword_18034438C += result;
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v58,
        (CMILMatrix *)v72);
      result = *(unsigned int *)(v6 + 8);
      dword_18034438C += result;
    }
  }
  return result;
}

/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180057050
 * Callers:
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x180055B30 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z.c)
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180074770 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 * Callees:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800151B0 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800154C8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x18001AE7C (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005C100 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800AD65C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800AD65C.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800AD938 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800AD938.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800B75AC (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800B75AC.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800B77E0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800B77E0.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B8CBC (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801ABCB0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801ABCB0.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801AC234 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801AC5DC (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801AC658 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801AC6D4 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801ACA20 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801ACAD8 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801ACB90 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float a4,
        __int64 *a5)
{
  int v5; // r9d
  char v7; // bl
  __int64 v8; // rsi
  int v9; // r10d
  int v10; // r12d
  int v11; // edi
  __int64 v12; // r13
  int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // r9d
  int v16; // r10d
  char v17; // r11
  __m128 v18; // xmm10
  __m128 v19; // xmm4
  __m128 v20; // xmm9
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  __m128 v23; // xmm11
  unsigned int v24; // r9d
  __m128 v25; // xmm5
  __m128 v26; // xmm4
  __m128 v27; // xmm6
  int v28; // r11d
  int v29; // ebx
  int v30; // r14d
  __int64 v31; // rdi
  __m128 *v32; // rcx
  __m128 *v33; // rdx
  __m128 *v34; // r8
  __m128 *v35; // r10
  _OWORD *m128_f32; // rax
  signed __int64 v37; // rdx
  __int64 v38; // r8
  _OWORD *v39; // rax
  __int64 v40; // rdx
  signed __int64 v41; // rcx
  __int64 result; // rax
  CMILMatrix *v43; // rdx
  char v44; // r11
  CMILMatrix *v45; // rax
  char v46; // r11
  CMILMatrix *v47; // rax
  int v48; // [rsp+20h] [rbp-E0h]
  _QWORD v49[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v50; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+44h] [rbp-BCh]
  __int64 v52; // [rsp+48h] [rbp-B8h]
  int v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+54h] [rbp-ACh]
  int v55; // [rsp+58h] [rbp-A8h]
  float v56; // [rsp+5Ch] [rbp-A4h]
  char v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+68h] [rbp-98h]
  int v59; // [rsp+70h] [rbp-90h]
  int v60; // [rsp+74h] [rbp-8Ch]
  __int64 v61; // [rsp+80h] [rbp-80h]
  __int64 v62; // [rsp+88h] [rbp-78h]
  _BYTE v63[80]; // [rsp+90h] [rbp-70h] BYREF
  struct D2D_MATRIX_3X2_F v64; // [rsp+E0h] [rbp-20h] BYREF

  v5 = *(_DWORD *)(a1 + 16);
  v7 = *(_BYTE *)(a1 + 97);
  v8 = a1;
  v9 = *(_DWORD *)(a1 + 8);
  v49[0] = *(_QWORD *)(a1 + 48);
  v10 = 8 * v5 + 16;
  v61 = *(_QWORD *)(a1 + 32);
  v49[1] = v61;
  v52 = *(_QWORD *)(a1 + 40);
  v54 = *(_DWORD *)(a1 + 12);
  v56 = a4;
  v62 = a1;
  v50 = v10;
  v11 = *((_DWORD *)a5 + 2);
  v12 = *a5;
  v13 = *((_DWORD *)a5 + 3);
  v58 = *a5;
  v60 = v13;
  v51 = v9;
  v53 = v10;
  v55 = v5;
  v57 = v7;
  v48 = v11;
  v59 = v11;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a2) )
  {
    v21 = (__m128)(unsigned int)FLOAT_1_0;
    v21.m128_f32[0] = 1.0 / *(float *)(v8 + 88);
    v20 = (__m128)(unsigned int)FLOAT_1_0;
    v20.m128_f32[0] = 1.0 / *(float *)(v8 + 92);
    v18 = (__m128)*(unsigned int *)(v14 + 48);
    v19 = v21;
    v19.m128_f32[0] = v21.m128_f32[0] * *(float *)v14;
    v22 = v20;
    v20.m128_f32[0] = v20.m128_f32[0] * *(float *)(v14 + 20);
    v21.m128_f32[0] = v21.m128_f32[0] * *(float *)(v14 + 4);
    v22.m128_f32[0] = v22.m128_f32[0] * *(float *)(v14 + 16);
    v23 = (__m128)*(unsigned int *)(v14 + 52);
    *(_QWORD *)&v64.m11 = __PAIR64__(v21.m128_u32[0], v19.m128_u32[0]);
    *(_QWORD *)&v64.m[1][0] = __PAIR64__(v20.m128_u32[0], v22.m128_u32[0]);
    *(_QWORD *)&v64.m[2][0] = __PAIR64__(v23.m128_u32[0], v18.m128_u32[0]);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19.m128_f32[0] - v20.m128_f32[0]) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v21.m128_f32[0] - COERCE_FLOAT(v22.m128_i32[0] ^ _xmm)) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)(v19.m128_f32[0] * v19.m128_f32[0]) + (float)(v22.m128_f32[0] * v22.m128_f32[0]))
                      - 1.0) & _xmm) >= 0.0000011920929 )
    {
      v43 = CMILMatrix::CMILMatrix((CMILMatrix *)v63, &v64);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.0000011920929 )
      {
        if ( v44 )
        {
          if ( !v7 )
          {
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              v49,
              v43);
            result = *(unsigned int *)(v8 + 8);
            dword_180349398 += result;
            return result;
          }
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v49,
            v43);
        }
        else if ( v7 )
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v49,
            v43);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v49,
            v43);
        }
      }
      else if ( v44 )
      {
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v49,
          v43);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v49,
          v43);
      }
      result = *(unsigned int *)(v8 + 8);
      dword_180349398 += result;
      return result;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.0000011920929 )
    {
      v45 = CMILMatrix::CMILMatrix((CMILMatrix *)v63, &v64);
      if ( v46 )
      {
        if ( v7 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v49,
            v45);
        else
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v49,
            v45);
      }
      else if ( v7 )
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v49,
          v45);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          v49,
          v45);
      }
    }
    else if ( v17 )
    {
      v24 = v15 >> 1;
      v25 = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, (__m128)0LL), _mm_unpacklo_ps(v21, (__m128)0LL));
      v26 = _mm_unpacklo_ps(_mm_unpacklo_ps(v22, (__m128)0LL), _mm_unpacklo_ps(v20, (__m128)0LL));
      v27 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, (__m128)(unsigned int)FLOAT_1_0), _mm_unpacklo_ps(v23, (__m128)0LL));
      if ( v16 )
      {
        v28 = 0;
        v29 = 0;
        v30 = 2 * v11;
        v31 = ((unsigned int)(v16 - 1) >> 1) + 1;
        do
        {
          v32 = (__m128 *)(v61 + v29 + v10);
          v33 = (__m128 *)(v61 + v29);
          v34 = (__m128 *)(v12 + v28);
          v35 = (__m128 *)(v12 + v28 + v48);
          *v34 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v33, *v33, 85), v26), v27),
                       _mm_mul_ps(_mm_shuffle_ps(*v33, *v33, 0), v25))),
                   _mm_and_ps(*v33, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v24 )
          {
            m128_f32 = (_OWORD *)v34[1].m128_f32;
            v37 = (char *)v33 - (char *)v34;
            v38 = v24;
            do
            {
              *m128_f32 = *(_OWORD *)((char *)m128_f32 + v37);
              ++m128_f32;
              --v38;
            }
            while ( v38 );
          }
          *v35 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v32, *v32, 85), v26), v27),
                       _mm_mul_ps(_mm_shuffle_ps(*v32, *v32, 0), v25))),
                   _mm_and_ps(*v32, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v24 )
          {
            v39 = (_OWORD *)v35[1].m128_f32;
            v40 = v24;
            v41 = (char *)v32 - (char *)v35;
            do
            {
              *v39 = *(_OWORD *)((char *)v39 + v41);
              ++v39;
              --v40;
            }
            while ( v40 );
          }
          v29 += 2 * v10;
          v28 += v30;
          --v31;
        }
        while ( v31 );
        v8 = v62;
      }
    }
    else
    {
      v47 = CMILMatrix::CMILMatrix((CMILMatrix *)v63, &v64);
      VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        v49,
        v47);
    }
    result = *(unsigned int *)(v8 + 8);
    dword_180349394 += result;
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(v8, (__int64)v63, v14);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.0000011920929 )
    {
      if ( v7 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v49,
          v63);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          (__int64)v49,
          (CMILMatrix *)v63);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v49,
        (CMILMatrix *)v63);
    }
    result = *(unsigned int *)(v8 + 8);
    dword_18034939C += result;
  }
  return result;
}

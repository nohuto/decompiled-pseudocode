/*
 * XREFs of ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18002320C
 * Callers:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180017704 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180022800 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180022800.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A9470 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801A9470.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@QEAA_NXZ @ 0x1800E9B30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@detail.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 *__fastcall VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        __m128 *a1,
        __m128 *a2,
        __m128 *a3,
        double a4,
        int a5,
        unsigned int a6,
        __m128 *a7)
{
  __m128 v7; // xmm4
  __m128 v10; // xmm7
  __m128 v11; // xmm6
  __m128 v12; // xmm3
  __m128 v13; // xmm5
  __m128 v14; // xmm1
  __m128 *result; // rax
  __m128 v16; // xmm1
  char *v17; // rbx
  __m128 v18; // xmm1
  __int64 v19; // rdx
  char *v20; // rbx
  __m128 v21; // xmm1
  __int64 v22; // rdx

  v10 = *a3;
  v11 = (__m128)DirectX::g_XMOne;
  v12 = _mm_sub_ps(_mm_shuffle_ps(*(__m128 *)&a4, DirectX::g_XMOne, 228), *a3);
  v13 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), a1[1]), _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), *a1));
  if ( (_mm_movemask_ps(_mm_cmpeq_ps(v13, DirectX::g_XMZero)) & 3) != 3 )
  {
    v14 = _mm_mul_ps(v13, v13);
    v11.m128_f32[0] = 1.0 / fsqrt(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0]);
    v11 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), _mm_shuffle_ps(v10, v10, 170));
  }
  *a7 = _mm_shuffle_ps(
          _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), a1[1]), a1[2]),
              _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), *a1)),
            _mm_mul_ps(v11, v13)),
          _mm_or_ps(
            _mm_andnot_ps(
              (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
              DirectX::g_XMOne),
            _mm_and_ps((__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask, v7)),
          228);
  result = (__m128 *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl);
  if ( (_BYTE)result )
  {
    v16 = (__m128)(unsigned int)FLOAT_1_0;
    if ( v11.m128_f32[0] <= 1.0 || a3->m128_f32[3] != 0.0 )
      v16 = v11;
    if ( a6 )
    {
      v17 = (char *)((char *)a3 - (char *)a2);
      v18 = _mm_shuffle_ps(v16, v16, 0);
      result = a2 + 1;
      v19 = a6;
      do
      {
        *(__m128 *)((char *)result + (char *)a7 - (char *)a2 + 32) = _mm_add_ps(
                                                                       _mm_mul_ps(
                                                                         _mm_sub_ps(
                                                                           *result,
                                                                           *(__m128 *)((char *)result + (_QWORD)v17)),
                                                                         v18),
                                                                       *(__m128 *)((char *)result + (_QWORD)v17));
        ++result;
        --v19;
      }
      while ( v19 );
    }
  }
  else if ( a6 )
  {
    result = a2 + 1;
    v20 = (char *)((char *)a3 - (char *)a2);
    v21 = _mm_shuffle_ps(v11, v11, 0);
    v22 = a6;
    do
    {
      *(__m128 *)((char *)result + (char *)a7 - (char *)a2 + 32) = _mm_add_ps(
                                                                     _mm_mul_ps(
                                                                       _mm_sub_ps(
                                                                         *result,
                                                                         *(__m128 *)&v20[(_QWORD)result]),
                                                                       v21),
                                                                     *(__m128 *)&v20[(_QWORD)result]);
      ++result;
      --v22;
    }
    while ( v22 );
  }
  return result;
}

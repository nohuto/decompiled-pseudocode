/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BB44C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180065760 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@QEAA_NXZ @ 0x1800E9B30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@detail.c)
 */

__m128 *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2)
{
  unsigned int v2; // r13d
  __int64 v3; // r8
  __m128 *result; // rax
  __m128 v5; // xmm8
  __m128 v6; // xmm9
  unsigned int v7; // ebx
  __m128 v8; // xmm10
  __m128 v9; // xmm6
  __m128 *v10; // r14
  __m128 *v11; // r15
  __m128 *v12; // rbp
  __m128 *v13; // r12
  __m128 *v14; // rdi
  __m128 *v15; // rsi
  __m128 v16; // xmm2
  __m128 v17; // xmm0
  __m128 v18; // xmm3
  __m128 v19; // xmm1
  __int64 v20; // rcx
  signed __int64 v21; // rdi
  __m128 v22; // xmm1
  signed __int64 v23; // rbp
  __m128 *v24; // rax
  __int64 v25; // rcx
  signed __int64 v26; // rdi
  __m128 v27; // xmm1
  signed __int64 v28; // rbp
  __m128 *v29; // rax
  __m128 v30; // xmm6
  __m128 v31; // xmm3
  __m128 v32; // xmm0
  __m128 v33; // xmm2
  __m128 v34; // xmm1
  __int64 v35; // rcx
  signed __int64 v36; // rsi
  __m128 v37; // xmm1
  signed __int64 v38; // r12
  __int64 v39; // rcx
  signed __int64 v40; // rsi
  __m128 v41; // xmm1
  signed __int64 v42; // r12
  unsigned int v44; // [rsp+B8h] [rbp+20h]

  v2 = 0;
  v3 = a1;
  result = (__m128 *)*(unsigned int *)(a1 + 20);
  v5 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)a2[4]), _mm_unpacklo_ps((__m128)a2[5], (__m128)a2[5]));
  v7 = *(_DWORD *)(a1 + 40) >> 1;
  v8 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[13], (__m128)0LL));
  v44 = (unsigned int)result;
  if ( (_DWORD)result )
  {
    do
    {
      v9 = (__m128)DirectX::g_XMOne;
      v10 = (__m128 *)(*(_QWORD *)(v3 + 8) + (int)(v2 * *(_DWORD *)(v3 + 16)));
      v11 = (__m128 *)(*(_QWORD *)(v3 + 8) + (int)(*(_DWORD *)(v3 + 16) * (v2 + 1)));
      v12 = (__m128 *)(*(_QWORD *)(v3 + 56) + (int)(v2 * *(_DWORD *)(v3 + 64)));
      v13 = (__m128 *)(*(_QWORD *)(v3 + 56) + (int)((v2 + 1) * *(_DWORD *)(v3 + 64)));
      v14 = (__m128 *)(*(_QWORD *)(v3 + 24) + (int)(v2 * *(_DWORD *)(v3 + 32)));
      v15 = (__m128 *)(*(_QWORD *)(v3 + 24) + (int)((v2 + 1) * *(_DWORD *)(v3 + 32)));
      v16 = *v14;
      v17 = _mm_sub_ps(_mm_shuffle_ps(*v10, DirectX::g_XMOne, 228), *v14);
      v18 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v6), _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v5));
      if ( (_mm_movemask_ps(_mm_cmpeq_ps(v18, DirectX::g_XMZero)) & 3) != 3 )
      {
        v19 = _mm_mul_ps(v18, v18);
        v9.m128_f32[0] = 1.0 / fsqrt(v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0]);
        v9 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), _mm_shuffle_ps(v16, v16, 170));
      }
      *v12 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), v6), v8),
                   _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v5)),
                 _mm_mul_ps(v9, v18)),
               _mm_or_ps(
                 _mm_and_ps(*v10, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   DirectX::g_XMOne)),
               228);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl) )
      {
        if ( v9.m128_f32[0] > 1.0 && v14->m128_f32[3] == 0.0 )
          v9 = (__m128)(unsigned int)FLOAT_1_0;
        if ( v7 )
        {
          v20 = v7;
          v21 = (char *)v14 - (char *)v10;
          v22 = _mm_shuffle_ps(v9, v9, 0);
          v23 = (char *)v12 - (char *)v10;
          v24 = v10 + 1;
          do
          {
            *(__m128 *)((char *)v24 + v23) = _mm_add_ps(
                                               _mm_mul_ps(_mm_sub_ps(*v24, *(__m128 *)((char *)v24 + v21)), v22),
                                               *(__m128 *)((char *)v24 + v21));
            ++v24;
            --v20;
          }
          while ( v20 );
        }
      }
      else if ( v7 )
      {
        v25 = v7;
        v26 = (char *)v14 - (char *)v10;
        v27 = _mm_shuffle_ps(v9, v9, 0);
        v28 = (char *)v12 - (char *)v10;
        v29 = v10 + 1;
        do
        {
          *(__m128 *)((char *)v29 + v28) = _mm_add_ps(
                                             _mm_mul_ps(_mm_sub_ps(*v29, *(__m128 *)((char *)v29 + v26)), v27),
                                             *(__m128 *)((char *)v29 + v26));
          ++v29;
          --v25;
        }
        while ( v25 );
      }
      v30 = (__m128)DirectX::g_XMOne;
      v31 = *v15;
      v32 = _mm_sub_ps(_mm_shuffle_ps(*v11, DirectX::g_XMOne, 228), *v15);
      v33 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v32, v32, 85), v6), _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v5));
      if ( (_mm_movemask_ps(_mm_cmpeq_ps(v33, DirectX::g_XMZero)) & 3) != 3 )
      {
        v34 = _mm_mul_ps(v33, v33);
        v30.m128_f32[0] = 1.0 / fsqrt(v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0]);
        v30 = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), _mm_shuffle_ps(v31, v31, 170));
      }
      *v13 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), v6), v8),
                   _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v5)),
                 _mm_mul_ps(v30, v33)),
               _mm_or_ps(
                 _mm_and_ps(*v11, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   DirectX::g_XMOne)),
               228);
      result = (__m128 *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl);
      if ( (_BYTE)result )
      {
        if ( v30.m128_f32[0] > 1.0 && v15->m128_f32[3] == 0.0 )
          v30 = (__m128)(unsigned int)FLOAT_1_0;
        if ( v7 )
        {
          v35 = v7;
          v36 = (char *)v15 - (char *)v11;
          v37 = _mm_shuffle_ps(v30, v30, 0);
          v38 = (char *)v13 - (char *)v11;
          result = v11 + 1;
          do
          {
            *(__m128 *)((char *)result + v38) = _mm_add_ps(
                                                  _mm_mul_ps(
                                                    _mm_sub_ps(*result, *(__m128 *)((char *)result + v36)),
                                                    v37),
                                                  *(__m128 *)((char *)result + v36));
            ++result;
            --v35;
          }
          while ( v35 );
        }
      }
      else if ( v7 )
      {
        v39 = v7;
        v40 = (char *)v15 - (char *)v11;
        v41 = _mm_shuffle_ps(v30, v30, 0);
        v42 = (char *)v13 - (char *)v11;
        result = v11 + 1;
        do
        {
          *(__m128 *)((char *)result + v42) = _mm_add_ps(
                                                _mm_mul_ps(_mm_sub_ps(*result, *(__m128 *)((char *)result + v40)), v41),
                                                *(__m128 *)((char *)result + v40));
          ++result;
          --v39;
        }
        while ( v39 );
      }
      v3 = a1;
      v2 += 2;
    }
    while ( v2 < v44 );
  }
  return result;
}

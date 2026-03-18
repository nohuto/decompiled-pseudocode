/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800AD938
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180057050 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2)
{
  __m128 *result; // rax
  unsigned int v3; // r9d
  unsigned int v4; // r14d
  __m128 v6; // xmm5
  __m128 v7; // xmm6
  unsigned int v8; // r8d
  __m128 v9; // xmm9
  __m128 v10; // xmm3
  __m128 *v11; // rbx
  __m128 *v12; // r11
  int v13; // eax
  __m128 *v14; // rsi
  __m128 *v15; // r10
  __m128 *v16; // rdi
  __m128 *v17; // rdx
  __m128 v18; // xmm4
  __m128 v19; // xmm0
  __m128 v20; // xmm7
  __int64 v21; // rcx
  signed __int64 v22; // rdi
  __m128 v23; // xmm1
  signed __int64 v24; // r10
  __m128 *v25; // rax
  __m128 v26; // xmm3
  __m128 v27; // xmm0
  __m128 v28; // xmm2
  __m128 v29; // xmm4
  __int64 v30; // rcx
  signed __int64 v31; // rdx
  __m128 v32; // xmm1
  signed __int64 v33; // rsi
  __m128 v34; // xmm1
  __m128 v35; // xmm1
  __m128 v36; // xmm0
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__m128 *)&retaddr;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 20);
  v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v7 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)a2[4]), _mm_unpacklo_ps((__m128)a2[5], (__m128)a2[5]));
  v8 = *(_DWORD *)(a1 + 40) >> 1;
  v9 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[13], (__m128)0LL));
  if ( v4 )
  {
    do
    {
      v10 = (__m128)DirectX::g_XMOne;
      v11 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(v3 * *(_DWORD *)(a1 + 16)));
      v12 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      v13 = *(_DWORD *)(a1 + 64);
      v14 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v3 + 1) * v13));
      v15 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v3 * v13));
      v16 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v3 * *(_DWORD *)(a1 + 32)));
      v17 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)((v3 + 1) * *(_DWORD *)(a1 + 32)));
      v18 = *v16;
      v19 = _mm_sub_ps(_mm_shuffle_ps(*v11, DirectX::g_XMOne, 228), *v16);
      v20 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 85), v7), _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v6));
      if ( (_mm_movemask_ps(_mm_cmpeq_ps(v20, DirectX::g_XMZero)) & 3) != 3 )
      {
        v34 = _mm_mul_ps(v20, v20);
        v10.m128_f32[0] = 1.0 / fsqrt(v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0]);
        v10 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), _mm_shuffle_ps(v18, v18, 170));
      }
      *v15 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v18, v18, 85), v7), v9),
                   _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v6)),
                 _mm_mul_ps(v10, v20)),
               _mm_or_ps(
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   DirectX::g_XMOne),
                 _mm_and_ps(*v11, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
               228);
      if ( v8 )
      {
        v21 = v8;
        v22 = (char *)v16 - (char *)v11;
        v23 = _mm_shuffle_ps(v10, v10, 0);
        v24 = (char *)v15 - (char *)v11;
        v25 = v11 + 1;
        do
        {
          *(__m128 *)((char *)v25 + v24) = _mm_add_ps(
                                             _mm_mul_ps(_mm_sub_ps(*v25, *(__m128 *)((char *)v25 + v22)), v23),
                                             *(__m128 *)((char *)v25 + v22));
          ++v25;
          --v21;
        }
        while ( v21 );
      }
      v26 = *v17;
      v27 = _mm_sub_ps(_mm_shuffle_ps(*v12, DirectX::g_XMOne, 228), *v17);
      v28 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 85), v7), _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v6));
      result = (__m128 *)(_mm_movemask_ps(_mm_cmpeq_ps(v28, DirectX::g_XMZero)) & 3);
      if ( (_BYTE)result == 3 )
      {
        v29 = (__m128)DirectX::g_XMOne;
      }
      else
      {
        v35 = _mm_mul_ps(v28, v28);
        v36 = (__m128)DirectX::g_XMOne;
        v36.m128_f32[0] = 1.0 / fsqrt(v35.m128_f32[0] + _mm_shuffle_ps(v35, v35, 85).m128_f32[0]);
        v29 = _mm_mul_ps(_mm_shuffle_ps(v26, v26, 170), _mm_shuffle_ps(v36, v36, 0));
      }
      *v14 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 85), v7), v9),
                   _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v6)),
                 _mm_mul_ps(v29, v28)),
               _mm_or_ps(
                 _mm_and_ps(*v12, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   DirectX::g_XMOne)),
               228);
      if ( v8 )
      {
        v30 = v8;
        v31 = (char *)v17 - (char *)v12;
        v32 = _mm_shuffle_ps(v29, v29, 0);
        v33 = (char *)v14 - (char *)v12;
        result = v12 + 1;
        do
        {
          *(__m128 *)((char *)result + v33) = _mm_add_ps(
                                                _mm_mul_ps(_mm_sub_ps(*result, *(__m128 *)((char *)result + v31)), v32),
                                                *(__m128 *)((char *)result + v31));
          ++result;
          --v30;
        }
        while ( v30 );
      }
      v3 += 2;
    }
    while ( v3 < v4 );
  }
  return result;
}

/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800B77E0
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180057050 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2)
{
  unsigned __int64 result; // rax
  unsigned int v3; // r9d
  unsigned int v4; // esi
  __m128 v6; // xmm5
  __m128 v7; // xmm6
  unsigned int v8; // r8d
  __m128 v9; // xmm7
  __m128 v10; // xmm8
  __m128 *v11; // r11
  __m128 *v12; // r10
  int v13; // eax
  int v14; // ecx
  __m128 *v15; // rdx
  __m128 *v16; // rdi
  __m128i v17; // xmm3
  __m128i v18; // xmm3
  __int64 v19; // rcx
  signed __int64 v20; // r11
  __m128i v21; // xmm3
  __m128i v22; // xmm3
  __int64 v23; // rcx
  signed __int64 v24; // r10
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 20);
  v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v7 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[5], (__m128)0LL));
  v8 = *(_DWORD *)(a1 + 40) >> 1;
  v9 = _mm_unpacklo_ps(
         _mm_unpacklo_ps((__m128)a2[12], (__m128)(unsigned int)FLOAT_1_0),
         _mm_unpacklo_ps((__m128)a2[13], (__m128)0LL));
  v10 = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 44), (__m128)*(unsigned int *)(a1 + 44), 0);
  if ( v4 )
  {
    do
    {
      v11 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(v3 * *(_DWORD *)(a1 + 16)));
      v12 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      v13 = *(_DWORD *)(a1 + 64);
      v14 = (v3 + 1) * v13;
      result = v3 * v13;
      v15 = (__m128 *)(*(_QWORD *)(a1 + 56) + v14);
      v16 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)result);
      v17 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(*v11, *v11, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v10));
      v18 = _mm_packs_epi32(v17, v17);
      *v16 = _mm_or_ps(
               _mm_andnot_ps(
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v11, *v11, 85), v7), v9),
                   _mm_mul_ps(_mm_shuffle_ps(*v11, *v11, 0), v6))),
               _mm_and_ps(
                 (__m128)_mm_packus_epi16(v18, v18),
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v8 )
      {
        result = (unsigned __int64)&v16[1];
        v19 = v8;
        v20 = (char *)v11 - (char *)v16;
        do
        {
          *(_OWORD *)result = *(_OWORD *)(v20 + result);
          result += 16LL;
          --v19;
        }
        while ( v19 );
      }
      v21 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(*v12, *v12, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v10));
      v22 = _mm_packs_epi32(v21, v21);
      *v15 = _mm_or_ps(
               _mm_andnot_ps(
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v12, *v12, 85), v7), v9),
                   _mm_mul_ps(_mm_shuffle_ps(*v12, *v12, 0), v6))),
               _mm_and_ps(
                 (__m128)_mm_packus_epi16(v22, v22),
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v8 )
      {
        result = (unsigned __int64)&v15[1];
        v23 = v8;
        v24 = (char *)v12 - (char *)v15;
        do
        {
          *(_OWORD *)result = *(_OWORD *)(v24 + result);
          result += 16LL;
          --v23;
        }
        while ( v23 );
      }
      v3 += 2;
    }
    while ( v3 < v4 );
  }
  return result;
}

/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801EDA18
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000D1D8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x18000D600 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@T__m128@@1IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18000D680 (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Vert.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18000D6E4 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

_UNKNOWN **__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned __int64 *a2,
        CMILMatrix *a3,
        CMILMatrix *a4)
{
  _UNKNOWN **result; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  unsigned int v10; // r14d
  __int128 v11; // xmm8
  __m128 v12; // xmm7
  unsigned int v13; // r11d
  __m128 v14; // xmm3
  unsigned int v15; // r15d
  __m128 v16; // xmm2
  int v17; // eax
  __int64 v18; // rbp
  __int64 v19; // rdi
  __m128i v20; // xmm3
  __m128i v21; // xmm3
  __m128 *v22; // r9
  __m128i v23; // xmm3
  __m128i v24; // xmm3
  DirectX::PackedVector *v25; // rcx
  unsigned int v26; // r11d
  __m128 v27; // xmm6
  __m128 v28; // xmm5
  __m128 v29; // xmm4
  __m128 v30; // xmm3
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  DirectX::PackedVector *v33; // rcx
  DirectX::PackedVector *v34; // rcx
  DirectX::PackedVector *v35; // rcx
  int v36; // r11d
  __int128 v37; // [rsp+30h] [rbp-98h] BYREF
  __m128 v38[6]; // [rsp+40h] [rbp-88h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a1 + 8;
  v6 = *(_QWORD *)a1;
  v10 = *(_DWORD *)(a1 + 40) >> 1;
  v11 = _xmm;
  v12 = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 44), (__m128)*(unsigned int *)(a1 + 44), 0);
  if ( a3 && a4 )
  {
    result = (_UNKNOWN **)CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v37, v6, (__int64 *)v5, a3, a4);
    v11 = v37;
  }
  v13 = 0;
  v14 = (__m128)a2[2];
  v15 = *(_DWORD *)(a1 + 20);
  v38[0] = (__m128)*a2;
  v38[2] = _mm_movelh_ps((__m128)a2[6], (__m128)_xmm);
  v38[1] = v14;
  if ( v15 )
  {
    do
    {
      v16 = *(__m128 *)(*(_QWORD *)v5 + (int)(v13 * *(_DWORD *)(v5 + 8)));
      v17 = *(_DWORD *)(a1 + 64);
      v18 = *(_QWORD *)(a1 + 56) + (int)((v13 + 1) * v17);
      v19 = *(_QWORD *)(a1 + 56) + (int)(v13 * v17);
      v20 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(v16, v16, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v12));
      v21 = _mm_packs_epi32(v20, v20);
      VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        v38,
        *(_QWORD *)v5 + (int)(v13 * *(_DWORD *)(v5 + 8)),
        *(double *)v16.m128_u64,
        *(double *)_mm_packus_epi16(v21, v21).m128i_i64,
        v10,
        (__m128 *)v19);
      v23 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(*v22, *v22, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v12));
      v24 = _mm_packs_epi32(v23, v23);
      VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        v38,
        (__int64)v22,
        *(double *)v22->m128_u64,
        *(double *)_mm_packus_epi16(v24, v24).m128i_i64,
        v10,
        (__m128 *)v18);
      v27 = *(__m128 *)(v6 + 16 * ((unsigned __int64)v26 >> 1));
      if ( a3 )
      {
        v28 = _mm_movelh_ps((__m128)*(unsigned __int64 *)a3, (__m128)*((unsigned int *)a3 + 2));
        v29 = _mm_movelh_ps((__m128)*((unsigned __int64 *)a3 + 2), (__m128)*((unsigned int *)a3 + 6));
        v30 = _mm_movelh_ps((__m128)*((unsigned __int64 *)a3 + 6), (__m128)*((unsigned int *)a3 + 14));
        v31 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 85), v29), v30),
                _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v28));
        v32 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 255), v29), v30),
                _mm_mul_ps(_mm_shuffle_ps(v27, v27, 170), v28));
      }
      else
      {
        v31 = _mm_shuffle_ps(v27, DirectX::g_XMZero, 228);
        v32 = (__m128)_mm_unpackhi_pd((__m128d)v27, DirectX::g_XMZero);
      }
      *(__m128 *)(v19 + 16) = v31;
      *(_OWORD *)(v19 + 32) = v11;
      *(__m128 *)(v18 + 16) = v32;
      *(_OWORD *)(v18 + 32) = v11;
      *(_WORD *)(v19 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v25, v31.m128_f32[0]);
      *(_WORD *)(v19 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v33, v31.m128_f32[0]);
      *(_WORD *)(v18 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v34, v31.m128_f32[0]);
      result = (_UNKNOWN **)DirectX::PackedVector::XMConvertFloatToHalf(v35, v31.m128_f32[0]);
      v13 = v36 + 2;
      *(_WORD *)(v18 + 30) = (_WORD)result;
    }
    while ( v13 < v15 );
  }
  return result;
}

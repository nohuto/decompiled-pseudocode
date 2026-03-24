/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A7AB8
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180020854 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x1800215A8 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@T__m128@@1IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18002160C (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Vert.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180021798 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  _UNKNOWN **v4; // rax
  __int64 v5; // r15
  __int64 v6; // r12
  __m128 v10; // xmm7
  __m128 v11; // xmm8
  __m128 v12; // xmm9
  unsigned int v13; // ebp
  __m128 v14; // xmm10
  __int128 v15; // xmm11
  unsigned int v16; // r14d
  unsigned int v17; // r10d
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  __m128 v20; // xmm2
  __m128 v21; // xmm2
  int v22; // eax
  __int64 v23; // rdi
  __m128i v24; // xmm3
  __m128i v25; // xmm3
  __m128 *v26; // r9
  __m128 v27; // xmm1
  __m128i v28; // xmm3
  __m128i v29; // xmm3
  DirectX::PackedVector *v30; // rcx
  __int64 v31; // r11
  unsigned int v32; // r10d
  __m128 v33; // xmm6
  __m128 v34; // xmm2
  __m128 v35; // xmm3
  unsigned __int16 v36; // ax
  __int64 v37; // r11
  DirectX::PackedVector *v38; // rcx
  unsigned __int16 v39; // ax
  __int64 v40; // r11
  DirectX::PackedVector *v41; // rcx
  DirectX::PackedVector *v42; // rcx
  int v43; // r10d
  __int128 v45; // [rsp+30h] [rbp-B8h] BYREF
  __m128 v46[9]; // [rsp+40h] [rbp-A8h] BYREF
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h] BYREF

  v4 = &retaddr;
  v5 = a1 + 8;
  v6 = *(_QWORD *)a1;
  v10 = (__m128)DirectX::g_XMZero;
  v11 = (__m128)DirectX::g_XMZero;
  v12 = (__m128)DirectX::g_XMZero;
  v13 = *(_DWORD *)(a1 + 40) >> 1;
  v14 = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 44), (__m128)*(unsigned int *)(a1 + 44), 0);
  if ( a3 )
  {
    v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v11 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]), _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v12 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]), _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v15 = _xmm;
  if ( a3 && a4 )
  {
    LOWORD(v4) = (unsigned __int16)CalculateTBNFrameFrom3Vertices(
                                     (struct D2DQuaternion *)&v45,
                                     v6,
                                     (__int64 *)v5,
                                     (CMILMatrix *)a3,
                                     a4);
    v15 = v45;
  }
  v16 = *(_DWORD *)(a1 + 20);
  v17 = 0;
  v18 = (__m128)a2[5];
  v46[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v19 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps(v18, (__m128)0LL));
  v20 = (__m128)a2[13];
  v46[1] = v19;
  for ( v46[2] = _mm_unpacklo_ps(
                   _mm_unpacklo_ps((__m128)a2[12], (__m128)(unsigned int)FLOAT_1_0),
                   _mm_unpacklo_ps(v20, (__m128)0LL)); v17 < v16; *(_WORD *)(v23 + 30) = (_WORD)v4 )
  {
    v21 = *(__m128 *)(*(_QWORD *)v5 + (int)(v17 * *(_DWORD *)(v5 + 8)));
    v22 = *(_DWORD *)(a1 + 64);
    v23 = *(_QWORD *)(a1 + 56) + (int)((v17 + 1) * v22);
    v24 = _mm_cvttps_epi32(
            _mm_mul_ps(
              _mm_mul_ps(
                _mm_add_ps(
                  _mm_cvtepi32_ps(_mm_xor_si128(_mm_and_si128((__m128i)_mm_shuffle_ps(v21, v21, 255), g_MaskA8B8G8R8), g_FlipA8R8G8B8)),
                  g_FixAA8R8G8B8),
                g_NormalizeA8R8G8B8),
              v14));
    v25 = _mm_packs_epi32(v24, v24);
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      v46,
      *(_QWORD *)v5 + (int)(v17 * *(_DWORD *)(v5 + 8)),
      *(double *)v21.m128_u64,
      *(double *)_mm_packus_epi16(v25, v25).m128i_i64,
      v13,
      (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v17 * v22)));
    v27 = _mm_mul_ps(
            _mm_mul_ps(
              _mm_add_ps(
                _mm_cvtepi32_ps(_mm_xor_si128(_mm_and_si128((__m128i)_mm_shuffle_ps(*v26, *v26, 255), g_MaskA8B8G8R8), g_FlipA8R8G8B8)),
                g_FixAA8R8G8B8),
              g_NormalizeA8R8G8B8),
            v14);
    v28 = _mm_cvttps_epi32(v27);
    v29 = _mm_packs_epi32(v28, v28);
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      v46,
      (__int64)v26,
      *(double *)v26->m128_u64,
      *(double *)_mm_packus_epi16(v29, v29).m128i_i64,
      v13,
      (__m128 *)v23);
    v33 = *(__m128 *)(v6 + 16 * ((unsigned __int64)v32 >> 1));
    v34 = v33;
    if ( a3 )
    {
      v34 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v33, v33, 85), v11), v12),
              _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v10));
      v35 = _mm_shuffle_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v33, v33, 255), v11), v12),
                _mm_mul_ps(_mm_shuffle_ps(v33, v33, 170), v10)),
              DirectX::g_XMZero,
              228);
    }
    else
    {
      v35 = (__m128)_mm_unpackhi_pd((__m128d)v33, DirectX::g_XMZero);
    }
    *(__m128 *)(v31 + 16) = _mm_shuffle_ps(v34, DirectX::g_XMZero, 228);
    *(_OWORD *)(v31 + 32) = v15;
    *(__m128 *)(v23 + 16) = v35;
    *(_OWORD *)(v23 + 32) = v15;
    v36 = DirectX::PackedVector::XMConvertFloatToHalf(v30, v27.m128_f32[0]);
    *(_WORD *)(v37 + 28) = v36;
    v39 = DirectX::PackedVector::XMConvertFloatToHalf(v38, v27.m128_f32[0]);
    *(_WORD *)(v40 + 30) = v39;
    *(_WORD *)(v23 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v41, v27.m128_f32[0]);
    LOWORD(v4) = DirectX::PackedVector::XMConvertFloatToHalf(v42, v27.m128_f32[0]);
    v17 = v43 + 2;
  }
  return (__int16)v4;
}

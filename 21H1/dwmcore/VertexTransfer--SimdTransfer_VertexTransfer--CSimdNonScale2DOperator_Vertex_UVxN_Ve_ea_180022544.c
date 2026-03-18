/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180022544
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180021BE8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x1800228B4 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@T__m128@@1IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180022918 (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Vert.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180022A84 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  _UNKNOWN **v4; // rax
  _DWORD *v5; // r15
  __int64 v6; // r12
  __m128 v10; // xmm7
  __m128 v11; // xmm8
  __m128 v12; // xmm9
  int v13; // ebp
  __m128 v14; // xmm10
  __int128 v15; // xmm11
  unsigned int v16; // r14d
  unsigned int v17; // r10d
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  __m128 v20; // xmm2
  int v21; // eax
  __int64 v22; // rdi
  float v23; // xmm1_4
  int v24; // r8d
  int v25; // r9d
  DirectX::PackedVector *v26; // rcx
  __int64 v27; // r11
  unsigned int v28; // r10d
  __m128 v29; // xmm6
  __m128 v30; // xmm2
  __m128 v31; // xmm3
  unsigned __int16 v32; // ax
  __int64 v33; // r11
  DirectX::PackedVector *v34; // rcx
  unsigned __int16 v35; // ax
  __int64 v36; // r11
  DirectX::PackedVector *v37; // rcx
  DirectX::PackedVector *v38; // rcx
  int v39; // r10d
  __int128 v41; // [rsp+30h] [rbp-B8h] BYREF
  _OWORD v42[9]; // [rsp+40h] [rbp-A8h] BYREF
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h] BYREF

  v4 = &retaddr;
  v5 = a1 + 1;
  v6 = *a1;
  v10 = (__m128)DirectX::g_XMZero;
  v11 = (__m128)DirectX::g_XMZero;
  v12 = (__m128)DirectX::g_XMZero;
  v13 = *((_DWORD *)a1 + 10) >> 1;
  v14 = _mm_shuffle_ps((__m128)*((unsigned int *)a1 + 11), (__m128)*((unsigned int *)a1 + 11), 0);
  if ( a3 )
  {
    v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v11 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]), _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v12 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]), _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v15 = _xmm;
  if ( a3 && a4 )
  {
    LOWORD(v4) = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v41, a4);
    v15 = v41;
  }
  v16 = *((_DWORD *)a1 + 5);
  v17 = 0;
  v18 = (__m128)a2[5];
  v42[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v19 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps(v18, (__m128)0LL));
  v20 = (__m128)a2[13];
  v42[1] = v19;
  for ( v42[2] = _mm_unpacklo_ps(
                   _mm_unpacklo_ps((__m128)a2[12], (__m128)(unsigned int)FLOAT_1_0),
                   _mm_unpacklo_ps(v20, (__m128)0LL)); v17 < v16; *(_WORD *)(v22 + 30) = (_WORD)v4 )
  {
    v21 = *((_DWORD *)a1 + 16);
    v22 = a1[7] + (int)((v17 + 1) * v21);
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v42,
      *v5 + v17 * v5[2],
      *v5 + v17 * v5[2],
      *v5 + v5[2] * (v17 + 1),
      v13,
      a1[7] + (int)(v17 * v21));
    LODWORD(v23) = _mm_andnot_ps((__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask, v14).m128_u32[0] | `DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask & DirectX::g_XMOne;
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v42,
      v25,
      v24,
      v25,
      v13,
      v22);
    v29 = *(__m128 *)(v6 + 16 * ((unsigned __int64)v28 >> 1));
    v30 = v29;
    if ( a3 )
    {
      v30 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v29, v29, 85), v11), v12),
              _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v10));
      v31 = _mm_shuffle_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v29, v29, 255), v11), v12),
                _mm_mul_ps(_mm_shuffle_ps(v29, v29, 170), v10)),
              DirectX::g_XMZero,
              228);
    }
    else
    {
      v31 = (__m128)_mm_unpackhi_pd((__m128d)v29, DirectX::g_XMZero);
    }
    *(__m128 *)(v27 + 16) = _mm_shuffle_ps(v30, DirectX::g_XMZero, 228);
    *(_OWORD *)(v27 + 32) = v15;
    *(__m128 *)(v22 + 16) = v31;
    *(_OWORD *)(v22 + 32) = v15;
    v32 = DirectX::PackedVector::XMConvertFloatToHalf(v26, v23);
    *(_WORD *)(v33 + 28) = v32;
    v35 = DirectX::PackedVector::XMConvertFloatToHalf(v34, v23);
    *(_WORD *)(v36 + 30) = v35;
    *(_WORD *)(v22 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v37, v23);
    LOWORD(v4) = DirectX::PackedVector::XMConvertFloatToHalf(v38, v23);
    v17 = v39 + 2;
  }
  return (__int16)v4;
}

/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18000D3E8
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000D1D8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x18000D600 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@T__m128@@1IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18000D680 (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Vert.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18000D6E4 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        CMILMatrix *a4)
{
  _UNKNOWN **v4; // rax
  _DWORD *v5; // r15
  __int64 v6; // r12
  int v8; // r14d
  __int128 v11; // xmm7
  unsigned int v12; // r11d
  __int128 v13; // xmm3
  unsigned int v14; // r13d
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rbx
  int v18; // r8d
  int v19; // r9d
  DirectX::PackedVector *v20; // rcx
  unsigned int v21; // r11d
  __m128 v22; // xmm6
  __m128 v23; // xmm5
  __m128 v24; // xmm4
  __m128 v25; // xmm3
  __m128 v26; // xmm1
  __m128 v27; // xmm2
  DirectX::PackedVector *v28; // rcx
  DirectX::PackedVector *v29; // rcx
  DirectX::PackedVector *v30; // rcx
  int v31; // r11d
  __int128 v33; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v34[3]; // [rsp+40h] [rbp-78h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF

  v4 = &retaddr;
  v5 = a1 + 1;
  v6 = *a1;
  v8 = *((_DWORD *)a1 + 10) >> 1;
  v11 = _xmm;
  if ( a3 && a4 )
  {
    LOWORD(v4) = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v33, a4);
    v11 = v33;
  }
  v12 = 0;
  v13 = a2[2];
  v14 = *((_DWORD *)a1 + 5);
  v34[0] = *a2;
  v34[2] = _mm_movelh_ps((__m128)a2[6], (__m128)_xmm);
  v34[1] = v13;
  if ( v14 )
  {
    do
    {
      v15 = *((_DWORD *)a1 + 16);
      v16 = a1[7] + (int)((v12 + 1) * v15);
      v17 = a1[7] + (int)(v12 * v15);
      VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v34,
        *v5 + v12 * v5[2],
        v12 + 1,
        *v5 + v5[2] * (v12 + 1),
        v8,
        v17);
      VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v34,
        v19,
        v18,
        v19,
        v8,
        v16);
      v22 = *(__m128 *)(v6 + 16 * ((unsigned __int64)v21 >> 1));
      if ( a3 )
      {
        v23 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
        v24 = _mm_movelh_ps((__m128)a3[2], (__m128)*((unsigned int *)a3 + 6));
        v25 = _mm_movelh_ps((__m128)a3[6], (__m128)*((unsigned int *)a3 + 14));
        v26 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v22, v22, 85), v24), v25),
                _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v23));
        v27 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v22, v22, 255), v24), v25),
                _mm_mul_ps(_mm_shuffle_ps(v22, v22, 170), v23));
      }
      else
      {
        v26 = _mm_shuffle_ps(v22, DirectX::g_XMZero, 228);
        v27 = (__m128)_mm_unpackhi_pd((__m128d)v22, DirectX::g_XMZero);
      }
      *(__m128 *)(v17 + 16) = v26;
      *(_OWORD *)(v17 + 32) = v11;
      *(__m128 *)(v16 + 16) = v27;
      *(_OWORD *)(v16 + 32) = v11;
      *(_WORD *)(v17 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v20, v26.m128_f32[0]);
      *(_WORD *)(v17 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v28, v26.m128_f32[0]);
      *(_WORD *)(v16 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v29, v26.m128_f32[0]);
      LOWORD(v4) = DirectX::PackedVector::XMConvertFloatToHalf(v30, v26.m128_f32[0]);
      v12 = v31 + 2;
      *(_WORD *)(v16 + 30) = (_WORD)v4;
    }
    while ( v12 < v14 );
  }
  return (__int16)v4;
}

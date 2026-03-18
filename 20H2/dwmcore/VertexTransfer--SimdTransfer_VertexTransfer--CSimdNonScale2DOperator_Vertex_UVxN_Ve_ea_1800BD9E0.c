/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BD9E0
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800845B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@T__m128@@1IPEAU3@@Z @ 0x1800BDBB0 (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQX.c)
 */

_UNKNOWN **__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2,
        int a3)
{
  _UNKNOWN **result; // rax
  unsigned int v4; // esi
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm2
  unsigned int v11; // esi
  __int64 v12; // rbx
  int v13; // r10d
  int v14; // r11d
  int v15; // r8d
  __int64 v16; // r9
  __m128 v17[3]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 20);
  v8 = (__m128)a2[5];
  v17[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v9 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps(v8, (__m128)0LL));
  v10 = (__m128)a2[13];
  v17[1] = v9;
  v11 = v4 >> 1;
  v17[2] = _mm_unpacklo_ps(
             _mm_unpacklo_ps((__m128)a2[12], (__m128)(unsigned int)FLOAT_1_0),
             _mm_unpacklo_ps(v10, (__m128)0LL));
  if ( v6 )
  {
    do
    {
      v12 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v5 + 1));
      VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        (unsigned int)v17,
        *(_DWORD *)(a1 + 8) + v5 * *(_DWORD *)(a1 + 16),
        a3,
        *(_QWORD *)(a1 + 56),
        v11,
        *(_QWORD *)(a1 + 56) + (int)(v5 * *(_DWORD *)(a1 + 64)));
      result = (_UNKNOWN **)VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
                              (unsigned int)v17,
                              v12,
                              v15,
                              v16,
                              v11,
                              v16 + v14 * v13);
      v5 += 2;
    }
    while ( v5 < v6 );
  }
  return result;
}

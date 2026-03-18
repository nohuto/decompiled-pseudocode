/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BB0BC
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180065760 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU3@@Z @ 0x1800BB2B0 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEB.c)
 */

__int64 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        int a4)
{
  unsigned int v4; // r8d
  unsigned int v5; // r12d
  __m128 v7; // xmm0
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm2
  __int64 result; // rax
  unsigned int v12; // r12d
  unsigned int v13; // r14d
  int v14; // ebp
  int v15; // edi
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r15
  int v19; // r9d
  int v20; // [rsp+20h] [rbp-98h]
  int v21; // [rsp+20h] [rbp-98h]
  __m128 v22[3]; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+D0h] [rbp+18h]
  unsigned int v24; // [rsp+D8h] [rbp+20h]

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 40);
  v7 = (__m128)a2[4];
  v8 = (__m128)a2[5];
  v22[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v9 = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, v7), _mm_unpacklo_ps(v8, v8));
  v10 = (__m128)a2[13];
  v22[1] = v9;
  v22[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v10, (__m128)0LL));
  result = *(unsigned int *)(a1 + 20);
  v12 = v5 >> 1;
  v23 = result;
  v24 = 0;
  if ( (_DWORD)result )
  {
    do
    {
      v13 = v4 + 1;
      v14 = *(_DWORD *)(a1 + 64);
      v15 = *(_DWORD *)(a1 + 32);
      v16 = *(_QWORD *)(a1 + 56);
      v17 = *(_QWORD *)(a1 + 24);
      v18 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v4 + 1));
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        (unsigned int)v22,
        *(_DWORD *)(a1 + 8) + v4 * *(_DWORD *)(a1 + 16),
        v17 + v4 * v15,
        a4,
        v20,
        v12,
        v16 + (int)(v4 * v14));
      result = VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
                 (unsigned int)v22,
                 v18,
                 (unsigned int)v17 + v13 * v15,
                 v19,
                 v21,
                 v12,
                 v16 + (int)(v13 * v14));
      v4 = v24 + 2;
      v24 = v4;
    }
    while ( v4 < v23 );
  }
  return result;
}

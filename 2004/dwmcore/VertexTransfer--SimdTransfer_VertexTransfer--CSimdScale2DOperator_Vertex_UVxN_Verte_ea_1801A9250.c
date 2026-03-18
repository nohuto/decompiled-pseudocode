/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A9250
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180065760 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU3@@Z @ 0x1800BB2B0 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEB.c)
 */

__m128 *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r12d
  __m128 v5; // xmm0
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 *result; // rax
  unsigned int v10; // r12d
  unsigned int v11; // r14d
  int v12; // ebp
  int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // rbx
  __m128 *v16; // rdx
  __m128 *v17; // r15
  int v18; // [rsp+20h] [rbp-98h]
  int v19; // [rsp+20h] [rbp-98h]
  __m128 v20[3]; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v21; // [rsp+D0h] [rbp+18h]
  unsigned int v22; // [rsp+D8h] [rbp+20h]

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 40);
  v5 = (__m128)a2[4];
  v6 = (__m128)a2[5];
  v20[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v7 = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, v5), _mm_unpacklo_ps(v6, v6));
  v8 = (__m128)a2[13];
  v20[1] = v7;
  v20[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v8, (__m128)0LL));
  result = (__m128 *)*(unsigned int *)(a1 + 20);
  v10 = v3 >> 1;
  v21 = (unsigned int)result;
  v22 = 0;
  if ( (_DWORD)result )
  {
    do
    {
      v11 = v2 + 1;
      v12 = *(_DWORD *)(a1 + 64);
      v13 = *(_DWORD *)(a1 + 32);
      v14 = *(_QWORD *)(a1 + 56);
      v15 = *(_QWORD *)(a1 + 24);
      v16 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(v2 * *(_DWORD *)(a1 + 16)));
      v17 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v2 + 1)));
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        v20,
        v16,
        (__m128 *)(v15 + (int)(v2 * v13)),
        *(double *)v16->m128_u64,
        v18,
        v10,
        (__m128 *)(v14 + (int)(v2 * v12)));
      result = VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
                 v20,
                 v17,
                 (__m128 *)(v15 + (int)(v11 * v13)),
                 *(double *)v17->m128_u64,
                 v19,
                 v10,
                 (__m128 *)(v14 + (int)(v11 * v12)));
      v2 = v22 + 2;
      v22 = v2;
    }
    while ( v2 < v21 );
  }
  return result;
}

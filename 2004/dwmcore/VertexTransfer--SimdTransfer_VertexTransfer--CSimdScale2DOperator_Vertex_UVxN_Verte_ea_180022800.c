/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180022800
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180022410 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x180023144 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18002320C (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1800233AC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  __m128 v6; // xmm7
  __m128 v8; // xmm8
  unsigned int v9; // r12d
  __m128 v10; // xmm9
  DirectX::PackedVector *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r12d
  __int128 v14; // xmm10
  unsigned int v15; // r13d
  unsigned int v16; // eax
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  __m128 v20; // xmm2
  int v21; // edi
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rbp
  int v25; // r9d
  __m128 v26; // xmm6
  __m128 v27; // xmm2
  __m128 v28; // xmm3
  __int64 v29; // r9
  unsigned __int16 v30; // ax
  __int64 v31; // r9
  DirectX::PackedVector *v32; // rcx
  unsigned __int16 v33; // ax
  __int64 v34; // r9
  DirectX::PackedVector *v35; // rcx
  DirectX::PackedVector *v36; // rcx
  int v38; // [rsp+20h] [rbp-E8h]
  int v39; // [rsp+20h] [rbp-E8h]
  __int128 v40; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v41[8]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v42; // [rsp+110h] [rbp+8h]
  __int64 v43; // [rsp+118h] [rbp+10h]
  DirectX::PackedVector *v44; // [rsp+120h] [rbp+18h]

  v6 = (__m128)DirectX::g_XMZero;
  v8 = (__m128)DirectX::g_XMZero;
  v9 = *(_DWORD *)(a1 + 40);
  v10 = (__m128)DirectX::g_XMZero;
  v11 = *(DirectX::PackedVector **)a1;
  v12 = a1 + 8;
  v13 = v9 >> 1;
  v44 = v11;
  if ( a3 )
  {
    v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v8 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]), _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]), _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v14 = _xmm;
  if ( a3 && a4 )
  {
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v40, a4);
    v14 = v40;
    v12 = a1 + 8;
  }
  v15 = 0;
  v16 = *(_DWORD *)(a1 + 20);
  v17 = (__m128)a2[4];
  v18 = (__m128)a2[5];
  v41[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v19 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, v17), _mm_unpacklo_ps(v18, v18));
  v20 = (__m128)a2[13];
  v41[1] = v19;
  v41[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v20, (__m128)0LL));
  v42 = v16;
  if ( v16 )
  {
    do
    {
      v21 = *(_DWORD *)(a1 + 32);
      v22 = *(_QWORD *)(a1 + 24);
      v23 = *(_QWORD *)v12 + (int)(v15 * *(_DWORD *)(v12 + 8));
      v24 = *(_QWORD *)v12 + (int)(*(_DWORD *)(v12 + 8) * (v15 + 1));
      v43 = *(_QWORD *)(a1 + 56) + (int)((v15 + 1) * *(_DWORD *)(a1 + 64));
      *(_QWORD *)&v40 = *(_QWORD *)(a1 + 56) + (int)(v15 * *(_DWORD *)(a1 + 64));
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v41,
        v23,
        v22 + v15 * v21,
        v40,
        v38,
        v13,
        v40);
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v41,
        v24,
        v22 + (v15 + 1) * v21,
        v25,
        v39,
        v13,
        v43);
      v26 = *((__m128 *)v44 + ((unsigned __int64)v15 >> 1));
      v27 = v26;
      if ( a3 )
      {
        v27 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 85), v8), v10),
                _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v6));
        v28 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 255), v8), v10),
                  _mm_mul_ps(_mm_shuffle_ps(v26, v26, 170), v6)),
                DirectX::g_XMZero,
                228);
      }
      else
      {
        v28 = (__m128)_mm_unpackhi_pd((__m128d)v26, DirectX::g_XMZero);
      }
      v29 = v40;
      *(__m128 *)(v40 + 16) = _mm_shuffle_ps(v27, DirectX::g_XMZero, 228);
      *(_OWORD *)(v29 + 32) = v14;
      *(__m128 *)(v43 + 16) = v28;
      *(_OWORD *)(v43 + 32) = v14;
      v30 = DirectX::PackedVector::XMConvertFloatToHalf(v44, 0.0);
      *(_WORD *)(v31 + 28) = v30;
      v33 = DirectX::PackedVector::XMConvertFloatToHalf(v32, 0.0);
      *(_WORD *)(v34 + 30) = v33;
      *(_WORD *)(v43 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v35, 0.0);
      LOWORD(v16) = DirectX::PackedVector::XMConvertFloatToHalf(v36, 0.0);
      v15 += 2;
      *(_WORD *)(v43 + 30) = v16;
      v12 = a1 + 8;
    }
    while ( v15 < v42 );
  }
  return v16;
}

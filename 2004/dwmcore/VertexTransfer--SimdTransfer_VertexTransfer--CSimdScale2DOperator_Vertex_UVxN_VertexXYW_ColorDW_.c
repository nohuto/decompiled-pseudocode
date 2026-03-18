/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180017704
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180022410 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x180023144 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18002320C (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1800233AC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  __m128 v6; // xmm7
  __m128 v8; // xmm8
  __m128 v9; // xmm9
  __m128 v10; // xmm10
  int v11; // r10d
  DirectX::PackedVector *v12; // rax
  __int64 v13; // rcx
  __m128 v14; // xmm10
  __int128 v15; // xmm11
  unsigned int v16; // r13d
  unsigned int v17; // eax
  __m128 v18; // xmm0
  __m128 v19; // xmm2
  __m128 v20; // xmm3
  __m128 v21; // xmm2
  int v22; // edi
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // r12
  float v26; // xmm1_4
  int v27; // r9d
  __m128 v28; // xmm6
  __m128 v29; // xmm2
  __m128 v30; // xmm3
  DirectX::PackedVector *v31; // rcx
  DirectX::PackedVector *v32; // rcx
  DirectX::PackedVector *v33; // rcx
  int v35; // [rsp+20h] [rbp-108h]
  int v36; // [rsp+20h] [rbp-108h]
  DirectX::PackedVector *v37; // [rsp+40h] [rbp-E8h]
  __int128 v38; // [rsp+48h] [rbp-E0h] BYREF
  _OWORD v39[9]; // [rsp+60h] [rbp-C8h] BYREF
  int v40; // [rsp+130h] [rbp+8h]
  unsigned int v41; // [rsp+138h] [rbp+10h]
  __int64 v42; // [rsp+140h] [rbp+18h]

  v6 = (__m128)DirectX::g_XMZero;
  v8 = (__m128)DirectX::g_XMZero;
  v9 = (__m128)DirectX::g_XMZero;
  v10 = (__m128)*(unsigned int *)(a1 + 44);
  v11 = *(_DWORD *)(a1 + 40) >> 1;
  v12 = *(DirectX::PackedVector **)a1;
  v13 = a1 + 8;
  v37 = v12;
  v40 = v11;
  v14 = _mm_shuffle_ps(v10, v10, 0);
  if ( a3 )
  {
    v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v8 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]), _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v9 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]), _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v15 = _xmm;
  if ( a3 && a4 )
  {
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v38, a4);
    v11 = v40;
    v13 = a1 + 8;
    v15 = v38;
  }
  v16 = 0;
  v17 = *(_DWORD *)(a1 + 20);
  v18 = (__m128)a2[4];
  v19 = (__m128)a2[5];
  v39[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v20 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, v18), _mm_unpacklo_ps(v19, v19));
  v21 = (__m128)a2[13];
  v39[1] = v20;
  v39[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v21, (__m128)0LL));
  v41 = v17;
  if ( v17 )
  {
    do
    {
      v22 = *(_DWORD *)(a1 + 32);
      v23 = *(_QWORD *)(a1 + 24);
      v24 = *(_QWORD *)v13 + (int)(*(_DWORD *)(v13 + 8) * (v16 + 1));
      v25 = *(_QWORD *)(a1 + 56) + (int)(v16 * *(_DWORD *)(a1 + 64));
      v42 = *(_QWORD *)(a1 + 56) + (int)((v16 + 1) * *(_DWORD *)(a1 + 64));
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v39,
        *(_DWORD *)v13 + v16 * *(_DWORD *)(v13 + 8),
        v23 + v16 * v22,
        (_DWORD)a4,
        v35,
        v11,
        v25);
      LODWORD(v26) = _mm_andnot_ps(
                       (__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask,
                       v14).m128_u32[0] | `DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask & DirectX::g_XMOne;
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v39,
        v24,
        v23 + (v16 + 1) * v22,
        v27,
        v36,
        v40,
        v42);
      v28 = *((__m128 *)v37 + ((unsigned __int64)v16 >> 1));
      v29 = v28;
      if ( a3 )
      {
        v29 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v28, v28, 85), v8), v9),
                _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v6));
        v30 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v28, v28, 255), v8), v9),
                  _mm_mul_ps(_mm_shuffle_ps(v28, v28, 170), v6)),
                DirectX::g_XMZero,
                228);
      }
      else
      {
        v30 = (__m128)_mm_unpackhi_pd((__m128d)v28, DirectX::g_XMZero);
      }
      *(__m128 *)(v25 + 16) = _mm_shuffle_ps(v29, DirectX::g_XMZero, 228);
      *(_OWORD *)(v25 + 32) = v15;
      *(__m128 *)(v42 + 16) = v30;
      *(_OWORD *)(v42 + 32) = v15;
      *(_WORD *)(v25 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v37, v26);
      *(_WORD *)(v25 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v31, v26);
      *(_WORD *)(v42 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v32, v26);
      LOWORD(v17) = DirectX::PackedVector::XMConvertFloatToHalf(v33, v26);
      v11 = v40;
      v13 = a1 + 8;
      v16 += 2;
      *(_WORD *)(v42 + 30) = v17;
    }
    while ( v16 < v41 );
  }
  return v17;
}

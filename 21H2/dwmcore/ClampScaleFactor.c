/*
 * XREFs of ClampScaleFactor @ 0x1801A3708
 * Callers:
 *     ?InitializeInstanced@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NW4Enum@ParticleSortMode@@@Z @ 0x1801A3850 (-InitializeInstanced@CDrawListPrimitive@@IEAAXAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_Co.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ClampScaleFactor(float *a1)
{
  float v1; // xmm1_4

  if ( *a1 < 0.0049999999 )
    return _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  if ( *a1 > 200.0 )
    return _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  v1 = a1[1];
  if ( v1 < 0.0049999999 || v1 > 200.0 )
    return _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  else
    return *(_QWORD *)a1;
}

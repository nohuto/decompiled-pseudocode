/*
 * XREFs of ?Transpose@CMILMatrix@@QEAAXXZ @ 0x180021BC4
 * Callers:
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x18000BD18 (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x1800114E4 (-UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180021864 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Transpose(__m128 *this)
{
  __m128 v1; // xmm0
  __m128 v2; // xmm1
  __m128 v3; // xmm4
  __m128 v4; // xmm2
  __m128 v5; // xmm3
  __m128 v6; // xmm4
  __m128 v7; // xmm0
  __m128 v8; // xmm2

  v1 = this[1];
  v2 = this[3];
  v3 = *this;
  v4 = this[2];
  this[4].m128_i8[0] &= 3u;
  this[4].m128_i8[1] = 0;
  v5 = _mm_shuffle_ps(v3, v1, 68);
  v6 = _mm_shuffle_ps(v3, v1, 238);
  v7 = _mm_shuffle_ps(v4, v2, 68);
  v8 = _mm_shuffle_ps(v4, v2, 238);
  *this = _mm_shuffle_ps(v5, v7, 136);
  this[1] = _mm_shuffle_ps(v5, v7, 221);
  this[2] = _mm_shuffle_ps(v6, v8, 136);
  this[3] = _mm_shuffle_ps(v6, v8, 221);
}

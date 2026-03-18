/*
 * XREFs of ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x1801A202C
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801A173C (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x1800AD764 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x1800AD78C (-SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall Mesh::MeshGraph::ComputeNormalizedLine(Mesh::Line2d *a1, _QWORD *a2, const struct D2D_VECTOR_2F *a3)
{
  __int64 v3; // rcx
  __m128 v4; // xmm5
  float *v5; // r9
  float v6; // xmm0_4
  __m128 v7; // xmm0
  struct D2D_VECTOR_2F v8; // xmm0_8
  __m128 v9; // xmm1
  __m128 v10; // xmm3
  struct D2D_VECTOR_2F v12; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = *a2;
  Mesh::Line2d::SetDirection(a1, a3);
  v4.m128_i32[0] = 0;
  if ( !*(_BYTE *)(v3 + 17) && !*(_BYTE *)(v3 + 16) )
  {
    v6 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)v3);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - v4.m128_f32[0]) & _xmm) <= 0.000099999997 )
    {
      if ( v4.m128_f32[0] <= *v5 )
        v7 = (__m128)(unsigned int)FLOAT_1_0;
      else
        v7 = (__m128)LODWORD(FLOAT_N1_0);
      v8 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps(v7, v4).m128_u64[0];
LABEL_13:
      v12 = v8;
      Mesh::Line2d::SetDirection((Mesh::Line2d *)v3, &v12);
      goto LABEL_14;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v6) & _xmm) - 1.4142135) & _xmm) <= 0.000099999997 )
    {
      if ( v4.m128_f32[0] <= v5[1] )
        v9 = (__m128)(unsigned int)FLOAT_1_0;
      else
        v9 = (__m128)LODWORD(FLOAT_N1_0);
      v8 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps(v4, v9).m128_u64[0];
      goto LABEL_13;
    }
  }
LABEL_14:
  v10 = (__m128)*(unsigned int *)(v3 + 8);
  if ( v4.m128_f32[0] > v10.m128_f32[0] || v10.m128_f32[0] == v4.m128_f32[0] && v4.m128_f32[0] >= *(float *)(v3 + 12) )
  {
    v12 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps(
                                  _mm_xor_ps(v10, (__m128)_xmm),
                                  _mm_xor_ps((__m128)*(unsigned int *)(v3 + 12), (__m128)_xmm)).m128_u64[0];
    Mesh::Line2d::SetDirection((Mesh::Line2d *)v3, &v12);
  }
  return v3;
}

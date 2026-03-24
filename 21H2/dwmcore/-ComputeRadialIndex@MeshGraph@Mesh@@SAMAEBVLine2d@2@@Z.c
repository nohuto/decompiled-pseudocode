/*
 * XREFs of ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x1800BB334
 * Callers:
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800BA950 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801A031C (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x1801A0C0C (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall Mesh::MeshGraph::ComputeRadialIndex(const struct Mesh::Line2d *a1)
{
  float v1; // xmm2_4
  float v3; // xmm1_4

  if ( *((_BYTE *)a1 + 16) )
    return FLOAT_1_4142135;
  if ( *((_BYTE *)a1 + 17) )
    return 0.0;
  LODWORD(v1) = *((_DWORD *)a1 + 3) & _xmm;
  LODWORD(v3) = *((_DWORD *)a1 + 2) & _xmm;
  if ( v3 <= v1 )
    v1 = 1.4142135 - v3;
  if ( (float)(*((float *)a1 + 3) * *((float *)a1 + 2)) < 0.0 )
    LODWORD(v1) ^= _xmm;
  return v1;
}

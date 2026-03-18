/*
 * XREFs of ?AreAllCornerRadiiEqual@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800575EC
 * Callers:
 *     ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@@Z @ 0x180057488 (-TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBU.c)
 *     ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800F5A24 (-IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CRoundedRectangleGeometryData::AreAllCornerRadiiEqual(CRoundedRectangleGeometryData *this)
{
  float *v1; // rax
  unsigned int v2; // edx

  if ( *((_BYTE *)this + 52) )
    return 1;
  v1 = (float *)((char *)this + 28);
  v2 = 1;
  while ( *((float *)this + 4) == *(v1 - 1) && *((float *)this + 5) == *v1 )
  {
    ++v2;
    v1 += 2;
    if ( v2 >= 4 )
      return 1;
  }
  return 0;
}

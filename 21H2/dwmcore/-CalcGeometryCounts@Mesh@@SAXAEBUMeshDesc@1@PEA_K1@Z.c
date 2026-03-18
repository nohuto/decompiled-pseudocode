/*
 * XREFs of ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z @ 0x1800DB390
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800AB300 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?CalcGeometryCountsForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEA_K1@Z @ 0x1801E8640 (-CalcGeometryCountsForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEA_K1@Z.c)
 * Callees:
 *     ?CalcGeometryCountsForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEA_K1@Z @ 0x1801E8640 (-CalcGeometryCountsForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEA_K1@Z.c)
 */

void __fastcall Mesh::CalcGeometryCounts(const struct Mesh::MeshDesc *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __int64 v3; // r9
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned int v11; // edi
  __int64 v12; // r10
  _BOOL8 v13; // rcx
  __int64 v14; // rcx

  v3 = 0LL;
  if ( *((_BYTE *)a1 + 40) )
  {
    Mesh::CalcGeometryCountsForRectangle(a1, a2, a3);
  }
  else
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = 0LL;
    if ( v6 >= 3 )
    {
      v8 = *((_BYTE *)a1 + 41);
      v9 = (v6 - 2) & -(__int64)(v8 != 0);
      v7 = v6 & -(__int64)(v8 != 0);
      if ( *((_BYTE *)a1 + 42) )
      {
        v10 = *((_QWORD *)a1 + 3);
        v11 = 0;
        v12 = 0LL;
        v13 = *(_DWORD *)(v10 + 4 * v6 - 4) != 3;
        do
        {
          if ( *(_DWORD *)(v10 + 4 * v12) == 3 )
          {
            v14 = v13 + 1;
            if ( !v8 )
              v14 *= 2LL;
            v7 += v14;
            v13 = 0LL;
            v9 += 2LL;
          }
          else
          {
            v13 = 1LL;
          }
          v12 = ++v11;
        }
        while ( v11 < v6 );
      }
      v3 = 3 * v9;
    }
    *a2 = v7;
    *a3 = v3;
  }
}

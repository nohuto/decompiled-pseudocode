/*
 * XREFs of ?CalcGeometryCountsForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEA_K1@Z @ 0x1801E8640
 * Callers:
 *     ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z @ 0x1800DB390 (-CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z.c)
 * Callees:
 *     ?GetEdgeFlagsListForRectangle@Mesh@@CAXW4D2D1_EDGE_FLAGS@@PEAW42@111@Z @ 0x1800D948C (-GetEdgeFlagsListForRectangle@Mesh@@CAXW4D2D1_EDGE_FLAGS@@PEAW42@111@Z.c)
 *     ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z @ 0x1800DB390 (-CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall Mesh::CalcGeometryCountsForRectangle(
        const struct Mesh::MeshDesc *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  int v5; // ecx
  char v7; // r14
  float v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h]
  __int64 v10; // [rsp+40h] [rbp-40h]
  int *v11; // [rsp+48h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-30h]
  char v13; // [rsp+58h] [rbp-28h]
  char v14; // [rsp+59h] [rbp-27h]
  char v15; // [rsp+5Ah] [rbp-26h]
  int v16; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+64h] [rbp-1Ch] BYREF
  int v18; // [rsp+68h] [rbp-18h] BYREF
  int v19; // [rsp+6Ch] [rbp-14h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  v5 = *((_DWORD *)a1 + 6);
  if ( v5 )
  {
    v7 = *((_BYTE *)a1 + 42);
    if ( v5 == 50529027 )
    {
      if ( v7 )
      {
        *a2 = 8LL;
      }
      else if ( *((_BYTE *)a1 + 41) )
      {
        *a2 = 4LL;
      }
      if ( *((_BYTE *)a1 + 42) )
        *a3 += 24LL;
      if ( *((_BYTE *)a1 + 41) )
        *a3 += 6LL;
    }
    else
    {
      Mesh::GetEdgeFlagsListForRectangle(v5, &v16, &v17, &v18, &v19);
      v10 = 0LL;
      v12 = 0LL;
      v11 = &v16;
      v14 = *((_BYTE *)a1 + 41);
      v8 = FLOAT_0_015625;
      v13 = 0;
      v9 = 4LL;
      v15 = v7;
      Mesh::CalcGeometryCounts((const struct Mesh::MeshDesc *)&v8, a2, a3);
    }
  }
  else if ( *((_BYTE *)a1 + 41) )
  {
    *a2 = 4LL;
    *a3 = 6LL;
  }
}

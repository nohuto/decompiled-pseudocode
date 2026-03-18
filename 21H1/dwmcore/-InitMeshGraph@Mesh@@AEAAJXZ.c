/*
 * XREFs of ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x1801A4FA8
 * Callers:
 *     ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x180052734 (-GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x1800671DC (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@UVerte.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800AA9C0 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z @ 0x1801A51C0 (-RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z.c)
 */

__int64 __fastcall Mesh::InitMeshGraph(Mesh *this)
{
  const struct Mesh::MeshGraph *v2; // rdx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  char v8; // cl
  __int64 v9; // rdx
  int *v10; // rcx
  int v11; // eax

  if ( (*((_BYTE *)this + 76) & 2) != 0 )
  {
    v2 = (const struct Mesh::MeshGraph *)*((_QWORD *)this + 3);
    if ( v2 )
    {
      v3 = Mesh::RestoreCachedGraph(this, v2);
      v5 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x19Bu, 0LL);
        return v5;
      }
    }
    else
    {
      v6 = Mesh::BuildGrid(this, 0LL, *((_DWORD *)this + 12), *((_DWORD *)this + 13));
      v5 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x19Fu, 0LL);
        return v5;
      }
    }
    v8 = *((_BYTE *)this + 76);
    if ( (v8 & 0x40) != 0 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 64LL);
      if ( v9 )
      {
        v10 = (int *)((char *)this + 60);
        do
        {
          v11 = *v10++;
          *(_DWORD *)(v9 + 28) |= v11;
          v9 = *(_QWORD *)(v9 + 80);
        }
        while ( v9 != *(_QWORD *)(*((_QWORD *)this + 2) + 64LL) && v9 );
        v8 = *((_BYTE *)this + 76);
      }
    }
    *((_BYTE *)this + 76) = v8 & 0xFD;
  }
  return 0;
}

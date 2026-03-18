/*
 * XREFs of ?Compare@LinearEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z @ 0x1801A1F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::LinearEdgeList::Compare(
        Mesh::LinearEdgeList *this,
        const struct Mesh::MeshEdge *a2,
        const struct Mesh::MeshEdge *a3)
{
  float *v3; // r9
  float *v4; // r8
  float *v5; // rcx
  float v6; // xmm2_4
  float v7; // xmm3_4
  unsigned int v8; // ecx
  unsigned int v9; // eax

  v3 = (float *)*((_QWORD *)a2 + 1);
  v4 = *(float **)(*(_QWORD *)a3 + 8LL);
  v5 = *(float **)(*(_QWORD *)a2 + 8LL);
  v6 = *v5 - *v4;
  v7 = v5[1] - v4[1];
  if ( *(float *)(*(_QWORD *)v3 + 8LL) < (float)((float)(v7 * v7) + (float)(v6 * v6)) )
  {
    v8 = 1;
    if ( **(float **)v3 <= COERCE_FLOAT(LODWORD(v6) & _xmm) )
    {
      if ( v6 < 0.0 )
        return (unsigned int)-1;
    }
    else
    {
      if ( v7 < 0.0 )
        v8 = -1;
      v9 = v8;
      v8 = -v8;
      if ( v3[5] >= 0.0 )
        return v9;
    }
  }
  else
  {
    return 0;
  }
  return v8;
}

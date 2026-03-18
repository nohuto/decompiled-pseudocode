/*
 * XREFs of ??$make_unique@$$BY0A@UVertexAAOffsetDesc@Mesh@@$0A@@std@@YA?AV?$unique_ptr@$$BY0A@UVertexAAOffsetDesc@Mesh@@U?$default_delete@$$BY0A@UVertexAAOffsetDesc@Mesh@@@std@@@0@_K@Z @ 0x180014FB4
 * Callers:
 *     ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@@Z @ 0x180057488 (-TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

_QWORD *__fastcall std::make_unique<Mesh::VertexAAOffsetDesc [0],0>(_QWORD *a1, unsigned __int64 a2)
{
  SIZE_T v3; // rsi
  void *v4; // rax
  void *v5; // rbx
  _QWORD *result; // rax

  v3 = saturated_mul(a2, 0x18uLL);
  v4 = operator new(v3);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, v3);
  else
    v5 = 0LL;
  result = a1;
  *a1 = v5;
  return result;
}

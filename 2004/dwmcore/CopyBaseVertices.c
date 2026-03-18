/*
 * XREFs of CopyBaseVertices @ 0x1800BC824
 * Callers:
 *     ?GenerateGridAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x1800BC1C4 (-GenerateGridAntialiasBorder@Mesh@@AEBAX_NAEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyBaseVertices(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 i; // r8
  __int128 v5; // xmm0
  int v6; // eax
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = *((unsigned int *)a1 + 3);
  for ( i = 0LL; i < v2; *(_OWORD *)(v7 + *a1) = v5 )
  {
    v5 = *(_OWORD *)((int)i * *(_DWORD *)(a2 + 8) + *(_QWORD *)a2);
    v6 = *((_DWORD *)a1 + 2) * i++;
    v7 = v6;
    result = *a1;
  }
  return result;
}

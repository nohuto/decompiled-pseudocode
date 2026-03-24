/*
 * XREFs of PipDereferenceDependencyNode @ 0x14074CAC0
 * Callers:
 *     IoResolveDependency @ 0x1403BE1B0 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x14050C720 (PipFreeDependencyEdge.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14074B56C (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x1407CD6B0 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}

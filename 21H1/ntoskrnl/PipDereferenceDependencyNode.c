/*
 * XREFs of PipDereferenceDependencyNode @ 0x140731B9C
 * Callers:
 *     IoResolveDependency @ 0x1403BB4B0 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x140506C70 (PipFreeDependencyEdge.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140730E58 (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x1407B79F0 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}

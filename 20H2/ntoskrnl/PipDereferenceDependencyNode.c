/*
 * XREFs of PipDereferenceDependencyNode @ 0x14073D200
 * Callers:
 *     IoResolveDependency @ 0x1403BEC50 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x14050ABF0 (PipFreeDependencyEdge.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14073AD94 (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x1407C93F0 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}

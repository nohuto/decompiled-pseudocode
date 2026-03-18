/*
 * XREFs of PipDereferenceDependencyNode @ 0x140760108
 * Callers:
 *     IoResolveDependency @ 0x1403BC7D0 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x1405072C0 (PipFreeDependencyEdge.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14072C304 (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x1407BAB60 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}

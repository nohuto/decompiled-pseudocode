/*
 * XREFs of PipDereferenceDependencyNode @ 0x14084440C
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x14055FBE4 (PipFreeDependencyEdge.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x14085CA14 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}

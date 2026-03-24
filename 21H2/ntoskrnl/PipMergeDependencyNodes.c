/*
 * XREFs of PipMergeDependencyNodes @ 0x14089DEF4
 * Callers:
 *     IoResolveDependency @ 0x1403BE1B0 (IoResolveDependency.c)
 * Callees:
 *     PipMoveListEntries @ 0x14050C918 (PipMoveListEntries.c)
 *     PipDeleteDependencyNode @ 0x1407CD6B0 (PipDeleteDependencyNode.c)
 *     PipMergeDependencyEdgeList @ 0x14089DD70 (PipMergeDependencyEdgeList.c)
 */

void __fastcall PipMergeDependencyNodes(_DWORD *P, _DWORD *a2)
{
  bool v4; // zf

  ++P[22];
  ++a2[22];
  P[23] |= a2[23];
  PipMoveListEntries((_QWORD *)P + 7, (__int64)(a2 + 14));
  PipMergeDependencyEdgeList((__int64)P, (__int64)a2, 0);
  PipMergeDependencyEdgeList((__int64)P, (__int64)a2, 1);
  v4 = P[22]-- == 1;
  if ( v4 )
    PipDeleteDependencyNode(P);
  v4 = a2[22]-- == 1;
  if ( v4 )
    PipDeleteDependencyNode(a2);
}

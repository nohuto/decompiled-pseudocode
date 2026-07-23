/*
 * XREFs of PipSetDependency @ 0x14089E154
 * Callers:
 *     PipConvertResolutionsToReservations @ 0x1407CD888 (PipConvertResolutionsToReservations.c)
 *     IoReserveDependency @ 0x14089D900 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14089D9A0 (IoSetDependency.c)
 * Callees:
 *     PipAddDependencyEdgeBetweenNodes @ 0x14050C750 (PipAddDependencyEdgeBetweenNodes.c)
 *     PipQueryBindingResolution @ 0x1407B6518 (PipQueryBindingResolution.c)
 *     PipCreateDependencyNode @ 0x1407B65BC (PipCreateDependencyNode.c)
 *     PipDeleteDependencyNode @ 0x1407CD820 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipSetDependency(__int64 a1, __int64 a2)
{
  __int64 *BindingResolution; // rax
  __int64 DependencyNode; // rdi
  unsigned int v6; // esi
  __int64 *v7; // rax
  __int64 v8; // rbx
  bool v9; // zf

  BindingResolution = PipQueryBindingResolution(a1);
  DependencyNode = (__int64)BindingResolution;
  if ( BindingResolution )
  {
    ++*((_DWORD *)BindingResolution + 22);
  }
  else
  {
    DependencyNode = PipCreateDependencyNode(a1);
    if ( !DependencyNode )
      return (unsigned int)-1073741670;
  }
  v7 = PipQueryBindingResolution(a2);
  v8 = (__int64)v7;
  if ( v7 )
  {
    ++*((_DWORD *)v7 + 22);
    goto LABEL_9;
  }
  v8 = PipCreateDependencyNode(a2);
  if ( v8 )
  {
LABEL_9:
    v6 = PipAddDependencyEdgeBetweenNodes(DependencyNode, v8, a2);
    goto LABEL_10;
  }
  v6 = -1073741670;
LABEL_10:
  v9 = (*(_DWORD *)(DependencyNode + 88))-- == 1;
  if ( v9 )
    PipDeleteDependencyNode((_QWORD *)DependencyNode);
  if ( v8 )
  {
    v9 = (*(_DWORD *)(v8 + 88))-- == 1;
    if ( v9 )
      PipDeleteDependencyNode((_QWORD *)v8);
  }
  return v6;
}

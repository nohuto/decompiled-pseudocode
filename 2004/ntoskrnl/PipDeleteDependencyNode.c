/*
 * XREFs of PipDeleteDependencyNode @ 0x1407BAB60
 * Callers:
 *     PipDereferenceDependencyNode @ 0x140760108 (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x1407A20FC (PipCreateDependencyNode.c)
 *     PipDeleteAllDependencyRelations @ 0x1407BAAB0 (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14089A570 (IoDuplicateDependency.c)
 *     PipMergeDependencyEdgeList @ 0x14089AC70 (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x14089ADF4 (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x14089AEF4 (PipSetDependency.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x14089AFA4 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     PipDeleteBindingIds @ 0x1407BAC30 (PipDeleteBindingIds.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PipDeleteDependencyNode(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  _QWORD **v4; // rdx
  PVOID *v5; // rcx

  PipDeleteBindingIds();
  v2 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P
    || (v3 = (PVOID *)P[1], *v3 != P)
    || (*v3 = v2, v2[1] = v3, v4 = (_QWORD **)P[9], v4[1] != P + 9)
    || (v5 = (PVOID *)P[10], *v5 != P + 9) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  v4[1] = v5;
  ExFreePoolWithTag(P, 0x53706E50u);
}

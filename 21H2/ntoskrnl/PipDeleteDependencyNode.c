/*
 * XREFs of PipDeleteDependencyNode @ 0x14085CA14
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x14076BC20 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipDereferenceDependencyNode @ 0x14084440C (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x14084442C (PipCreateDependencyNode.c)
 *     PipDeleteAllDependencyRelations @ 0x14085C97C (PipDeleteAllDependencyRelations.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x14085CB58 (PipUnlinkDeviceObjectAndDependencyNode.c)
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 *     PipMergeDependencyEdgeList @ 0x140942B68 (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x140942CE4 (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x140942DE4 (PipSetDependency.c)
 * Callees:
 *     PipDeleteBindingIds @ 0x14085CAE8 (PipDeleteBindingIds.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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

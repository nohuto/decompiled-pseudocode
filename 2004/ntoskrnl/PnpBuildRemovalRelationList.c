/*
 * XREFs of PnpBuildRemovalRelationList @ 0x140730CCC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407303C4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopSortRelationListForRemove @ 0x140730D68 (IopSortRelationListForRemove.c)
 *     PnpProcessRelation @ 0x140731008 (PnpProcessRelation.c)
 *     IopAllocateRelationList @ 0x140732DE8 (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x140732EAC (IopFreeRelationList.c)
 */

__int64 __fastcall PnpBuildRemovalRelationList(__int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v8; // r14
  ULONG_PTR BugCheckParameter3; // rax
  void *v10; // rbx
  int v11; // edi

  v4 = *(_QWORD *)(a1 + 312);
  *a4 = 0LL;
  v8 = *(_QWORD *)(v4 + 40);
  BugCheckParameter3 = IopAllocateRelationList(a2);
  v10 = (void *)BugCheckParameter3;
  if ( !BugCheckParameter3 )
    return 3221225626LL;
  v11 = PnpProcessRelation(v8, a2, 2, a3, BugCheckParameter3);
  if ( v11 < 0 )
  {
    IopFreeRelationList(v10);
  }
  else
  {
    *a4 = v10;
    IopSortRelationListForRemove(v10);
  }
  return (unsigned int)v11;
}

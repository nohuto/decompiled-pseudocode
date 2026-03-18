/*
 * XREFs of PiEnumerateProviderListEntry @ 0x14089950C
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x140726F98 (PipCheckForUnsatisfiedDependencies.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140730E58 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerDependencyRelations @ 0x140731B04 (PiQueryPowerDependencyRelations.c)
 *     IopSortRelationListForRemove @ 0x140734850 (IopSortRelationListForRemove.c)
 *     IopCheckIfMergeRequired @ 0x1408AE1E4 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x140506A48 (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateProviderListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 0);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 32) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}

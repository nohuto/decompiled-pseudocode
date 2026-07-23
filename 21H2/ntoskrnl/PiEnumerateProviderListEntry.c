/*
 * XREFs of PiEnumerateProviderListEntry @ 0x14089DA8C
 * Callers:
 *     IopSortRelationListForRemove @ 0x1407373CC (IopSortRelationListForRemove.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140741AC8 (PipCheckForUnsatisfiedDependencies.c)
 *     PiQueryPowerDependencyRelations @ 0x14074CBE8 (PiQueryPowerDependencyRelations.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x14074CCA0 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     IopCheckIfMergeRequired @ 0x1408B2764 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14050C738 (PiListEntryToDependencyEdge.c)
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

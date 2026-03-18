/*
 * XREFs of PiEnumerateProviderListEntry @ 0x14089A82C
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x1407276C4 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x140730D68 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x1407382E8 (PiQueryPowerDependencyRelations.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x140760304 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     IopCheckIfMergeRequired @ 0x1408AF504 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x140507098 (PiListEntryToDependencyEdge.c)
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

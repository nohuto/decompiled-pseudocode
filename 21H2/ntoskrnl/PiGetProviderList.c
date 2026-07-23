/*
 * XREFs of PiGetProviderList @ 0x140741B18
 * Callers:
 *     IopSortRelationListForRemove @ 0x1407373CC (IopSortRelationListForRemove.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140741AC8 (PipCheckForUnsatisfiedDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x14074B6BC (PipNotifyDeviceDependencyList.c)
 *     PiQueryPowerDependencyRelations @ 0x14074CBE8 (PiQueryPowerDependencyRelations.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x14074CCA0 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     PnpGetDeviceDependencyList @ 0x14089E234 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x1408B2764 (IopCheckIfMergeRequired.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetProviderList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  else
    v1 = 0LL;
  if ( v1 )
    return (__int64 *)(v1 + 16);
  else
    return &PiDependencyNodeEmptyList;
}

/*
 * XREFs of PiGetProviderList @ 0x1407361A4
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x140736154 (PipCheckForUnsatisfiedDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x14073AD24 (PipNotifyDeviceDependencyList.c)
 *     PiQueryPowerDependencyRelations @ 0x14073D168 (PiQueryPowerDependencyRelations.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x14073D220 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     IopSortRelationListForRemove @ 0x14074010C (IopSortRelationListForRemove.c)
 *     PnpGetDeviceDependencyList @ 0x1408A0B04 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x1408B5034 (IopCheckIfMergeRequired.c)
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

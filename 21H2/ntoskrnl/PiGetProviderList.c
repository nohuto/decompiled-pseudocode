/*
 * XREFs of PiGetProviderList @ 0x140741958
 * Callers:
 *     IopSortRelationListForRemove @ 0x14073720C (IopSortRelationListForRemove.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140741908 (PipCheckForUnsatisfiedDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x14074B4FC (PipNotifyDeviceDependencyList.c)
 *     PiQueryPowerDependencyRelations @ 0x14074CA28 (PiQueryPowerDependencyRelations.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x14074CAE0 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     PnpGetDeviceDependencyList @ 0x14089E0D4 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x1408B2604 (IopCheckIfMergeRequired.c)
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

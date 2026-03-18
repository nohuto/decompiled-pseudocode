/*
 * XREFs of PiGetProviderList @ 0x140727714
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x1407276C4 (PipCheckForUnsatisfiedDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x14072C294 (PipNotifyDeviceDependencyList.c)
 *     IopSortRelationListForRemove @ 0x140730D68 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x1407382E8 (PiQueryPowerDependencyRelations.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x140760304 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     PnpGetDeviceDependencyList @ 0x14089AFD4 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x1408AF504 (IopCheckIfMergeRequired.c)
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

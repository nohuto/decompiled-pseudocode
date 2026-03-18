/*
 * XREFs of PiGetProviderList @ 0x140726FE8
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x140726F98 (PipCheckForUnsatisfiedDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x140730DE8 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140730E58 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerDependencyRelations @ 0x140731B04 (PiQueryPowerDependencyRelations.c)
 *     IopSortRelationListForRemove @ 0x140734850 (IopSortRelationListForRemove.c)
 *     PnpGetDeviceDependencyList @ 0x140899CB4 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x1408AE1E4 (IopCheckIfMergeRequired.c)
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

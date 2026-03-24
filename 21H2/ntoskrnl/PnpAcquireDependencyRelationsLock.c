/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x140639C1C
 * Callers:
 *     IoResolveDependency @ 0x1403BE1B0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x1406B314C (PnpDeleteAllDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736198 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x140736688 (PnpRequestDeviceRemoval.c)
 *     IopSortRelationListForRemove @ 0x14073720C (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x140737710 (PnpProcessDependencyRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140737ADC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpCheckForActiveDependencies @ 0x1407418B0 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14074B300 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14074B494 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14074B4FC (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14074B56C (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerDependencyRelations @ 0x14074CA28 (PiQueryPowerDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14089D670 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14089D7A0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14089D840 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14089E0D4 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140A53ADC (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x140639C54 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}

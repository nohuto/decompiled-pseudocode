/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x140710724
 * Callers:
 *     IoResolveDependency @ 0x1403BB4B0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14071031C (PnpDeleteAllDependencyRelations.c)
 *     PnpCheckForActiveDependencies @ 0x140726F40 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140730BEC (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140730D80 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x140730DE8 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140730E58 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerDependencyRelations @ 0x140731B04 (PiQueryPowerDependencyRelations.c)
 *     PnpProcessDependencyRelations @ 0x140732248 (PnpProcessDependencyRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14073331C (PnpQueuePendingSurpriseRemoval.c)
 *     IopSortRelationListForRemove @ 0x140734850 (IopSortRelationListForRemove.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736D5C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x14075D030 (PnpRequestDeviceRemoval.c)
 *     IoDuplicateDependency @ 0x140899250 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x140899380 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140899420 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140899CB4 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140A4C154 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x14071075C (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}

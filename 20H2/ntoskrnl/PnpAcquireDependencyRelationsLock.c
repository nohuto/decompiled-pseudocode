/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x14071FAB4
 * Callers:
 *     IoResolveDependency @ 0x1403BEC50 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14071F6AC (PnpDeleteAllDependencyRelations.c)
 *     PnpCheckForActiveDependencies @ 0x1407360FC (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14073AB28 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14073ACBC (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14073AD24 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14073AD94 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerDependencyRelations @ 0x14073D168 (PiQueryPowerDependencyRelations.c)
 *     IopSortRelationListForRemove @ 0x14074010C (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x140740610 (PnpProcessDependencyRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1407409DC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpRequestDeviceRemoval @ 0x140742898 (PnpRequestDeviceRemoval.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14076AA54 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoDuplicateDependency @ 0x1408A00A0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x1408A01D0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x1408A0270 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1408A0B04 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140A524D4 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x14071FAEC (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}

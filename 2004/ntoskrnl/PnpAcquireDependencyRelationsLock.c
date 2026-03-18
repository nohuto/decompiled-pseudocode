/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1406A5DF4
 * Callers:
 *     IoResolveDependency @ 0x1403BC7D0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x1406A59EC (PnpDeleteAllDependencyRelations.c)
 *     PnpCheckForActiveDependencies @ 0x14072766C (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14072C098 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14072C22C (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14072C294 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14072C304 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x140730D68 (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x14073126C (PnpProcessDependencyRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140731638 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpRequestDeviceRemoval @ 0x140733408 (PnpRequestDeviceRemoval.c)
 *     PiQueryPowerDependencyRelations @ 0x1407382E8 (PiQueryPowerDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14075C2E4 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoDuplicateDependency @ 0x14089A570 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14089A6A0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14089A740 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14089AFD4 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140A51E54 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x1406A5E2C (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}

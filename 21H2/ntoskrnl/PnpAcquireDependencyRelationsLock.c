/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1407756F4
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     PnpRequestDeviceRemoval @ 0x140765430 (PnpRequestDeviceRemoval.c)
 *     PnpProcessDependencyRelations @ 0x140767CF8 (PnpProcessDependencyRelations.c)
 *     IopSortRelationListForRemove @ 0x140768080 (IopSortRelationListForRemove.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14076AC70 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14076BB10 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14076BB84 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14076BC20 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpDeleteAllDependencyRelations @ 0x14077503C (PnpDeleteAllDependencyRelations.c)
 *     PnpCheckForActiveDependencies @ 0x140777C08 (PnpCheckForActiveDependencies.c)
 *     PiQueryPowerDependencyRelations @ 0x14080E218 (PiQueryPowerDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14081059C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140810CB4 (PnpQueuePendingSurpriseRemoval.c)
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x1409425A0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140942640 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140942E94 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140B1ADD8 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}

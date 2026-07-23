/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x14062EA2C
 * Callers:
 *     IoResolveDependency @ 0x1403BF8D0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14061220C (PnpDeleteAllDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736358 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x140736848 (PnpRequestDeviceRemoval.c)
 *     IopSortRelationListForRemove @ 0x1407373CC (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x1407378D0 (PnpProcessDependencyRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140737C9C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpCheckForActiveDependencies @ 0x140741A70 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14074B4C0 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14074B654 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14074B6BC (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14074B72C (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerDependencyRelations @ 0x14074CBE8 (PiQueryPowerDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14089D7D0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14089D900 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14089D9A0 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14089E234 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140A54ADC (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}

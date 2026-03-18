/*
 * XREFs of PpDevNodeUnlockTree @ 0x140710630
 * Callers:
 *     PnpUnlockDeviceActionQueue @ 0x14035FF08 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x14035FFAC (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14036BEB0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x140507290 (IoTranslateBusAddress.c)
 *     PipForDeviceNodeSubtree @ 0x1406E3860 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x1406E7960 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406EA334 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     IoGetLegacyVetoList @ 0x14070FDF0 (IoGetLegacyVetoList.c)
 *     PiGetRelatedDevice @ 0x14070FFF4 (PiGetRelatedDevice.c)
 *     PnpDeleteAllDependencyRelations @ 0x14071031C (PnpDeleteAllDependencyRelations.c)
 *     PiControlGetSetDeviceStatus @ 0x1407103A0 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x140710F30 (PiControlGetPropertyData.c)
 *     PiCMDeleteDevice @ 0x1407179FC (PiCMDeleteDevice.c)
 *     PnpRestartDeviceNode @ 0x14071D838 (PnpRestartDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x140726F40 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140730BEC (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x140730DE8 (PipNotifyDeviceDependencyList.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140730F50 (PnpReleaseDependencyRelationsLock.c)
 *     PiQueryPowerRelations @ 0x140731720 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140731B04 (PiQueryPowerDependencyRelations.c)
 *     PnpProcessDependencyRelations @ 0x140732248 (PnpProcessDependencyRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073279C (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14073331C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140733498 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopSortRelationListForRemove @ 0x140734850 (IopSortRelationListForRemove.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736D5C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDelayedRemoveWorker @ 0x140737340 (PnpDelayedRemoveWorker.c)
 *     IopQueryInterfaceRecurseUp @ 0x14074EE48 (IopQueryInterfaceRecurseUp.c)
 *     PnpRequestDeviceRemoval @ 0x14075D030 (PnpRequestDeviceRemoval.c)
 *     PpDevCfgProcessDevices @ 0x14078A78C (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407B2200 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1407B41E0 (PiPagePathSetState.c)
 *     IoDuplicateDependency @ 0x140899250 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x140899380 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140899420 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140899CB4 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140899FFC (IoLockUnlockPnpDeviceTree.c)
 *     IopRetryDeviceRemovalForReset @ 0x14089C5B0 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x14089CE60 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x14089E090 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x14089E1E4 (PnpQueuePendingEject.c)
 *     PpResetProblemDevices @ 0x14089E4D0 (PpResetProblemDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1408A6D10 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x1408AF430 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408AFC5C (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x1408B01F0 (IopWarmEjectDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x140303A00 (ExConvertExclusiveToSharedLite.c)
 */

void __fastcall PpDevNodeUnlockTree(int a1)
{
  struct _ERESOURCE *v1; // rcx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
  {
    v1 = &IopDeviceTreeLock;
LABEL_3:
    ExReleaseResourceLite(v1);
    goto LABEL_4;
  }
  v2 = a1 - 1;
  if ( !v2 || (v3 = v2 - 1) == 0 || (v4 = v3 - 1) == 0 )
  {
    ExReleaseResourceLite(&IopDeviceTreeLock);
    v1 = &PiEngineLock;
    goto LABEL_3;
  }
  if ( v4 == 1 )
    ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
LABEL_4:
  KeLeaveCriticalRegion();
}

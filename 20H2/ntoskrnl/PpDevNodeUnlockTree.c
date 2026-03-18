/*
 * XREFs of PpDevNodeUnlockTree @ 0x14071F9C0
 * Callers:
 *     PnpLockDeviceActionQueue @ 0x140362B34 (PnpLockDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x140362BAC (PnpUnlockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14036EB50 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x14050B210 (IoTranslateBusAddress.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14071DC24 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiControlGetPropertyData @ 0x14071E290 (PiControlGetPropertyData.c)
 *     IoGetLegacyVetoList @ 0x14071F180 (IoGetLegacyVetoList.c)
 *     PiGetRelatedDevice @ 0x14071F384 (PiGetRelatedDevice.c)
 *     PnpDeleteAllDependencyRelations @ 0x14071F6AC (PnpDeleteAllDependencyRelations.c)
 *     PiControlGetSetDeviceStatus @ 0x14071F730 (PiControlGetSetDeviceStatus.c)
 *     PiGetDeviceDepth @ 0x1407201F0 (PiGetDeviceDepth.c)
 *     PipForDeviceNodeSubtree @ 0x140720438 (PipForDeviceNodeSubtree.c)
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PnpRestartDeviceNode @ 0x14072D508 (PnpRestartDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x1407360FC (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14073AB28 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14073AD24 (PipNotifyDeviceDependencyList.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14073AEC8 (PnpReleaseDependencyRelationsLock.c)
 *     PiQueryPowerRelations @ 0x14073CAE4 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14073D168 (PiQueryPowerDependencyRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073F768 (PnpProcessQueryRemoveAndEject.c)
 *     IopSortRelationListForRemove @ 0x14074010C (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x140740610 (PnpProcessDependencyRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1407409DC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140740B58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpRequestDeviceRemoval @ 0x140742898 (PnpRequestDeviceRemoval.c)
 *     IopQueryInterfaceRecurseUp @ 0x1407620B8 (IopQueryInterfaceRecurseUp.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14076AA54 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDelayedRemoveWorker @ 0x14076D540 (PnpDelayedRemoveWorker.c)
 *     PpDevCfgProcessDevices @ 0x140798D9C (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407C3BA0 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1407C5BDC (PiPagePathSetState.c)
 *     IoDuplicateDependency @ 0x1408A00A0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x1408A01D0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x1408A0270 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1408A0B04 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x1408A0E4C (IoLockUnlockPnpDeviceTree.c)
 *     IopRetryDeviceRemovalForReset @ 0x1408A3400 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x1408A3CB0 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x1408A4EE0 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x1408A5034 (PnpQueuePendingEject.c)
 *     PpResetProblemDevices @ 0x1408A5320 (PpResetProblemDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1408ADB60 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x1408B6280 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408B6AAC (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x1408B7130 (IopWarmEjectDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x140364540 (ExConvertExclusiveToSharedLite.c)
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

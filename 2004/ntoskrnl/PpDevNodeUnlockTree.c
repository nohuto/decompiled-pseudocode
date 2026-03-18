/*
 * XREFs of PpDevNodeUnlockTree @ 0x1406A5D00
 * Callers:
 *     PnpLockDeviceActionQueue @ 0x1402D8314 (PnpLockDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x1402DA3D4 (PnpUnlockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14036DEC0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x1405078E0 (IoTranslateBusAddress.c)
 *     IoGetLegacyVetoList @ 0x1406A54B8 (IoGetLegacyVetoList.c)
 *     PiGetRelatedDevice @ 0x1406A56C4 (PiGetRelatedDevice.c)
 *     PnpDeleteAllDependencyRelations @ 0x1406A59EC (PnpDeleteAllDependencyRelations.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A5A70 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x140706470 (PiControlGetPropertyData.c)
 *     PipForDeviceNodeSubtree @ 0x140707250 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x14070B890 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14070E084 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiCMDeleteDevice @ 0x140719D8C (PiCMDeleteDevice.c)
 *     PnpRestartDeviceNode @ 0x14071F4B8 (PnpRestartDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x14072766C (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14072C098 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14072C294 (PipNotifyDeviceDependencyList.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14072C44C (PnpReleaseDependencyRelationsLock.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407303C4 (PnpProcessQueryRemoveAndEject.c)
 *     IopSortRelationListForRemove @ 0x140730D68 (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x14073126C (PnpProcessDependencyRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140731638 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1407317B4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpRequestDeviceRemoval @ 0x140733408 (PnpRequestDeviceRemoval.c)
 *     PiQueryPowerRelations @ 0x140737F04 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x1407382E8 (PiQueryPowerDependencyRelations.c)
 *     IopQueryInterfaceRecurseUp @ 0x1407534D8 (IopQueryInterfaceRecurseUp.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14075C2E4 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDelayedRemoveWorker @ 0x14075EED0 (PnpDelayedRemoveWorker.c)
 *     PpDevCfgProcessDevices @ 0x14078C65C (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407B5370 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1407B7350 (PiPagePathSetState.c)
 *     IoDuplicateDependency @ 0x14089A570 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14089A6A0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14089A740 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14089AFD4 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14089B31C (IoLockUnlockPnpDeviceTree.c)
 *     IopRetryDeviceRemovalForReset @ 0x14089D8D0 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x14089E180 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x14089F3B0 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x14089F504 (PnpQueuePendingEject.c)
 *     PpResetProblemDevices @ 0x14089F7F0 (PpResetProblemDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1408A8030 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x1408B0750 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408B0F7C (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x1408B1510 (IopWarmEjectDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x1403407D0 (ExConvertExclusiveToSharedLite.c)
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

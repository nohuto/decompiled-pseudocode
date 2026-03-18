/*
 * XREFs of PpDevNodeLockTree @ 0x1406A5E2C
 * Callers:
 *     PnpLockDeviceActionQueue @ 0x1402D8314 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14036DEC0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x1405078E0 (IoTranslateBusAddress.c)
 *     IoGetLegacyVetoList @ 0x1406A54B8 (IoGetLegacyVetoList.c)
 *     PiGetRelatedDevice @ 0x1406A56C4 (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A5A70 (PiControlGetSetDeviceStatus.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A5DF4 (PnpAcquireDependencyRelationsLock.c)
 *     PiControlGetPropertyData @ 0x140706470 (PiControlGetPropertyData.c)
 *     PipForDeviceNodeSubtree @ 0x140707250 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x14070B890 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14070E084 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiCMDeleteDevice @ 0x140719D8C (PiCMDeleteDevice.c)
 *     PnpRestartDeviceNode @ 0x14071F4B8 (PnpRestartDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407303C4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1407317B4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiQueryPowerRelations @ 0x140737F04 (PiQueryPowerRelations.c)
 *     IopQueryInterfaceRecurseUp @ 0x1407534D8 (IopQueryInterfaceRecurseUp.c)
 *     PnpDelayedRemoveWorker @ 0x14075EED0 (PnpDelayedRemoveWorker.c)
 *     PpDevCfgProcessDevices @ 0x14078C65C (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407B5370 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1407B7350 (PiPagePathSetState.c)
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
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 */

char __fastcall PpDevNodeLockTree(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  ULONG IsResourceAcquiredSharedLite; // edi
  ULONG i; // esi

  CurrentThread = KeGetCurrentThread();
  v2 = 1;
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
    goto LABEL_15;
  v3 = a1 - 1;
  if ( !v3 )
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
    goto LABEL_15;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( !ExAcquireResourceExclusiveLite(&PiEngineLock, 0) )
    {
      v2 = 0;
      KeLeaveCriticalRegion();
      return v2;
    }
LABEL_15:
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    return v2;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&IopDeviceTreeLock);
      for ( i = IsResourceAcquiredSharedLite; i; --i )
        ExReleaseResourceLite(&IopDeviceTreeLock);
      for ( ; IsResourceAcquiredSharedLite; --IsResourceAcquiredSharedLite )
        ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
    ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
  }
  return v2;
}

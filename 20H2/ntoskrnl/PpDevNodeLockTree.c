/*
 * XREFs of PpDevNodeLockTree @ 0x14071FAEC
 * Callers:
 *     PnpLockDeviceActionQueue @ 0x140362B34 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14036EB50 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x14050B210 (IoTranslateBusAddress.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14071DC24 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiControlGetPropertyData @ 0x14071E290 (PiControlGetPropertyData.c)
 *     IoGetLegacyVetoList @ 0x14071F180 (IoGetLegacyVetoList.c)
 *     PiGetRelatedDevice @ 0x14071F384 (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x14071F730 (PiControlGetSetDeviceStatus.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14071FAB4 (PnpAcquireDependencyRelationsLock.c)
 *     PiGetDeviceDepth @ 0x1407201F0 (PiGetDeviceDepth.c)
 *     PipForDeviceNodeSubtree @ 0x140720438 (PipForDeviceNodeSubtree.c)
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PnpRestartDeviceNode @ 0x14072D508 (PnpRestartDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 *     PiQueryPowerRelations @ 0x14073CAE4 (PiQueryPowerRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073F768 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140740B58 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopQueryInterfaceRecurseUp @ 0x1407620B8 (IopQueryInterfaceRecurseUp.c)
 *     PnpDelayedRemoveWorker @ 0x14076D540 (PnpDelayedRemoveWorker.c)
 *     PpDevCfgProcessDevices @ 0x140798D9C (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407C3BA0 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1407C5BDC (PiPagePathSetState.c)
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
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
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

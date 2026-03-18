/*
 * XREFs of PpDevNodeLockTree @ 0x14071075C
 * Callers:
 *     PnpLockDeviceActionQueue @ 0x14035FFAC (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14036BEB0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x140507290 (IoTranslateBusAddress.c)
 *     PipForDeviceNodeSubtree @ 0x1406E3860 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x1406E7960 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406EA334 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     IoGetLegacyVetoList @ 0x14070FDF0 (IoGetLegacyVetoList.c)
 *     PiGetRelatedDevice @ 0x14070FFF4 (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1407103A0 (PiControlGetSetDeviceStatus.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140710724 (PnpAcquireDependencyRelationsLock.c)
 *     PiControlGetPropertyData @ 0x140710F30 (PiControlGetPropertyData.c)
 *     PiCMDeleteDevice @ 0x1407179FC (PiCMDeleteDevice.c)
 *     PnpRestartDeviceNode @ 0x14071D838 (PnpRestartDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 *     PiQueryPowerRelations @ 0x140731720 (PiQueryPowerRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073279C (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140733498 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpDelayedRemoveWorker @ 0x140737340 (PnpDelayedRemoveWorker.c)
 *     IopQueryInterfaceRecurseUp @ 0x14074EE48 (IopQueryInterfaceRecurseUp.c)
 *     PpDevCfgProcessDevices @ 0x14078A78C (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407B2200 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1407B41E0 (PiPagePathSetState.c)
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
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
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

/*
 * XREFs of PiPnpRtlBeginOperation @ 0x140634680
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140633724 (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14063AAFC (PiDqActionDataGetRequestedProperties.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1406E6038 (PiDcHandleCustomDeviceEvent.c)
 *     PiCMDeleteDevice @ 0x14072B66C (PiCMDeleteDevice.c)
 *     PiDqIrpPropertySet @ 0x14072E3E4 (PiDqIrpPropertySet.c)
 *     PiProcessSetDeviceProblem @ 0x140731584 (PiProcessSetDeviceProblem.c)
 *     PiProcessClearDeviceProblem @ 0x140731768 (PiProcessClearDeviceProblem.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140737C58 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopRemoveDevice @ 0x1407388F4 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x1407394EC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140739754 (PipClearDevNodeProblem.c)
 *     PiProcessNewDeviceNode @ 0x140744490 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140745380 (PipEnumerateCompleted.c)
 *     PiSwPropertySet @ 0x140748358 (PiSwPropertySet.c)
 *     IopRegisterDeviceInterface @ 0x140748470 (IopRegisterDeviceInterface.c)
 *     PiProcessQueryDeviceState @ 0x140749A3C (PiProcessQueryDeviceState.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A010 (PiPnpRtlObjectEventWorker.c)
 *     PipProcessStartPhase3 @ 0x14074AB70 (PipProcessStartPhase3.c)
 *     PnpProcessTargetDeviceEvent @ 0x14074B120 (PnpProcessTargetDeviceEvent.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14074B494 (PnpNewDeviceNodeDependencyCheck.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140758F6C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDqActionDataGetChangedProperties @ 0x140771174 (PiDqActionDataGetChangedProperties.c)
 *     PpDevCfgProcessDevices @ 0x1407A32BC (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     PiProcessAddBootDevices @ 0x1407C6BAC (PiProcessAddBootDevices.c)
 *     IoReportRootDevice @ 0x1407C7E60 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x14089DD70 (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A317C (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x1408AF440 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x1408AFD5C (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x1408B01A4 (PiCMDeleteObject.c)
 *     PiInitializeDevice @ 0x1408B3C6C (PiInitializeDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitializeGenericTableAvl @ 0x140264400 (RtlInitializeGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     PiPnpRtlGetCurrentOperation @ 0x14063737C (PiPnpRtlGetCurrentOperation.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlBeginOperation(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int CurrentOperation; // eax
  unsigned int v4; // ebx
  _DWORD *v5; // rax
  char *PoolWithTag; // rax
  char *v7; // rdi
  struct _KTHREAD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  v12 = 0LL;
  CurrentOperation = PiPnpRtlGetCurrentOperation(&v12);
  v4 = CurrentOperation;
  if ( CurrentOperation == -1073741275 )
  {
    v4 = 0;
  }
  else if ( CurrentOperation < 0 )
  {
    return v4;
  }
  v5 = v12;
  if ( v12 )
  {
    ++v12[36];
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x41706E50u);
    v12 = PoolWithTag;
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    *((_DWORD *)PoolWithTag + 36) = 1;
    *((_QWORD *)PoolWithTag + 2) = CurrentThread;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(PoolWithTag + 24),
      PiPnpRtlObjectEventCompareObjects,
      PiPnpRtlOperationAllocateGenericTableEntry,
      PiPnpRtlOperationFreeGenericTableEntry,
      0LL);
    *((_QWORD *)v7 + 17) = v7 + 128;
    *((_QWORD *)v7 + 16) = v7 + 128;
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiPnpRtlActiveOperationsLock, 1u);
    v9 = PiPnpRtlActiveOperations;
    if ( *(__int64 **)(PiPnpRtlActiveOperations + 8) != &PiPnpRtlActiveOperations )
      __fastfail(3u);
    v10 = (__int64)v12;
    *(_QWORD *)v12 = PiPnpRtlActiveOperations;
    *(_QWORD *)(v10 + 8) = &PiPnpRtlActiveOperations;
    *(_QWORD *)(v9 + 8) = v10;
    PiPnpRtlActiveOperations = v10;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v5 = v12;
  }
  *a1 = v5;
  return v4;
}

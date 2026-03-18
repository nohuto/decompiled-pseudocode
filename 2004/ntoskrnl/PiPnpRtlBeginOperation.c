/*
 * XREFs of PiPnpRtlBeginOperation @ 0x1405D7FD4
 * Callers:
 *     PiDqActionDataGetRequestedProperties @ 0x1405D348C (PiDqActionDataGetRequestedProperties.c)
 *     PiDqQueryEvaluateFilter @ 0x1405D6FE0 (PiDqQueryEvaluateFilter.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140647510 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqIrpPropertySet @ 0x140714030 (PiDqIrpPropertySet.c)
 *     PiCMDeleteDevice @ 0x140719D8C (PiCMDeleteDevice.c)
 *     PiProcessSetDeviceProblem @ 0x14071F204 (PiProcessSetDeviceProblem.c)
 *     PiProcessClearDeviceProblem @ 0x14071F3E8 (PiProcessClearDeviceProblem.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140725850 (PipEnumerateCompleted.c)
 *     PiProcessQueryDeviceState @ 0x14072A788 (PiProcessQueryDeviceState.c)
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     PnpProcessTargetDeviceEvent @ 0x14072B270 (PnpProcessTargetDeviceEvent.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14072C22C (PnpNewDeviceNodeDependencyCheck.c)
 *     PipClearDevNodeProblem @ 0x14073015C (PipClearDevNodeProblem.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1407317B4 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopRemoveDevice @ 0x140732450 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x140733048 (PipSetDevNodeProblem.c)
 *     IopRegisterDeviceInterface @ 0x140734FE4 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlObjectEventWorker @ 0x140735FE0 (PiPnpRtlObjectEventWorker.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1407435BC (PiDcUpdateDeviceContainerMembership.c)
 *     PiSwPropertySet @ 0x140759D5C (PiSwPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x14075E7E4 (PiDqActionDataGetChangedProperties.c)
 *     PpDevCfgProcessDevices @ 0x14078C65C (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     PiProcessAddBootDevices @ 0x1407B40B8 (PiProcessAddBootDevices.c)
 *     IoReportRootDevice @ 0x1407B5370 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x14089AC70 (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A007C (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x1408ACC5C (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x1408AD0A4 (PiCMDeleteObject.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140202100 (RtlInitializeGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1405DACCC (PiPnpRtlGetCurrentOperation.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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

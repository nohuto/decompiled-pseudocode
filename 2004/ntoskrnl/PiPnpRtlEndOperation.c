/*
 * XREFs of PiPnpRtlEndOperation @ 0x1405D7864
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
 *     RtlIsGenericTableEmptyAvl @ 0x140201B30 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140201B40 (RtlDeleteElementGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1405D781C (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlObjectEventRelease @ 0x1405D79D4 (PiPnpRtlObjectEventRelease.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlEndOperation(PVOID **P)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rax
  PVOID *v5; // rdx
  PVOID *v6; // rax
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  HANDLE *v9; // rcx
  _QWORD *v10; // rax
  HANDLE *Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = 0LL;
  if ( (*((_DWORD *)P + 36))-- == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiPnpRtlActiveOperationsLock, 1u);
    v5 = *P;
    if ( (*P)[1] != P || (v6 = P[1], *v6 != P) )
LABEL_16:
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    while ( !RtlIsGenericTableEmptyAvl((PRTL_AVL_TABLE)(P + 3)) )
    {
      v9 = (HANDLE *)P[5][4];
      Buffer = v9;
      if ( v9[2] )
      {
        ZwClose(v9[2]);
        Buffer[2] = 0LL;
        v9 = Buffer;
      }
      PiPnpRtlObjectEventDispatch((__int64)v9);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 3), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = P + 16;
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == v7 )
        break;
      if ( (_QWORD **)v8[1] != v7 )
        goto LABEL_16;
      v10 = (_QWORD *)*v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_16;
      *v7 = v10;
      v10[1] = v7;
      Buffer = (HANDLE *)(v8 - 7);
      PiPnpRtlObjectEventRelease(v8 - 7);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}

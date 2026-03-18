/*
 * XREFs of PiPnpRtlEndOperation @ 0x14064120C
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140641B7C (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140645738 (PiDqActionDataGetRequestedProperties.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140648B00 (PiDcHandleCustomDeviceEvent.c)
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PiDqIrpPropertySet @ 0x14072A3CC (PiDqIrpPropertySet.c)
 *     PiProcessSetDeviceProblem @ 0x14072D254 (PiProcessSetDeviceProblem.c)
 *     PiProcessClearDeviceProblem @ 0x14072D438 (PiProcessClearDeviceProblem.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1407342E0 (PipEnumerateCompleted.c)
 *     PiProcessQueryDeviceState @ 0x140739218 (PiProcessQueryDeviceState.c)
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 *     PnpProcessTargetDeviceEvent @ 0x140739D00 (PnpProcessTargetDeviceEvent.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14073ACBC (PnpNewDeviceNodeDependencyCheck.c)
 *     PipClearDevNodeProblem @ 0x14073F500 (PipClearDevNodeProblem.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140740B58 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopRemoveDevice @ 0x1407417F8 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x1407424D8 (PipSetDevNodeProblem.c)
 *     IopRegisterDeviceInterface @ 0x140744474 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlObjectEventWorker @ 0x140745470 (PiPnpRtlObjectEventWorker.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14075219C (PiDcUpdateDeviceContainerMembership.c)
 *     PiSwPropertySet @ 0x14076851C (PiSwPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x14076CE54 (PiDqActionDataGetChangedProperties.c)
 *     PpDevCfgProcessDevices @ 0x140798D9C (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     PiProcessAddBootDevices @ 0x1407C28F0 (PiProcessAddBootDevices.c)
 *     IoReportRootDevice @ 0x1407C3BA0 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x1408A07A0 (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A5BAC (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x1408B278C (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x1408B2BD4 (PiCMDeleteObject.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     RtlIsGenericTableEmptyAvl @ 0x14023F7A0 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14023F7B0 (RtlDeleteElementGenericTableAvl.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     PiPnpRtlObjectEventRelease @ 0x14064117C (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlObjectEventDispatch @ 0x14064137C (PiPnpRtlObjectEventDispatch.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlEndOperation(PVOID **P)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rax
  PVOID *v5; // rdx
  PVOID *v6; // rax
  char **v7; // rdi
  char *v8; // rcx
  char *v9; // rcx
  char *v10; // rax
  char *Buffer; // [rsp+30h] [rbp+8h] BYREF

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
      v9 = (char *)P[5][4];
      Buffer = v9;
      if ( *((_QWORD *)v9 + 2) )
      {
        ZwClose(*((HANDLE *)v9 + 2));
        *((_QWORD *)Buffer + 2) = 0LL;
        v9 = Buffer;
      }
      PiPnpRtlObjectEventDispatch(v9);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 3), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = (char **)(P + 16);
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == (char *)v7 )
        break;
      if ( *((char ***)v8 + 1) != v7 )
        goto LABEL_16;
      v10 = *(char **)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 )
        goto LABEL_16;
      *v7 = v10;
      *((_QWORD *)v10 + 1) = v7;
      Buffer = v8 - 56;
      PiPnpRtlObjectEventRelease(v8 - 56);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}

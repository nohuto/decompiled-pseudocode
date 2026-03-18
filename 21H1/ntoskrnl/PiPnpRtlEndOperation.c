/*
 * XREFs of PiPnpRtlEndOperation @ 0x1406A5E98
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x140684F18 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1406A1B88 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqQueryEvaluateFilter @ 0x1406A56DC (PiDqQueryEvaluateFilter.c)
 *     PiDqIrpPropertySet @ 0x140712180 (PiDqIrpPropertySet.c)
 *     PiCMDeleteDevice @ 0x1407179FC (PiCMDeleteDevice.c)
 *     PiProcessSetDeviceProblem @ 0x14071D584 (PiProcessSetDeviceProblem.c)
 *     PiProcessClearDeviceProblem @ 0x14071D768 (PiProcessClearDeviceProblem.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x14072AA10 (PipEnumerateCompleted.c)
 *     PiSwPropertySet @ 0x14072D9E8 (PiSwPropertySet.c)
 *     IopRegisterDeviceInterface @ 0x14072DB00 (IopRegisterDeviceInterface.c)
 *     PiProcessQueryDeviceState @ 0x14072E914 (PiProcessQueryDeviceState.c)
 *     PiPnpRtlObjectEventWorker @ 0x14072EEE0 (PiPnpRtlObjectEventWorker.c)
 *     PipProcessStartPhase3 @ 0x14073045C (PipProcessStartPhase3.c)
 *     PnpProcessTargetDeviceEvent @ 0x140730A0C (PnpProcessTargetDeviceEvent.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140730D80 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140733498 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopRemoveDevice @ 0x140734134 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x140734AA4 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140736A08 (PipClearDevNodeProblem.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140741A3C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDqActionDataGetChangedProperties @ 0x14075C394 (PiDqActionDataGetChangedProperties.c)
 *     PpDevCfgProcessDevices @ 0x14078A78C (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     PiProcessAddBootDevices @ 0x1407B0F48 (PiProcessAddBootDevices.c)
 *     IoReportRootDevice @ 0x1407B2200 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x140899950 (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14089ED5C (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x1408AB93C (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x1408ABD84 (PiCMDeleteObject.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     RtlIsGenericTableEmptyAvl @ 0x1402E5420 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402E5430 (RtlDeleteElementGenericTableAvl.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1406A5E50 (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlObjectEventRelease @ 0x1406A6008 (PiPnpRtlObjectEventRelease.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlEndOperation(PVOID **P)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rax
  PVOID *v5; // rdx
  PVOID *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD **v13; // rdi
  _QWORD *v14; // rcx
  HANDLE *v15; // rcx
  _QWORD *v16; // rax
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
    while ( !RtlIsGenericTableEmptyAvl((PRTL_AVL_TABLE)(P + 3)) )
    {
      v15 = (HANDLE *)P[5][4];
      Buffer = v15;
      if ( v15[2] )
      {
        ZwClose(v15[2]);
        Buffer[2] = 0LL;
        v15 = Buffer;
      }
      PiPnpRtlObjectEventDispatch((__int64)v15);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 3), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
    v13 = P + 16;
    while ( 1 )
    {
      v14 = *v13;
      if ( *v13 == v13 )
        break;
      if ( (_QWORD **)v14[1] != v13 )
        goto LABEL_16;
      v16 = (_QWORD *)*v14;
      if ( *(_QWORD **)(*v14 + 8LL) != v14 )
        goto LABEL_16;
      *v13 = v16;
      v16[1] = v13;
      Buffer = (HANDLE *)(v14 - 7);
      PiPnpRtlObjectEventRelease(v14 - 7);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}

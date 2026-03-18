/*
 * XREFs of ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34
 * Callers:
 *     imp_WdfRequestWdmGetIrp @ 0x1C00016C0 (imp_WdfRequestWdmGetIrp.c)
 *     imp_WdfRequestGetStatus @ 0x1C0001750 (imp_WdfRequestGetStatus.c)
 *     imp_WdfRequestGetInformation @ 0x1C00017D0 (imp_WdfRequestGetInformation.c)
 *     imp_WdfRequestSend @ 0x1C0001AD0 (imp_WdfRequestSend.c)
 *     imp_WdfRequestReuse @ 0x1C0002340 (imp_WdfRequestReuse.c)
 *     imp_WdfRequestGetParameters @ 0x1C0002850 (imp_WdfRequestGetParameters.c)
 *     imp_WdfSpinLockAcquire @ 0x1C0002A70 (imp_WdfSpinLockAcquire.c)
 *     imp_WdfSpinLockRelease @ 0x1C0002B30 (imp_WdfSpinLockRelease.c)
 *     imp_WdfIoQueueGetDevice @ 0x1C0002BE0 (imp_WdfIoQueueGetDevice.c)
 *     imp_WdfTimerGetParentObject @ 0x1C0002D40 (imp_WdfTimerGetParentObject.c)
 *     imp_WdfWorkItemGetParentObject @ 0x1C0002DC0 (imp_WdfWorkItemGetParentObject.c)
 *     imp_WdfRequestGetRequestorMode @ 0x1C0002E40 (imp_WdfRequestGetRequestorMode.c)
 *     imp_WdfDeviceGetDevicePnpState @ 0x1C0002F10 (imp_WdfDeviceGetDevicePnpState.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0002FC0 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfWaitLockAcquire @ 0x1C00031D0 (imp_WdfWaitLockAcquire.c)
 *     imp_WdfRequestFormatRequestUsingCurrentType @ 0x1C00032C0 (imp_WdfRequestFormatRequestUsingCurrentType.c)
 *     imp_WdfWaitLockRelease @ 0x1C00033A0 (imp_WdfWaitLockRelease.c)
 *     imp_WdfFileObjectGetDevice @ 0x1C0003420 (imp_WdfFileObjectGetDevice.c)
 *     imp_WdfCollectionGetItem @ 0x1C0003490 (imp_WdfCollectionGetItem.c)
 *     imp_WdfFileObjectWdmGetFileObject @ 0x1C00035C0 (imp_WdfFileObjectWdmGetFileObject.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C0003620 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRequestSetCompletionRoutine @ 0x1C0003910 (imp_WdfRequestSetCompletionRoutine.c)
 *     imp_WdfCollectionGetCount @ 0x1C0003980 (imp_WdfCollectionGetCount.c)
 *     imp_WdfRegistryClose @ 0x1C0003B90 (imp_WdfRegistryClose.c)
 *     imp_WdfInterruptQueueDpcForIsr @ 0x1C0003CD0 (imp_WdfInterruptQueueDpcForIsr.c)
 *     imp_WdfInterruptReleaseLock @ 0x1C0003D40 (imp_WdfInterruptReleaseLock.c)
 *     imp_WdfInterruptAcquireLock @ 0x1C0003DF0 (imp_WdfInterruptAcquireLock.c)
 *     imp_WdfObjectDelete @ 0x1C0003EA0 (imp_WdfObjectDelete.c)
 *     imp_WdfInterruptGetDevice @ 0x1C0004040 (imp_WdfInterruptGetDevice.c)
 *     imp_WdfRequestSetInformation @ 0x1C00043C0 (imp_WdfRequestSetInformation.c)
 *     imp_WdfRequestComplete @ 0x1C0005B30 (imp_WdfRequestComplete.c)
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0007A30 (imp_WdfDeviceEnqueueRequest.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0007E10 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestGetFileObject @ 0x1C00093E0 (imp_WdfRequestGetFileObject.c)
 *     imp_WdfRegistryQueryValue @ 0x1C000A4D0 (imp_WdfRegistryQueryValue.c)
 *     imp_WdfRequestCreate @ 0x1C000B870 (imp_WdfRequestCreate.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C000BAF0 (imp_WdfRequestForwardToIoQueue.c)
 *     FxIoTargetFormatIoctl @ 0x1C000BCC0 (FxIoTargetFormatIoctl.c)
 *     imp_WdfWorkItemEnqueue @ 0x1C000C4B0 (imp_WdfWorkItemEnqueue.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C000D080 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfTimerStop @ 0x1C000D540 (imp_WdfTimerStop.c)
 *     imp_WdfTimerStart @ 0x1C000D790 (imp_WdfTimerStart.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0012D70 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     imp_WdfRequestWdmFormatUsingStackLocation @ 0x1C00168F0 (imp_WdfRequestWdmFormatUsingStackLocation.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C0016A60 (imp_WdfRequestMarkCancelableEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qDqD @ 0x1C005601C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxObjectHandleGetPtrQI(
        FxObject *Object,
        void **PPObject,
        void *Handle,
        unsigned __int16 Type,
        unsigned __int16 Offset)
{
  unsigned __int64 level; // rdi
  unsigned __int8 v8; // dl
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  const _GUID *v11; // [rsp+20h] [rbp-48h]
  FxQueryInterfaceParams params; // [rsp+50h] [rbp-18h] BYREF

  params.Object = PPObject;
  level = Type;
  params.Type = Type;
  params.Offset = Offset;
  *PPObject = 0LL;
  *(_DWORD *)(&params.Offset + 1) = 0;
  if ( Object->QueryInterface(Object, &params) < 0 )
  {
    WPP_IFR_SF_qDqD(Object->m_Globals, v8, v9, v10, v11, Handle, level, Object, Object->m_Type);
    FxVerifierBugCheckWorker(Object->m_Globals, WDF_INVALID_HANDLE, (unsigned __int64)Handle, level);
  }
}

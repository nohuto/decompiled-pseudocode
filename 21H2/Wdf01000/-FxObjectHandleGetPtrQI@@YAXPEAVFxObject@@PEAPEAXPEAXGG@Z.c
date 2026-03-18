/*
 * XREFs of ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC
 * Callers:
 *     imp_WdfSpinLockAcquire @ 0x1C0001090 (imp_WdfSpinLockAcquire.c)
 *     imp_WdfSpinLockRelease @ 0x1C0001150 (imp_WdfSpinLockRelease.c)
 *     imp_WdfCollectionGetItem @ 0x1C0001550 (imp_WdfCollectionGetItem.c)
 *     imp_WdfPdoRetrieveIdentificationDescription @ 0x1C0001650 (imp_WdfPdoRetrieveIdentificationDescription.c)
 *     imp_WdfRequestGetParameters @ 0x1C0001750 (imp_WdfRequestGetParameters.c)
 *     imp_WdfWaitLockAcquire @ 0x1C0001850 (imp_WdfWaitLockAcquire.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0001930 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C0001B40 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfIoQueueGetDevice @ 0x1C0001DD0 (imp_WdfIoQueueGetDevice.c)
 *     imp_WdfWaitLockRelease @ 0x1C0001E40 (imp_WdfWaitLockRelease.c)
 *     imp_WdfRequestFormatRequestUsingCurrentType @ 0x1C0001F10 (imp_WdfRequestFormatRequestUsingCurrentType.c)
 *     imp_WdfCollectionGetCount @ 0x1C00020B0 (imp_WdfCollectionGetCount.c)
 *     imp_WdfRequestSetCompletionRoutine @ 0x1C00021C0 (imp_WdfRequestSetCompletionRoutine.c)
 *     imp_WdfRequestGetStatus @ 0x1C0002230 (imp_WdfRequestGetStatus.c)
 *     imp_WdfIoQueueGetState @ 0x1C00022B0 (imp_WdfIoQueueGetState.c)
 *     imp_WdfFileObjectWdmGetFileObject @ 0x1C00024F0 (imp_WdfFileObjectWdmGetFileObject.c)
 *     imp_WdfRequestGetIoQueue @ 0x1C0002610 (imp_WdfRequestGetIoQueue.c)
 *     imp_WdfInterruptReleaseLock @ 0x1C00026D0 (imp_WdfInterruptReleaseLock.c)
 *     imp_WdfInterruptAcquireLock @ 0x1C0002760 (imp_WdfInterruptAcquireLock.c)
 *     imp_WdfRequestSetInformation @ 0x1C0002810 (imp_WdfRequestSetInformation.c)
 *     imp_WdfInterruptQueueDpcForIsr @ 0x1C00028C0 (imp_WdfInterruptQueueDpcForIsr.c)
 *     imp_WdfTimerGetParentObject @ 0x1C00029F0 (imp_WdfTimerGetParentObject.c)
 *     imp_WdfTimerStop @ 0x1C00036A0 (imp_WdfTimerStop.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0003A40 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     imp_WdfRequestGetFileObject @ 0x1C0004AA0 (imp_WdfRequestGetFileObject.c)
 *     FxIoTargetFormatIoctl @ 0x1C0005420 (FxIoTargetFormatIoctl.c)
 *     imp_WdfObjectDelete @ 0x1C0005A90 (imp_WdfObjectDelete.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     imp_WdfRequestCreate @ 0x1C00061C0 (imp_WdfRequestCreate.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0007410 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestComplete @ 0x1C00087D0 (imp_WdfRequestComplete.c)
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0008F10 (imp_WdfDeviceEnqueueRequest.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C000A410 (imp_WdfRequestForwardToIoQueue.c)
 *     imp_WdfRequestSend @ 0x1C000AF90 (imp_WdfRequestSend.c)
 *     imp_WdfTimerStart @ 0x1C000B860 (imp_WdfTimerStart.c)
 *     imp_WdfRequestGetInformation @ 0x1C0010490 (imp_WdfRequestGetInformation.c)
 *     imp_WdfRequestIsCanceled @ 0x1C00106F0 (imp_WdfRequestIsCanceled.c)
 *     imp_WdfDeviceWdmGetDeviceObject @ 0x1C00107B0 (imp_WdfDeviceWdmGetDeviceObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qDqD @ 0x1C006B478 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
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

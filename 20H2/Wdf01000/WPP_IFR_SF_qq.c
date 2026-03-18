/*
 * XREFs of WPP_IFR_SF_qq @ 0x1C0013E44
 * Callers:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0001D10 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C00023E0 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     imp_WdfSpinLockRelease @ 0x1C0002B30 (imp_WdfSpinLockRelease.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0004224 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000598C (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005CA0 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0008E30 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0009830 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A1C0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000C770 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C000C9D0 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C000D080 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C000D5C8 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000D7F0 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C000E170 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000FA30 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000FBEC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FEA4 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C001199C (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0013CE0 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0014000 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001444C (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014EBC (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014FE0 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C00176B0 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0017A14 (FxIoTargetSendIoctl.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0017D04 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0018430 (-_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     imp_WdfWorkItemFlush @ 0x1C00188F0 (imp_WdfWorkItemFlush.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C001919C (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00194C0 (-_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STA.c)
 *     ?SelfDestruct@FxSyncRequest@@UEAAXXZ @ 0x1C0019E70 (-SelfDestruct@FxSyncRequest@@UEAAXXZ.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002E4D0 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfDmaTransactionFreeResources @ 0x1C002F9F0 (imp_WdfDmaTransactionFreeResources.c)
 *     imp_WdfDmaTransactionSetImmediateExecution @ 0x1C0030370 (imp_WdfDmaTransactionSetImmediateExecution.c)
 *     imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x1C0030470 (imp_WdfDmaTransactionSetSingleTransferRequirement.c)
 *     imp_WdfDmaTransactionWdmGetTransferContext @ 0x1C00306D0 (imp_WdfDmaTransactionWdmGetTransferContext.c)
 *     ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C0033800 (-_AdapterControl@FxDmaPacketTransaction@@KA-AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_I.c)
 *     imp_WdfChildListRequestChildEject @ 0x1C0037AE0 (imp_WdfChildListRequestChildEject.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003B7DC (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C003E410 (-QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x1C0042CF0 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C0050AD0 (--1FxDevice@@UEAA@XZ.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x1C0053100 (--1FxDriver@@UEAA@XZ.c)
 *     ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0053600 (-Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C0053AD4 (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 *     ?MoveContexts@FxObject@@QEAAJPEAV1@@Z @ 0x1C0059798 (-MoveContexts@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z @ 0x1C005A1E0 (-ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005A318 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     FxIoTargetSendIo @ 0x1C0061EA4 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetGetDevice @ 0x1C0062C50 (imp_WdfIoTargetGetDevice.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0063100 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfIoTargetWdmGetTargetFileHandle @ 0x1C00636D0 (imp_WdfIoTargetWdmGetTargetFileHandle.c)
 *     imp_WdfIoTargetWdmGetTargetDeviceObject @ 0x1C0063B50 (imp_WdfIoTargetWdmGetTargetDeviceObject.c)
 *     imp_WdfIoTargetWdmGetTargetFileObject @ 0x1C0063C20 (imp_WdfIoTargetWdmGetTargetFileObject.c)
 *     imp_WdfIoTargetWdmGetTargetPhysicalDevice @ 0x1C0063CF0 (imp_WdfIoTargetWdmGetTargetPhysicalDevice.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0064168 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0064BA8 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x1C0064E74 (-PrintDisposeMessage@FxIoTarget@@IEAAXXZ.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C006508C (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0065438 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C006568C (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1C0065860 (-WaitForDisposeEvent@FxIoTarget@@MEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C00662CC (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C00677B8 (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpe.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0067D20 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x1C00681C0 (imp_WdfUsbTargetPipeFormatRequestForAbort.c)
 *     imp_WdfUsbTargetPipeFormatRequestForReset @ 0x1C0068350 (imp_WdfUsbTargetPipeFormatRequestForReset.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C00688D0 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C0068B40 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C00693E0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C006B130 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C006DB90 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     imp_WdfIoQueueCreate @ 0x1C0073830 (imp_WdfIoQueueCreate.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0075154 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0075EC4 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0078AC0 (-PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0078CC0 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ @ 0x1C007CA78 (-DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DEC0 (-PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?AddChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C007E8A0 (-AddChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z.c)
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C007EF30 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C007F248 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C007F6D4 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C008186C (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     ?RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C0081DF4 (-RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z.c)
 *     ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0082820 (-_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?AddDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0084378 (-AddDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z.c)
 *     ?RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0084924 (-RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z.c)
 *     ?FreezeIdleTimeoutManagementStatus@IdleTimeoutManagement@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0085BD0 (-FreezeIdleTimeoutManagementStatus@IdleTimeoutManagement@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetDelayedDeletion@FxEventQueue@@QEAAXXZ @ 0x1C008A56C (-SetDelayedDeletion@FxEventQueue@@QEAAXXZ.c)
 *     ?ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008C440 (-ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008C540 (-ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?DirectedPowerDownCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008C650 (-DirectedPowerDownCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?DirectedPowerUpCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008C6C0 (-DirectedPowerUpCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C008C730 (-PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 *     ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C008CAA0 (-StateCallback@FxPoxInterface@@CAXPEAXKK@Z.c)
 *     ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2480 (-Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2BA0 (-Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C312C (-Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C38DC (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000AA90 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00392A8 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const void *_a1,
        const void *_a2)
{
  int v11; // eax
  unsigned __int64 v12; // rbx

  v11 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v11, (flags - 1) & 0x1F) )
  {
    v12 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v12 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v12),
        0x2Bu,
        traceGuid,
        id,
        &_a1,
        8LL,
        &_a2,
        8LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 8LL, &_a2, 8LL, 0LL);
}

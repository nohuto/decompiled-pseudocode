/*
 * XREFs of WPP_IFR_SF_qdd @ 0x1C005CC6C
 * Callers:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     imp_WdfRequestSend @ 0x1C000AF90 (imp_WdfRequestSend.c)
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C000CB78 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C00105B0 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     StopIdleWorker @ 0x1C0010F38 (StopIdleWorker.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0018288 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C001AD20 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C002A3C0 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfDeviceQueryProperty @ 0x1C002A4C0 (imp_WdfDeviceQueryProperty.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x1C002A5A0 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfDeviceSetPowerCapabilities @ 0x1C002B0D0 (imp_WdfDeviceSetPowerCapabilities.c)
 *     imp_WdfDeviceSetPnpCapabilities @ 0x1C002B1D0 (imp_WdfDeviceSetPnpCapabilities.c)
 *     imp_WdfRegistryQueryString @ 0x1C002CF70 (imp_WdfRegistryQueryString.c)
 *     ?_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0030B30 (-_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     imp_WdfIoResourceListRemove @ 0x1C0034A10 (imp_WdfIoResourceListRemove.c)
 *     imp_WdfDeviceInitSetRemoveLockOptions @ 0x1C0034CB0 (imp_WdfDeviceInitSetRemoveLockOptions.c)
 *     imp_WdfIoResourceListUpdateDescriptor @ 0x1C0034D60 (imp_WdfIoResourceListUpdateDescriptor.c)
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C005F660 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     imp_WdfCompanionTargetSendTaskSynchronously @ 0x1C00604D0 (imp_WdfCompanionTargetSendTaskSynchronously.c)
 *     imp_WdfDeviceGetDeviceState @ 0x1C0063080 (imp_WdfDeviceGetDeviceState.c)
 *     imp_WdfDeviceSetDeviceState @ 0x1C0063530 (imp_WdfDeviceSetDeviceState.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0067904 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0067CC0 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0067F58 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     imp_WdfCmResourceListRemove @ 0x1C006F670 (imp_WdfCmResourceListRemove.c)
 *     imp_WdfIoResourceRequirementsListRemove @ 0x1C006FB50 (imp_WdfIoResourceRequirementsListRemove.c)
 *     imp_WdfIoTargetQueryTargetProperty @ 0x1C00737D0 (imp_WdfIoTargetQueryTargetProperty.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C0075838 (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpe.c)
 *     imp_WdfUsbTargetDeviceGetInterface @ 0x1C0078680 (imp_WdfUsbTargetDeviceGetInterface.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C007A7B0 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0080420 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C008280C (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     imp_WdfInterruptGetInfo @ 0x1C0082DC0 (imp_WdfInterruptGetInfo.c)
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1C0082F90 (imp_WdfInterruptSetExtendedPolicy.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0088464 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000B6B0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C005B6FC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qdd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const void *_a1,
        int _a2,
        unsigned int _a3)
{
  int v12; // eax
  unsigned __int64 v13; // rbx

  v12 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v12, (flags - 1) & 0x1F) )
  {
    v13 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v13 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v13),
        43LL,
        traceGuid,
        id,
        &_a1,
        8LL,
        &_a2,
        4LL,
        &_a3,
        4LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 8LL, &_a2, 4LL, &_a3, 4LL, 0LL);
}

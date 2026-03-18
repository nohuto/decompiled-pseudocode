/*
 * XREFs of WPP_IFR_SF_qqq @ 0x1C0032328
 * Callers:
 *     imp_WdfSpinLockRelease @ 0x1C0002B30 (imp_WdfSpinLockRelease.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C000D5C8 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000FA30 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000FBEC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0010170 (-DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00110C0 (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C00190D0 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0030EA0 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0032DA0 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ @ 0x1C0035310 (-PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003A32C (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C003B388 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C004FD2C (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C0058318 (-FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005A318 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C005B52C (-FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     imp_WdfUsbTargetPipeFormatRequestForRead @ 0x1C00682B0 (imp_WdfUsbTargetPipeFormatRequestForRead.c)
 *     imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C0068440 (imp_WdfUsbTargetPipeFormatRequestForUrb.c)
 *     imp_WdfUsbTargetPipeFormatRequestForWrite @ 0x1C0068670 (imp_WdfUsbTargetPipeFormatRequestForWrite.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1C00690D0 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C006A490 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007B9E0 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 *     ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x1C007D7D4 (-PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z.c)
 *     ?ForceDisconnect@FxInterrupt@@QEAAJXZ @ 0x1C0088CC8 (-ForceDisconnect@FxInterrupt@@QEAAJXZ.c)
 *     ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1C0088D58 (-ForceReconnect@FxInterrupt@@QEAAJXZ.c)
 *     ?PowerPolicyUpdateSystemWakeSource@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C008BCA4 (-PowerPolicyUpdateSystemWakeSource@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z.c)
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00C2C40 (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 * Callees:
 *     FxIFR @ 0x1C000AA90 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00392A8 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const void *_a1,
        const void *_a2,
        const void *_a3)
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
        0x2Bu,
        traceGuid,
        id,
        &_a1,
        8LL,
        &_a2,
        8LL,
        &_a3,
        8LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 8LL, &_a2, 8LL, &_a3, 8LL, 0LL);
}

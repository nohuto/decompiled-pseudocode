/*
 * XREFs of WPP_IFR_SF_qqq @ 0x1C0032BF8
 * Callers:
 *     imp_WdfSpinLockRelease @ 0x1C0002B30 (imp_WdfSpinLockRelease.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C000D5C8 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000FA30 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000FBEC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0010170 (-DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00110C0 (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C00190D0 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0031770 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0033670 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ @ 0x1C0035BE0 (-PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003ABFC (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C003BC58 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C00505FC (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C0058BF4 (-FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005ABF8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C005BE0C (-FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     imp_WdfUsbTargetPipeFormatRequestForRead @ 0x1C0068B90 (imp_WdfUsbTargetPipeFormatRequestForRead.c)
 *     imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C0068D20 (imp_WdfUsbTargetPipeFormatRequestForUrb.c)
 *     imp_WdfUsbTargetPipeFormatRequestForWrite @ 0x1C0068F50 (imp_WdfUsbTargetPipeFormatRequestForWrite.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1C00699B0 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C006AD70 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007C2C0 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 *     ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x1C007E0B4 (-PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z.c)
 *     ?ForceDisconnect@FxInterrupt@@QEAAJXZ @ 0x1C00895C8 (-ForceDisconnect@FxInterrupt@@QEAAJXZ.c)
 *     ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1C0089658 (-ForceReconnect@FxInterrupt@@QEAAJXZ.c)
 *     ?PowerPolicyUpdateSystemWakeSource@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C008C5A4 (-PowerPolicyUpdateSystemWakeSource@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z.c)
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00C6C40 (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 * Callees:
 *     FxIFR @ 0x1C000AA90 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0039B78 (FxWmiTraceMessage.c)
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

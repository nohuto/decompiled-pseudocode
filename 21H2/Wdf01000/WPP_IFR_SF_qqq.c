/*
 * XREFs of WPP_IFR_SF_qqq @ 0x1C0030348
 * Callers:
 *     imp_WdfSpinLockRelease @ 0x1C0001150 (imp_WdfSpinLockRelease.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0003728 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C5C0 (-DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C7CC (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C000EA30 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0017668 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0017820 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C00302A8 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ??1FxVerifierLock@@QEAA@XZ @ 0x1C0055104 (--1FxVerifierLock@@QEAA@XZ.c)
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0056570 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ @ 0x1C00588A0 (-PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C005BA9C (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C005C36C (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C006C54C (-FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006DC28 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006EE0C (-FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     imp_WdfUsbTargetPipeFormatRequestForRead @ 0x1C0076280 (imp_WdfUsbTargetPipeFormatRequestForRead.c)
 *     imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C0076410 (imp_WdfUsbTargetPipeFormatRequestForUrb.c)
 *     imp_WdfUsbTargetPipeFormatRequestForWrite @ 0x1C0076640 (imp_WdfUsbTargetPipeFormatRequestForWrite.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1C0076F20 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C0078240 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C00851D4 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 *     ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x1C0087194 (-PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z.c)
 *     ?ForceDisconnect@FxInterrupt@@QEAAJXZ @ 0x1C008D1E8 (-ForceDisconnect@FxInterrupt@@QEAAJXZ.c)
 *     ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1C008D278 (-ForceReconnect@FxInterrupt@@QEAAJXZ.c)
 *     ?PowerPolicyUpdateSystemWakeSource@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C008EBB4 (-PowerPolicyUpdateSystemWakeSource@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z.c)
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00C7D28 (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 * Callees:
 *     FxIFR @ 0x1C000B6B0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C005B6FC (FxWmiTraceMessage.c)
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

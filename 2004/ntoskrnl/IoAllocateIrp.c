/*
 * XREFs of IoAllocateIrp @ 0x140271820
 * Callers:
 *     CcSetValidData @ 0x14027171C (CcSetValidData.c)
 *     PopAllocateIrp @ 0x14036CD00 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x140598AD4 (SmKmIssueVolumeIo.c)
 *     CmpFileFlushAndPurge @ 0x140639C54 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140639DF4 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x14063A00C (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x14073AFB0 (IopFilterResourceRequirementsCall.c)
 *     WmipSendWmiIrp @ 0x140741B6C (WmipSendWmiIrp.c)
 *     PnpAsynchronousCall @ 0x140756E24 (PnpAsynchronousCall.c)
 *     WmipSetTraceNotify @ 0x14076E548 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14077B024 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x140783A90 (PopAcquireCoolingInterface.c)
 *     PopFxRegisterDeviceWorker @ 0x1407A0BBC (PopFxRegisterDeviceWorker.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407AF2F4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x1407B20AC (PopConnectToPolicyDevice.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407B749C (PpIrpAllocateDeviceUsageNotification.c)
 *     IopEjectDevice @ 0x1408AF8C0 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x140927FFC (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14026FE70 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x14028F830 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x1409C17A0 (IovAllocateIrp.c)
 */

// local variable allocation has failed, the output may be wrong!
PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  BOOLEAN v2; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ChargeQuota;
  ChargeQuota = StackSize;
  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, StackSize);
  if ( IopDispatchAllocateIrp == 2 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, ChargeQuota);
  return (PIRP)IovAllocateIrp(0LL, StackSize, v2, retaddr);
}

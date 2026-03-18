/*
 * XREFs of IoAllocateIrp @ 0x140204780
 * Callers:
 *     CcSetValidData @ 0x14020467C (CcSetValidData.c)
 *     PopAllocateIrp @ 0x14036F900 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x14059C574 (SmKmIssueVolumeIo.c)
 *     CmpFileFlushAndPurge @ 0x1405DCDAC (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x1405DCF4C (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x1405DD164 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140749EC0 (IopFilterResourceRequirementsCall.c)
 *     WmipSendWmiIrp @ 0x14075074C (WmipSendWmiIrp.c)
 *     PnpAsynchronousCall @ 0x140765A64 (PnpAsynchronousCall.c)
 *     WmipSetTraceNotify @ 0x14077CF78 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x140789624 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x140791480 (PopAcquireCoolingInterface.c)
 *     PopFxRegisterDeviceWorker @ 0x1407AFEEC (PopFxRegisterDeviceWorker.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407BD234 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x1407BFFF4 (PopConnectToPolicyDevice.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407C5D28 (PpIrpAllocateDeviceUsageNotification.c)
 *     IopEjectDevice @ 0x1408B53F0 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x14092DE24 (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1402113E0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14031F2B8 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x1409C77B0 (IovAllocateIrp.c)
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, StackSize, ChargeQuota, retaddr);
  if ( IopDispatchAllocateIrp == 2 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, StackSize, ChargeQuota, retaddr);
  return (PIRP)IovAllocateIrp(0LL, StackSize, ChargeQuota, retaddr);
}

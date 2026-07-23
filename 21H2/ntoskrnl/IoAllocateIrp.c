/*
 * XREFs of IoAllocateIrp @ 0x1402F76C0
 * Callers:
 *     CcSetValidData @ 0x1402F75BC (CcSetValidData.c)
 *     PopAllocateIrp @ 0x14036E0F0 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x14059E1D4 (SmKmIssueVolumeIo.c)
 *     CmpFileFlushAndPurge @ 0x1406FA1C8 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x1406FA368 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x1406FA580 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140750C40 (IopFilterResourceRequirementsCall.c)
 *     WmipSendWmiIrp @ 0x1407576DC (WmipSendWmiIrp.c)
 *     PnpAsynchronousCall @ 0x1407692CC (PnpAsynchronousCall.c)
 *     WmipSetTraceNotify @ 0x140780F18 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14078D5C4 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x1407921A0 (PopAcquireCoolingInterface.c)
 *     PopFxRegisterDeviceWorker @ 0x1407B507C (PopFxRegisterDeviceWorker.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407C1B54 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x1407C4888 (PopConnectToPolicyDevice.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407CA2AC (PpIrpAllocateDeviceUsageNotification.c)
 *     IopEjectDevice @ 0x1408B2B20 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B754 (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14020D120 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x14035C7C0 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x1409C57A0 (IovAllocateIrp.c)
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

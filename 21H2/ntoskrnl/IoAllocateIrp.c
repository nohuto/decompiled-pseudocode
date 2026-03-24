/*
 * XREFs of IoAllocateIrp @ 0x140361FF0
 * Callers:
 *     CcSetValidData @ 0x140361EF4 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x14036DF40 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x14059DFA4 (SmKmIssueVolumeIo.c)
 *     CmpFileFlushAndPurge @ 0x14071DC38 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x14071DDD8 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x14071DFF0 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140750A80 (IopFilterResourceRequirementsCall.c)
 *     WmipSendWmiIrp @ 0x14075751C (WmipSendWmiIrp.c)
 *     PnpAsynchronousCall @ 0x14076910C (PnpAsynchronousCall.c)
 *     WmipSetTraceNotify @ 0x140780D58 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14078D404 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x140790BF0 (PopAcquireCoolingInterface.c)
 *     PopFxRegisterDeviceWorker @ 0x1407B592C (PopFxRegisterDeviceWorker.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407C1634 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x1407C4368 (PopConnectToPolicyDevice.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407C9F8C (PpIrpAllocateDeviceUsageNotification.c)
 *     IopEjectDevice @ 0x1408B29C0 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B5F4 (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x1402ED748 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x140351A70 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x1409C47A0 (IovAllocateIrp.c)
 */

// local variable allocation has failed, the output may be wrong!
PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  __int64 v2; // r8
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(v2) = ChargeQuota;
  ChargeQuota = StackSize;
  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, StackSize, v2);
  if ( IopDispatchAllocateIrp == 2 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, ChargeQuota, v2, retaddr);
  return (PIRP)IovAllocateIrp(0LL, ChargeQuota, (_BYTE)v2, retaddr);
}

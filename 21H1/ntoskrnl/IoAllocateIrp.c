/*
 * XREFs of IoAllocateIrp @ 0x1402E0EB0
 * Callers:
 *     CcSetValidData @ 0x1402E0DAC (CcSetValidData.c)
 *     PopAllocateIrp @ 0x14036D060 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x1405983E4 (SmKmIssueVolumeIo.c)
 *     CmpFileFlushAndPurge @ 0x1406877D0 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140687970 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x140687B88 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140739430 (IopFilterResourceRequirementsCall.c)
 *     WmipSendWmiIrp @ 0x14073FFEC (WmipSendWmiIrp.c)
 *     PnpAsynchronousCall @ 0x14075478C (PnpAsynchronousCall.c)
 *     WmipSetTraceNotify @ 0x14076BDA8 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x140778C14 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x14077B090 (PopAcquireCoolingInterface.c)
 *     PopFxRegisterDeviceWorker @ 0x14079CBDC (PopFxRegisterDeviceWorker.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407AC194 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x1407AEEC8 (PopConnectToPolicyDevice.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407B432C (PpIrpAllocateDeviceUsageNotification.c)
 *     IopEjectDevice @ 0x1408AE5A0 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x140926D4C (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140252FB0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14033F4AC (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x1409C1790 (IovAllocateIrp.c)
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, StackSize, ChargeQuota);
  if ( IopDispatchAllocateIrp == 2 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, StackSize, ChargeQuota, retaddr);
  return (PIRP)IovAllocateIrp(0LL, StackSize, ChargeQuota, retaddr);
}

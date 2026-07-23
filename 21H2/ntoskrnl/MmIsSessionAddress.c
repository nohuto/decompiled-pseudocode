/*
 * XREFs of MmIsSessionAddress @ 0x140353E60
 * Callers:
 *     KiAbFindWakeupLockEntry @ 0x1402FC8D8 (KiAbFindWakeupLockEntry.c)
 *     ViAvlNodeInitializeSessionId @ 0x1403718CC (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x1403DC038 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 *     KeAbCrossThreadDelete @ 0x1405210B8 (KeAbCrossThreadDelete.c)
 *     CmpIsBufferGloballyVisible @ 0x1405F38B0 (CmpIsBufferGloballyVisible.c)
 *     PnpInitializeNotifyEntry @ 0x140673654 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x1406FD0AC (PnpNotifyDriverCallback.c)
 *     KseDriverLoadImage @ 0x14075B720 (KseDriverLoadImage.c)
 *     EtwpAddKmRegEntry @ 0x1407631D0 (EtwpAddKmRegEntry.c)
 *     KseDriverUnloadImage @ 0x1407730B4 (KseDriverUnloadImage.c)
 *     MmEnumerateSystemImages @ 0x140797FE0 (MmEnumerateSystemImages.c)
 *     CmFcpInitializeChangeSubscription @ 0x14087E5CC (CmFcpInitializeChangeSubscription.c)
 *     ExpDebuggerWorker @ 0x1409B6030 (ExpDebuggerWorker.c)
 *     KdpQueryMemory @ 0x1409B871C (KdpQueryMemory.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C7B0C (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C97B8 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x1409CA680 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D9B6C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D9C54 (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  return a1 >= 0xFFFF800000000000uLL && byte_140C4FA08[((a1 >> 39) & 0x1FF) - 256] == 1;
}

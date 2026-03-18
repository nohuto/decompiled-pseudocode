/*
 * XREFs of MmIsSessionAddress @ 0x14021F1C0
 * Callers:
 *     KiAbFindWakeupLockEntry @ 0x140243158 (KiAbFindWakeupLockEntry.c)
 *     ViAvlNodeInitializeSessionId @ 0x14037183C (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x1403DB558 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 *     KeAbCrossThreadDelete @ 0x14051F398 (KeAbCrossThreadDelete.c)
 *     PnpNotifyDriverCallback @ 0x140646E68 (PnpNotifyDriverCallback.c)
 *     CmpIsBufferGloballyVisible @ 0x1406BA92C (CmpIsBufferGloballyVisible.c)
 *     PnpInitializeNotifyEntry @ 0x1406ECF54 (PnpInitializeNotifyEntry.c)
 *     KseDriverLoadImage @ 0x1407546AC (KseDriverLoadImage.c)
 *     EtwpAddKmRegEntry @ 0x14075E820 (EtwpAddKmRegEntry.c)
 *     KseDriverUnloadImage @ 0x14076ED74 (KseDriverUnloadImage.c)
 *     MmEnumerateSystemImages @ 0x14078DA30 (MmEnumerateSystemImages.c)
 *     CmFcpInitializeChangeSubscription @ 0x140880ACC (CmFcpInitializeChangeSubscription.c)
 *     ExpDebuggerWorker @ 0x1409B8030 (ExpDebuggerWorker.c)
 *     KdpQueryMemory @ 0x1409BA71C (KdpQueryMemory.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C9B1C (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x1409CB7C8 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x1409CC690 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409DBB7C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409DBC64 (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  return a1 >= 0xFFFF800000000000uLL && byte_140C4F848[((a1 >> 39) & 0x1FF) - 256] == 1;
}

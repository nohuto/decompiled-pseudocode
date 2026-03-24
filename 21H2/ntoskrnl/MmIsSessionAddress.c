/*
 * XREFs of MmIsSessionAddress @ 0x140349110
 * Callers:
 *     KiAbFindWakeupLockEntry @ 0x1402F1B88 (KiAbFindWakeupLockEntry.c)
 *     ViAvlNodeInitializeSessionId @ 0x140371D7C (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x1403DBEC8 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 *     KeAbCrossThreadDelete @ 0x140520E78 (KeAbCrossThreadDelete.c)
 *     CmpIsBufferGloballyVisible @ 0x140694360 (CmpIsBufferGloballyVisible.c)
 *     PnpInitializeNotifyEntry @ 0x1406C4D64 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x1406E5CC4 (PnpNotifyDriverCallback.c)
 *     KseDriverLoadImage @ 0x14075B560 (KseDriverLoadImage.c)
 *     EtwpAddKmRegEntry @ 0x140763010 (EtwpAddKmRegEntry.c)
 *     KseDriverUnloadImage @ 0x140772EF4 (KseDriverUnloadImage.c)
 *     MmEnumerateSystemImages @ 0x140797DE0 (MmEnumerateSystemImages.c)
 *     CmFcpInitializeChangeSubscription @ 0x14087E46C (CmFcpInitializeChangeSubscription.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 *     KdpQueryMemory @ 0x1409B771C (KdpQueryMemory.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C6B0C (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C87B8 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x1409C9680 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D8B6C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D8C54 (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  return a1 >= 0xFFFF800000000000uLL && byte_140C4F9C8[((a1 >> 39) & 0x1FF) - 256] == 1;
}

/*
 * XREFs of MmIsSessionAddress @ 0x14035ADE0
 * Callers:
 *     KiAbFindWakeupLockEntry @ 0x14035AC98 (KiAbFindWakeupLockEntry.c)
 *     ViAvlNodeInitializeSessionId @ 0x14036ECBC (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x1403D7A88 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 *     KeAbCrossThreadDelete @ 0x14051B378 (KeAbCrossThreadDelete.c)
 *     PnpInitializeNotifyEntry @ 0x1406B3954 (PnpInitializeNotifyEntry.c)
 *     CmpIsBufferGloballyVisible @ 0x14070AA44 (CmpIsBufferGloballyVisible.c)
 *     PnpNotifyDriverCallback @ 0x14070D040 (PnpNotifyDriverCallback.c)
 *     KseDriverLoadImage @ 0x140743F4C (KseDriverLoadImage.c)
 *     EtwpAddKmRegEntry @ 0x14074B820 (EtwpAddKmRegEntry.c)
 *     KseDriverUnloadImage @ 0x14075E3F4 (KseDriverUnloadImage.c)
 *     MmEnumerateSystemImages @ 0x140780B00 (MmEnumerateSystemImages.c)
 *     CmFcpInitializeChangeSubscription @ 0x140879C6C (CmFcpInitializeChangeSubscription.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 *     KdpQueryMemory @ 0x1409B471C (KdpQueryMemory.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AEC (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C5798 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x1409C6660 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D5AFC (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D5BE4 (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

bool __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  int v1; // ecx

  if ( a1 < 0xFFFF800000000000uLL )
    v1 = 0;
  else
    v1 = byte_140C4F908[((a1 >> 39) & 0x1FF) - 256];
  return v1 == 1;
}

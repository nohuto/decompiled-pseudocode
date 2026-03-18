/*
 * XREFs of MmIsSessionAddress @ 0x140275140
 * Callers:
 *     KiAbFindWakeupLockEntry @ 0x140274FF8 (KiAbFindWakeupLockEntry.c)
 *     ViAvlNodeInitializeSessionId @ 0x14036F8EC (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x1403D88C8 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x140511660 (KeBugCheck2.c)
 *     KeAbCrossThreadDelete @ 0x14051B9C8 (KeAbCrossThreadDelete.c)
 *     PnpNotifyDriverCallback @ 0x140648974 (PnpNotifyDriverCallback.c)
 *     CmpIsBufferGloballyVisible @ 0x1406495A4 (CmpIsBufferGloballyVisible.c)
 *     PnpInitializeNotifyEntry @ 0x1406C5A54 (PnpInitializeNotifyEntry.c)
 *     KseDriverLoadImage @ 0x140745ACC (KseDriverLoadImage.c)
 *     EtwpAddKmRegEntry @ 0x14074FC40 (EtwpAddKmRegEntry.c)
 *     KseDriverUnloadImage @ 0x140760764 (KseDriverUnloadImage.c)
 *     MmEnumerateSystemImages @ 0x140780120 (MmEnumerateSystemImages.c)
 *     CmFcpInitializeChangeSubscription @ 0x14087AF5C (CmFcpInitializeChangeSubscription.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 *     KdpQueryMemory @ 0x1409B471C (KdpQueryMemory.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AFC (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C57A8 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x1409C6670 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D5B5C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D5C44 (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

bool __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  int v1; // ecx

  if ( a1 < 0xFFFF800000000000uLL )
    v1 = 0;
  else
    v1 = (unsigned __int8)byte_140C4F7C8[((a1 >> 39) & 0x1FF) - 256];
  return v1 == 1;
}

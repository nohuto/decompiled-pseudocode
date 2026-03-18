/*
 * XREFs of MmIsSessionAddress @ 0x140359DE0
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1403EB1A8 (KiLockExtendedServiceTable.c)
 *     KseDriverUnloadImage @ 0x1406EAFE4 (KseDriverUnloadImage.c)
 *     KseDriverLoadImage @ 0x14075CCC8 (KseDriverLoadImage.c)
 *     PnpInitializeNotifyEntry @ 0x140768894 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x14078D3DC (PnpNotifyDriverCallback.c)
 *     EtwpInitializeRegEntry @ 0x1407963F8 (EtwpInitializeRegEntry.c)
 *     CmpIsBufferGloballyVisible @ 0x1407D557C (CmpIsBufferGloballyVisible.c)
 *     MmEnumerateSystemImages @ 0x140814DC0 (MmEnumerateSystemImages.c)
 *     CmFcpInitializeChangeSubscription @ 0x14083347C (CmFcpInitializeChangeSubscription.c)
 *     PspTlsAlloc @ 0x140852FB4 (PspTlsAlloc.c)
 *     ExpDebuggerWorker @ 0x140A70F90 (ExpDebuggerWorker.c)
 *     KdpQueryMemory @ 0x140A72FE0 (KdpQueryMemory.c)
 *     VfDriverEnableVerifierForAll @ 0x140A89C30 (VfDriverEnableVerifierForAll.c)
 *     VfThunkApplyPristineToAllSession @ 0x140A93644 (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140A937C4 (VfThunkApplyWdmThunkToAllSession.c)
 *     ViPtLogStackTrace @ 0x140A9DFBC (ViPtLogStackTrace.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140AA3EB0 (VfMiscIoInitializeWorkItem_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AA59E0 (ViMiscValidateSynchronizationObject.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(__int64 a1)
{
  return (unsigned __int64)(a1 - qword_140C50630) < 0x8000000000LL;
}

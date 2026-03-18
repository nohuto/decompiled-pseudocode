/*
 * XREFs of ExNotifyCallback @ 0x140232770
 * Callers:
 *     NtNotifyChangeSession @ 0x1406A91F0 (NtNotifyChangeSession.c)
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407AACC0 (AlpcpCompleteDispatchMessage.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407FFEBC (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x140861050 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x140952A20 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x140953314 (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x140990270 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopDispatchAcDcCallback @ 0x140997E90 (PopDispatchAcDcCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x1409FA6B8 (SLSendPolicyChangeNotifications.c)
 *     PopUnlockAfterSleepWorker @ 0x140A4E3A0 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140AD6B90 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140232788 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}

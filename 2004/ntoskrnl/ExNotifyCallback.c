/*
 * XREFs of ExNotifyCallback @ 0x14033CED0
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     AlpcpCompleteDispatchMessage @ 0x140685F60 (AlpcpCompleteDispatchMessage.c)
 *     NtNotifyChangeSession @ 0x1406E48A0 (NtNotifyChangeSession.c)
 *     PopNotifyCallbacksPreSleep @ 0x14076407C (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x1407BE500 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x1408AAEC4 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1408AB7B4 (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x1408E4530 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopDispatchAcDcCallback @ 0x1408EE010 (PopDispatchAcDcCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x14094ACD8 (SLSendPolicyChangeNotifications.c)
 *     PopUnlockAfterSleepWorker @ 0x140995F50 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140A18BA0 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x140A447A8 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14033CEE8 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}

/*
 * XREFs of ExNotifyCallback @ 0x1402B0640
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1405E55B0 (AlpcpCompleteDispatchMessage.c)
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     NtNotifyChangeSession @ 0x140694DB0 (NtNotifyChangeSession.c)
 *     PopNotifyCallbacksPreSleep @ 0x14077663C (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x1407D1040 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x1408ADFC4 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1408AE8B4 (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x1408E7940 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopDispatchAcDcCallback @ 0x1408F1420 (PopDispatchAcDcCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x14094E268 (SLSendPolicyChangeNotifications.c)
 *     PopUnlockAfterSleepWorker @ 0x140994FE0 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140A1BBA0 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x1402B0658 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}

/*
 * XREFs of ExNotifyCallback @ 0x14022E9A0
 * Callers:
 *     NtNotifyChangeSession @ 0x1405F4300 (NtNotifyChangeSession.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406D4D10 (AlpcpCompleteDispatchMessage.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407767FC (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x1407D11B0 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x1408AE124 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1408AEA14 (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x1408E7AA0 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopDispatchAcDcCallback @ 0x1408F1580 (PopDispatchAcDcCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x14094E438 (SLSendPolicyChangeNotifications.c)
 *     PopUnlockAfterSleepWorker @ 0x140995FE0 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140A1CBA0 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14022E9B8 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}

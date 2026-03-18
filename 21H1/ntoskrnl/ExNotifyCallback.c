/*
 * XREFs of ExNotifyCallback @ 0x1403005D0
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14060DDF0 (AlpcpCompleteDispatchMessage.c)
 *     NtNotifyChangeSession @ 0x1406C4F30 (NtNotifyChangeSession.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopNotifyCallbacksPreSleep @ 0x14076279C (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x1407BB390 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x1408A9BA4 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1408AA494 (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x1408E32B0 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopDispatchAcDcCallback @ 0x1408ECD20 (PopDispatchAcDcCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x140949938 (SLSendPolicyChangeNotifications.c)
 *     PopUnlockAfterSleepWorker @ 0x14098CC40 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140A18BA0 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x1403005E8 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}

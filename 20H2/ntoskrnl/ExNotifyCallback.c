/*
 * XREFs of ExNotifyCallback @ 0x14030FBB0
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1405ECB50 (AlpcpCompleteDispatchMessage.c)
 *     NtNotifyChangeSession @ 0x1406BB800 (NtNotifyChangeSession.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopNotifyCallbacksPreSleep @ 0x14077268C (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x1407CCD90 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x1408B09F4 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1408B12E4 (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x1408EA140 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopDispatchAcDcCallback @ 0x1408F3C20 (PopDispatchAcDcCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x140950A98 (SLSendPolicyChangeNotifications.c)
 *     PopUnlockAfterSleepWorker @ 0x140999090 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140A1EBA0 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14030FBC8 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}

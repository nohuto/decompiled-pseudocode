/*
 * XREFs of KeInitializeDpc @ 0x1402940D0
 * Callers:
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406A1000 (ObpProcessRemoveObjectQueue.c)
 *     NtCreateTimer @ 0x1406B4B90 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x1406EFD44 (EtwpInitLoggerContext.c)
 *     PspThreadDelete @ 0x1407A41E0 (PspThreadDelete.c)
 *     PfSnAsyncContextInitialize @ 0x1407D7B88 (PfSnAsyncContextInitialize.c)
 *     PfSnBeginTrace @ 0x1407DA91C (PfSnBeginTrace.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     PoUserShutdownInitiated @ 0x1407EC000 (PoUserShutdownInitiated.c)
 *     PopUserPresentSetWorker @ 0x1407F32E0 (PopUserPresentSetWorker.c)
 *     IopConnectInterrupt @ 0x140817258 (IopConnectInterrupt.c)
 *     PiDrvDbCreateNode @ 0x1408268AC (PiDrvDbCreateNode.c)
 *     KeInitializeTimerTable @ 0x14082A0D8 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x14082A224 (KiInitializeForceIdle.c)
 *     CmpCmdInit @ 0x140832270 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1408334E4 (CmpInitializeLazyWriters.c)
 *     ExpInitializeTimeZoneInformation @ 0x14083697C (ExpInitializeTimeZoneInformation.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x140851878 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     TtmInit @ 0x1408633F0 (TtmInit.c)
 *     IopErrorLogQueueRequest @ 0x14093FB40 (IopErrorLogQueueRequest.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1409466AC (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1409618C0 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x140990100 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1409A2F78 (TtmiCreateTerminal.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EEA80 (EtwpCovSampCaptureContextStart.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140A48D9C (PfpStartLoggingHardFaultEvents.c)
 *     PopInvokeSystemStateHandler @ 0x140A4AF0C (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140A4E4B0 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x140A50C40 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140A54598 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x140A57CB4 (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x140A58CF8 (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x140A59654 (PoInitializePrcb.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A5B0D0 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     HalpMcaInitializePcrContext @ 0x140A5B2F8 (HalpMcaInitializePcrContext.c)
 *     IopLiveDumpCorralProcessors @ 0x140A660C0 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140A68BE8 (PnprQuiesceProcessors.c)
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140A91368 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140A95A04 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140A9D00C (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x140AAB5FC (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayFade @ 0x140AAC1BC (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AAD1C4 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AAED7C (AnFwDisplayBackgroundUpdate.c)
 *     CcInitializeTelemetry @ 0x140AF2E9C (CcInitializeTelemetry.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 275;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}

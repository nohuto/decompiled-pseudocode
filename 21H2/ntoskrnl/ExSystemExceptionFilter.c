/*
 * XREFs of ExSystemExceptionFilter @ 0x1409F8660
 * Callers:
 *     ExpGetSystemEmulationBasicInformation @ 0x14023559C (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140235738 (ExpGetSystemBasicInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x140263154 (ExpGetSystemProcessorInformation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     NtShutdownWorkerFactory @ 0x1402D3310 (NtShutdownWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1402D4530 (NtSetInformationWorkerFactory.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x1405683C0 (KeQueryDpcWatchdogConfiguration.c)
 *     KiValidateDpcWatchdogConfiguration @ 0x140568AB8 (KiValidateDpcWatchdogConfiguration.c)
 *     KeQuerySecureSpeculationInformation @ 0x1405711E4 (KeQuerySecureSpeculationInformation.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x1405F5398 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1406375D0 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x140637E70 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1406383D8 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x140638440 (EtwpGetSignedFieldValue.c)
 *     ExpQueryBootLoaderMetadata @ 0x1406389A8 (ExpQueryBootLoaderMetadata.c)
 *     ExpSetBootLoaderMetadata @ 0x140638B98 (ExpSetBootLoaderMetadata.c)
 *     ExPoolQueryLimits @ 0x14063AC94 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x14063AFCC (ExPoolSetLimit.c)
 *     NtQueryInformationWorkerFactory @ 0x140641BD0 (NtQueryInformationWorkerFactory.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}

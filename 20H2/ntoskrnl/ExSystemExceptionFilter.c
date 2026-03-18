/*
 * XREFs of ExSystemExceptionFilter @ 0x1407D0AE0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14030B974 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x14030BB10 (ExpGetSystemBasicInformation.c)
 *     NtShutdownWorkerFactory @ 0x14033BCB0 (NtShutdownWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x14035BF90 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemProcessorInformation @ 0x14036035C (ExpGetSystemProcessorInformation.c)
 *     KeQuerySecureSpeculationInformation @ 0x140519AD8 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140520A08 (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140595AB0 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405AF388 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x1405AFC04 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1405B016C (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x1405B01D4 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x1405B7DC0 (NtQueryInformationWorkerFactory.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     NtCreateEnclave @ 0x1408D6560 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}

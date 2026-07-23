/*
 * XREFs of ExSystemExceptionFilter @ 0x1407D5080
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140202E10 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14023B778 (ExpGetSystemEmulationBasicInformation.c)
 *     NtShutdownWorkerFactory @ 0x140248750 (NtShutdownWorkerFactory.c)
 *     ExpGetSystemProcessorInformation @ 0x140269670 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140269A6C (ExpGetSystemBasicInformation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 *     KeQuerySecureSpeculationInformation @ 0x14051B748 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140522728 (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140597710 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405B0FB8 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x1405B1834 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1405B1D9C (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x1405B1E04 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x1405B9A20 (NtQueryInformationWorkerFactory.c)
 *     sub_1405E5EA0 @ 0x1405E5EA0 (sub_1405E5EA0.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     NtCreateEnclave @ 0x1408D3E80 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}

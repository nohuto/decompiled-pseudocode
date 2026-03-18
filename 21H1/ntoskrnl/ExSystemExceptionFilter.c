/*
 * XREFs of ExSystemExceptionFilter @ 0x1407BEDE0
 * Callers:
 *     ExpGetSystemBasicInformation @ 0x14020538C (ExpGetSystemBasicInformation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     NtSetInformationWorkerFactory @ 0x1402BF210 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14030CBF0 (ExpGetSystemEmulationBasicInformation.c)
 *     NtShutdownWorkerFactory @ 0x14031A910 (NtShutdownWorkerFactory.c)
 *     ExpGetSystemProcessorInformation @ 0x140327110 (ExpGetSystemProcessorInformation.c)
 *     KeQuerySecureSpeculationInformation @ 0x140515B20 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14051C9E8 (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140591920 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405AB138 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x1405AB9B4 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1405ABF1C (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x1405ABF84 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x1405B3B40 (NtQueryInformationWorkerFactory.c)
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     NtCreateEnclave @ 0x1408CF3D0 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}

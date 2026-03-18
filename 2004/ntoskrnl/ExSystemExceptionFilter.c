/*
 * XREFs of ExSystemExceptionFilter @ 0x1407C22E0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     NtSetInformationWorkerFactory @ 0x1402661E0 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemProcessorInformation @ 0x1402DE5F0 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140339028 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1403391C4 (ExpGetSystemBasicInformation.c)
 *     NtShutdownWorkerFactory @ 0x1403583C0 (NtShutdownWorkerFactory.c)
 *     KeQuerySecureSpeculationInformation @ 0x140516170 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14051D038 (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140592010 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405AB828 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x1405AC0A4 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1405AC60C (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x1405AC674 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x1405B4260 (NtQueryInformationWorkerFactory.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     NtCreateEnclave @ 0x1408D0720 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}

/*
 * XREFs of ExSystemExceptionFilter @ 0x1407D4F10
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203150 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpGetSystemProcessorInformation @ 0x14027B6D0 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x14027BACC (ExpGetSystemBasicInformation.c)
 *     NtSetInformationWorkerFactory @ 0x140285C70 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1402BD0C8 (ExpGetSystemEmulationBasicInformation.c)
 *     NtShutdownWorkerFactory @ 0x1402C9E60 (NtShutdownWorkerFactory.c)
 *     NtGetWriteWatch @ 0x14032C650 (NtGetWriteWatch.c)
 *     KeQuerySecureSpeculationInformation @ 0x14051B508 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1405224E8 (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x1405974E0 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405B0D88 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x1405B1604 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1405B1B6C (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x1405B1BD4 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x1405B97F0 (NtQueryInformationWorkerFactory.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     sub_140686D40 @ 0x140686D40 (sub_140686D40.c)
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     NtCreateEnclave @ 0x1408D3D20 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}

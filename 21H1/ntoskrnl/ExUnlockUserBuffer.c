/*
 * XREFs of ExUnlockUserBuffer @ 0x1402F85E0
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x1406BCDCC (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x1406BD108 (ExLockUserBuffer.c)
 *     NtSystemDebugControl @ 0x1407B9F40 (NtSystemDebugControl.c)
 *     KdSystemDebugControl @ 0x1408B5740 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408BFF80 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1408D53D0 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1409335CC (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140945730 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x140945B54 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x140945BD4 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x140945C54 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x140945CD4 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14094BE84 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14094D59C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x14094E9E0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14094F030 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14094F4F0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x14094F810 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x14094FD90 (NtQueryDriverEntryOrder.c)
 * Callees:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}

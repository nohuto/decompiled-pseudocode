/*
 * XREFs of ExUnlockUserBuffer @ 0x140335610
 * Callers:
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x1406DE15C (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x1406DE498 (ExLockUserBuffer.c)
 *     NtSystemDebugControl @ 0x1407BD0B0 (NtSystemDebugControl.c)
 *     KdSystemDebugControl @ 0x1408B6A60 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C12D0 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1408D6720 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093486C (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1409469D0 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x140946DF4 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x140946E74 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x140946EF4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x140946F74 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14094D224 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14094E93C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x14094FD80 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1409503D0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140950890 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x140950BB0 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x140951130 (NtQueryDriverEntryOrder.c)
 * Callees:
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}

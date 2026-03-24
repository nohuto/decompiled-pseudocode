/*
 * XREFs of ExUnlockUserBuffer @ 0x1402997FC
 * Callers:
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     ExLockUserBuffer @ 0x140683180 (ExLockUserBuffer.c)
 *     ExGetSessionPoolTagInformation @ 0x1406832BC (ExGetSessionPoolTagInformation.c)
 *     NtSystemDebugControl @ 0x1407CFC00 (NtSystemDebugControl.c)
 *     KdSystemDebugControl @ 0x1408B9B60 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C48D0 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1408D9D20 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937E6C (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140949F60 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x14094A384 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x14094A404 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14094A484 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x14094A504 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1409507B4 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x140951ECC (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x140953310 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140953960 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140953E20 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x140954140 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x1409546C0 (NtQueryDriverEntryOrder.c)
 * Callees:
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}

/*
 * XREFs of ExUnlockUserBuffer @ 0x1402161DC
 * Callers:
 *     ExGetSessionPoolTagInformation @ 0x1405E413C (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     NtSystemDebugControl @ 0x1407CFD70 (NtSystemDebugControl.c)
 *     KdSystemDebugControl @ 0x1408B9CC0 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C4A30 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1408D9E80 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093803C (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x14094A130 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x14094A554 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x14094A5D4 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14094A654 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x14094A6D4 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140950984 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14095209C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x1409534E0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140953B30 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140953FF0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x140954310 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x140954890 (NtQueryDriverEntryOrder.c)
 * Callees:
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}

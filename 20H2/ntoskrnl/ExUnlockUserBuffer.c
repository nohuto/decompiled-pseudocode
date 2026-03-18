/*
 * XREFs of ExUnlockUserBuffer @ 0x14025EE10
 * Callers:
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x14065C31C (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x14065C658 (ExLockUserBuffer.c)
 *     NtSystemDebugControl @ 0x1407CB940 (NtSystemDebugControl.c)
 *     KdSystemDebugControl @ 0x1408BC680 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C7110 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1408DC560 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093A69C (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x14094C790 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x14094CBB4 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x14094CC34 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14094CCB4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x14094CD34 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140952FE4 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409546FC (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x140955B40 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140956190 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140956650 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x140956970 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x140956EF0 (NtQueryDriverEntryOrder.c)
 * Callees:
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}

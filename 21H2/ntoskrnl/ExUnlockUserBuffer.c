/*
 * XREFs of ExUnlockUserBuffer @ 0x140231450
 * Callers:
 *     ExGetSessionPoolTagInformation @ 0x1406A8B68 (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x1406A904C (ExLockUserBuffer.c)
 *     NtSystemDebugControl @ 0x1406DC120 (NtSystemDebugControl.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14081C05C (EtwQueryPerformanceTraceInformation.c)
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 *     MiCopyLargeVad @ 0x140982B6C (MiCopyLargeVad.c)
 *     ExGetSessionBigPoolInformation @ 0x1409F5D80 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x1409F6670 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1409F66F0 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1409F6770 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1409F67F0 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1409FCB38 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FE284 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x1409FF6B0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1409FFD10 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140A001D0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x140A004F0 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x140A00A80 (NtQueryDriverEntryOrder.c)
 * Callees:
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}

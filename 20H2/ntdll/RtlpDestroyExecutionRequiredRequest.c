/*
 * XREFs of RtlpDestroyExecutionRequiredRequest @ 0x18010B3B4
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800D7B00 (RtlQueryProcessDebugInformation.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F42E4 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     NtPowerInformation @ 0x18009DC80 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  NtPowerInformation();
  return NtClose(Handle);
}

/*
 * XREFs of NtQuerySystemInformation @ 0x18009D4D0
 * Callers:
 *     RtlpHpEnvQueryProcessorCount @ 0x180007E1C (RtlpHpEnvQueryProcessorCount.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     EtwpStartUmLogger @ 0x180055AC8 (EtwpStartUmLogger.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800564B8 (EtwpAddLogHeaderToLogFile.c)
 *     TpInitializePackage @ 0x18007CF2C (TpInitializePackage.c)
 *     RtlSystemTimeToLocalTime @ 0x18007D490 (RtlSystemTimeToLocalTime.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008904C (RtlpQueryPseudoEnvironmentVariable.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF630 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     LdrInitializeMrdata @ 0x1800D5974 (LdrInitializeMrdata.c)
 *     SendMessageToWERService @ 0x1800DD36C (SendMessageToWERService.c)
 *     RtlResetStackOverflow @ 0x1800DE6B4 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x1800E3BF0 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800E5B70 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F7940 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FBA84 (RtlpInitializeNonVolatileFlush.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800FDB2C (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlHpInitializeHeapManager @ 0x18010B0E0 (RtlHpInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18010B664 (RtlpInitializeLowFragHeapManager.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 54;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

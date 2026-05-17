/*
 * XREFs of NtQuerySystemInformation @ 0x18009DD00
 * Callers:
 *     RtlpHpEnvQueryProcessorCount @ 0x180007E1C (RtlpHpEnvQueryProcessorCount.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     EtwpStartUmLogger @ 0x1800482B0 (EtwpStartUmLogger.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     TpInitializePackage @ 0x18007D9CC (TpInitializePackage.c)
 *     RtlSystemTimeToLocalTime @ 0x18007DF30 (RtlSystemTimeToLocalTime.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008974C (RtlpQueryPseudoEnvironmentVariable.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF7D0 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 *     LdrInitializeMrdata @ 0x1800D5AC4 (LdrInitializeMrdata.c)
 *     SendMessageToWERService @ 0x1800DD4BC (SendMessageToWERService.c)
 *     RtlResetStackOverflow @ 0x1800DE804 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x1800E3ED0 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800E5E50 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F7CE0 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FBE34 (RtlpInitializeNonVolatileFlush.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800FDEDC (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlHpInitializeHeapManager @ 0x18010B490 (RtlHpInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18010BA14 (RtlpInitializeLowFragHeapManager.c)
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

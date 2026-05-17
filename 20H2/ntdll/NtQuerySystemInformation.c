/*
 * XREFs of NtQuerySystemInformation @ 0x18009D770
 * Callers:
 *     RtlpHpEnvQueryProcessorCount @ 0x180007E1C (RtlpHpEnvQueryProcessorCount.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     EtwpStartUmLogger @ 0x180055B18 (EtwpStartUmLogger.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180056508 (EtwpAddLogHeaderToLogFile.c)
 *     TpInitializePackage @ 0x18007D02C (TpInitializePackage.c)
 *     RtlSystemTimeToLocalTime @ 0x18007D590 (RtlSystemTimeToLocalTime.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008914C (RtlpQueryPseudoEnvironmentVariable.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF810 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     LdrInitializeMrdata @ 0x1800D5D14 (LdrInitializeMrdata.c)
 *     SendMessageToWERService @ 0x1800DD70C (SendMessageToWERService.c)
 *     RtlResetStackOverflow @ 0x1800DEA54 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x1800E4040 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800E5FC0 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F7E50 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FBF94 (RtlpInitializeNonVolatileFlush.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800FE03C (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlHpInitializeHeapManager @ 0x18010B5F0 (RtlHpInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18010BB74 (RtlpInitializeLowFragHeapManager.c)
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

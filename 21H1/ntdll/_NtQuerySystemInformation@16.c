/*
 * XREFs of _NtQuerySystemInformation@16 @ 0x4B2F2CE0
 * Callers:
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _TpInitializePackage@0 @ 0x4B2EA4C0 (_TpInitializePackage@0.c)
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _RtlpQueryPseudoEnvironmentVariable@16 @ 0x4B32E262 (_RtlpQueryPseudoEnvironmentVariable@16.c)
 *     _LdrpLogIntegrityContinuityTelemetry@20 @ 0x4B33057E (_LdrpLogIntegrityContinuityTelemetry@20.c)
 *     _LdrInitializeMrdata@0 @ 0x4B334E89 (_LdrInitializeMrdata@0.c)
 *     _SendMessageToWERService@8 @ 0x4B33AB80 (_SendMessageToWERService@8.c)
 *     _RtlResetStackOverflow@0 @ 0x4B33BCA7 (_RtlResetStackOverflow@0.c)
 *     _RtlQueryModuleInformation@12 @ 0x4B342BC0 (_RtlQueryModuleInformation@12.c)
 *     _RtlLocalTimeToSystemTime@8 @ 0x4B344D10 (_RtlLocalTimeToSystemTime@8.c)
 *     _RtlSystemTimeToLocalTime@8 @ 0x4B344DF0 (_RtlSystemTimeToLocalTime@8.c)
 *     _RtlRegisterSecureMemoryCacheCallback@4 @ 0x4B35E530 (_RtlRegisterSecureMemoryCacheCallback@4.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x4B364433 (RtlpHeapTrkAllocCacheAligned.c)
 *     _RtlHpInitializeHeapManager@0 @ 0x4B37080D (_RtlHpInitializeHeapManager@0.c)
 *     _RtlpInitializeLowFragHeapManager@0 @ 0x4B370FB3 (_RtlpInitializeLowFragHeapManager@0.c)
 *     _RtlpHpEnvQueryProcessorCount@0 @ 0x4B37247C (_RtlpHpEnvQueryProcessorCount@0.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __stdcall NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  return Wow64SystemServiceCall();
}

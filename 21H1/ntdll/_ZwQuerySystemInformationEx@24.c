/*
 * XREFs of _ZwQuerySystemInformationEx@24 @ 0x4B2F3F90
 * Callers:
 *     _TppPoolUpdateNodeRelation@4 @ 0x4B2B36E2 (_TppPoolUpdateNodeRelation@4.c)
 *     _RtlWow64GetProcessMachines@12 @ 0x4B2DBD70 (_RtlWow64GetProcessMachines@12.c)
 *     _RtlpFcUpdateLocalConfiguration@16 @ 0x4B2E4FCD (_RtlpFcUpdateLocalConfiguration@16.c)
 *     _RtlpFcQueryFeatureConfigurationFromKernel@16 @ 0x4B2E542D (_RtlpFcQueryFeatureConfigurationFromKernel@16.c)
 *     _RtlpQueryPseudoEnvironmentVariable@16 @ 0x4B32E262 (_RtlpQueryPseudoEnvironmentVariable@16.c)
 *     _RtlWow64IsWowGuestMachineSupported@8 @ 0x4B33A250 (_RtlWow64IsWowGuestMachineSupported@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  return Wow64SystemServiceCall();
}

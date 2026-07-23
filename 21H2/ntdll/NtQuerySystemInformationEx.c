/*
 * XREFs of NtQuerySystemInformationEx @ 0x1800A0230
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x18005DD5C (RtlpFcUpdateLocalConfiguration.c)
 *     TppPoolUpdateNodeRelation @ 0x18006339C (TppPoolUpdateNodeRelation.c)
 *     RtlWow64GetProcessMachines @ 0x18007BE30 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x18007D040 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008974C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x180101E30 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 354;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

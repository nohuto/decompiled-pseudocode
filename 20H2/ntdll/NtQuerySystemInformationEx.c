/*
 * XREFs of NtQuerySystemInformationEx @ 0x18009FCC0
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x18005C82C (RtlpFcUpdateLocalConfiguration.c)
 *     TppPoolUpdateNodeRelation @ 0x180061EAC (TppPoolUpdateNodeRelation.c)
 *     RtlWow64GetProcessMachines @ 0x18007AE00 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x18007C6A0 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008914C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x180101FD0 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySystemInformationEx()
{
  __int64 result; // rax

  result = 353LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

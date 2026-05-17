/*
 * XREFs of NtQuerySystemInformationEx @ 0x18009FA20
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x18005C7DC (RtlpFcUpdateLocalConfiguration.c)
 *     TppPoolUpdateNodeRelation @ 0x180061D9C (TppPoolUpdateNodeRelation.c)
 *     RtlWow64GetProcessMachines @ 0x18007AD00 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x18007C5A0 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008904C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x180101AC0 (RtlpFcQueryFeatureConfigurationFromKernel.c)
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

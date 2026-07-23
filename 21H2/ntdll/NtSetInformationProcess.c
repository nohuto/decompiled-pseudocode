/*
 * XREFs of NtSetInformationProcess @ 0x18009D980
 * Callers:
 *     LdrpHandleTlsData @ 0x180054590 (LdrpHandleTlsData.c)
 *     LdrpDetectDetour @ 0x1800634AC (LdrpDetectDetour.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800693B0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180069C10 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x180077340 (RtlCreateUserStack.c)
 *     RtlSetProcessIsCritical @ 0x18008C0B0 (RtlSetProcessIsCritical.c)
 *     AVrfpEnableHandleVerifier @ 0x1800DAA30 (AVrfpEnableHandleVerifier.c)
 *     WerpSetProcessFaultInformation @ 0x1800DDC38 (WerpSetProcessFaultInformation.c)
 *     RtlCreateUserFiberShadowStack @ 0x1800E18E0 (RtlCreateUserFiberShadowStack.c)
 *     RtlFreeUserFiberShadowStack @ 0x1800E19F0 (RtlFreeUserFiberShadowStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  NTSTATUS result; // eax

  result = 28;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

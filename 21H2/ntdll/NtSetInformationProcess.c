/*
 * XREFs of NtSetInformationProcess @ 0x18009D9C0
 * Callers:
 *     LdrpHandleTlsData @ 0x180054590 (LdrpHandleTlsData.c)
 *     LdrpDetectDetour @ 0x1800634AC (LdrpDetectDetour.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800693B0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180069C10 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x180077340 (RtlCreateUserStack.c)
 *     RtlSetProcessIsCritical @ 0x18008C0B0 (RtlSetProcessIsCritical.c)
 *     AVrfpEnableHandleVerifier @ 0x1800DAA70 (AVrfpEnableHandleVerifier.c)
 *     WerpSetProcessFaultInformation @ 0x1800DDC78 (WerpSetProcessFaultInformation.c)
 *     RtlCreateUserFiberShadowStack @ 0x1800E1920 (RtlCreateUserFiberShadowStack.c)
 *     RtlFreeUserFiberShadowStack @ 0x1800E1A30 (RtlFreeUserFiberShadowStack.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationProcess()
{
  __int64 result; // rax

  result = 28LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

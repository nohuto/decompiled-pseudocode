/*
 * XREFs of NtDuplicateToken @ 0x18009DE80
 * Callers:
 *     RtlpTpInitializeData @ 0x18000BDF8 (RtlpTpInitializeData.c)
 *     RtlCheckTokenMembershipEx @ 0x180036520 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x18003C650 (RtlCheckTokenCapability.c)
 *     TppCritSetThread @ 0x18004EA64 (TppCritSetThread.c)
 *     RtlImpersonateSelfEx @ 0x180078430 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x1800E8AF4 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

__int64 NtDuplicateToken()
{
  __int64 result; // rax

  result = 66LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

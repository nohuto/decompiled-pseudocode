/*
 * XREFs of NtOpenProcessTokenEx @ 0x18009DC40
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180036520 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18003C650 (RtlCheckTokenCapability.c)
 *     TppCritSetThread @ 0x18004EA64 (TppCritSetThread.c)
 *     RtlAcquirePrivilege @ 0x1800781B0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180078430 (RtlImpersonateSelfEx.c)
 *     RtlpSysVolTakeOwnership @ 0x180088A2C (RtlpSysVolTakeOwnership.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800DA554 (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x1800E8AF4 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcessTokenEx()
{
  __int64 result; // rax

  result = 48LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

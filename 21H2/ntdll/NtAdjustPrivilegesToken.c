/*
 * XREFs of NtAdjustPrivilegesToken @ 0x18009DE60
 * Callers:
 *     TppCritSetThread @ 0x18004EA64 (TppCritSetThread.c)
 *     RtlAcquirePrivilege @ 0x1800781B0 (RtlAcquirePrivilege.c)
 *     RtlAdjustPrivilege @ 0x18007A210 (RtlAdjustPrivilege.c)
 *     RtlReleasePrivilege @ 0x1800814A0 (RtlReleasePrivilege.c)
 *     RtlpSysVolTakeOwnership @ 0x180088A2C (RtlpSysVolTakeOwnership.c)
 *     RtlRemovePrivileges @ 0x180088E70 (RtlRemovePrivileges.c)
 * Callees:
 *     <none>
 */

__int64 NtAdjustPrivilegesToken()
{
  __int64 result; // rax

  result = 65LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

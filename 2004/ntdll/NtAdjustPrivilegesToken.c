/*
 * XREFs of NtAdjustPrivilegesToken @ 0x18009D630
 * Callers:
 *     TppCritSetThread @ 0x180054424 (TppCritSetThread.c)
 *     RtlAcquirePrivilege @ 0x180077080 (RtlAcquirePrivilege.c)
 *     RtlAdjustPrivilege @ 0x1800790E0 (RtlAdjustPrivilege.c)
 *     RtlReleasePrivilege @ 0x180080A80 (RtlReleasePrivilege.c)
 *     RtlpSysVolTakeOwnership @ 0x18008832C (RtlpSysVolTakeOwnership.c)
 *     RtlRemovePrivileges @ 0x180088770 (RtlRemovePrivileges.c)
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

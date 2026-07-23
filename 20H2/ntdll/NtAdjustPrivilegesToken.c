/*
 * XREFs of NtAdjustPrivilegesToken @ 0x18009D8D0
 * Callers:
 *     TppCritSetThread @ 0x180054474 (TppCritSetThread.c)
 *     RtlAcquirePrivilege @ 0x180077180 (RtlAcquirePrivilege.c)
 *     RtlAdjustPrivilege @ 0x1800791E0 (RtlAdjustPrivilege.c)
 *     RtlReleasePrivilege @ 0x180080B80 (RtlReleasePrivilege.c)
 *     RtlpSysVolTakeOwnership @ 0x18008842C (RtlpSysVolTakeOwnership.c)
 *     RtlRemovePrivileges @ 0x180088870 (RtlRemovePrivileges.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 65;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

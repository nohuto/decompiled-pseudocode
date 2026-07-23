/*
 * XREFs of NtOpenProcessToken @ 0x18009FB10
 * Callers:
 *     RtlpGetDefaultsSubjectContext @ 0x1800682BC (RtlpGetDefaultsSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800777DC (RtlpSetSecurityObject.c)
 *     RtlAdjustPrivilege @ 0x18007A210 (RtlAdjustPrivilege.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007DD70 (RtlpValidOwnerSubjectContext.c)
 *     WerEscalationLazyInit @ 0x1800DE178 (WerEscalationLazyInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 297;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

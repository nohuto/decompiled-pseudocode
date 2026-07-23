/*
 * XREFs of NtOpenProcessToken @ 0x18009F300
 * Callers:
 *     RtlpGetDefaultsSubjectContext @ 0x180066CBC (RtlpGetDefaultsSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800766AC (RtlpSetSecurityObject.c)
 *     RtlAdjustPrivilege @ 0x1800790E0 (RtlAdjustPrivilege.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007D2D0 (RtlpValidOwnerSubjectContext.c)
 *     WerEscalationLazyInit @ 0x1800DE068 (WerEscalationLazyInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 296;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

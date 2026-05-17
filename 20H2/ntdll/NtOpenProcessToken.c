/*
 * XREFs of NtOpenProcessToken @ 0x18009F5A0
 * Callers:
 *     RtlpGetDefaultsSubjectContext @ 0x180066DCC (RtlpGetDefaultsSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800767AC (RtlpSetSecurityObject.c)
 *     RtlAdjustPrivilege @ 0x1800791E0 (RtlAdjustPrivilege.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007D3D0 (RtlpValidOwnerSubjectContext.c)
 *     WerEscalationLazyInit @ 0x1800DE408 (WerEscalationLazyInit.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcessToken()
{
  __int64 result; // rax

  result = 296LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

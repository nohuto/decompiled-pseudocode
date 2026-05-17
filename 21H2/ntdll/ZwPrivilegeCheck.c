/*
 * XREFs of ZwPrivilegeCheck @ 0x18009FD30
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007DD70 (RtlpValidOwnerSubjectContext.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D6FA0 (RtlNewSecurityGrantedAccess.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E8C44 (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 ZwPrivilegeCheck()
{
  __int64 result; // rax

  result = 312LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

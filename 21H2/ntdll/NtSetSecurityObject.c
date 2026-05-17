/*
 * XREFs of NtSetSecurityObject @ 0x1800A0B50
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800886E0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x180088A2C (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

__int64 NtSetSecurityObject()
{
  __int64 result; // rax

  result = 425LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

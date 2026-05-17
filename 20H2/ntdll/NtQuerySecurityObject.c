/*
 * XREFs of NtQuerySecurityObject @ 0x18009FC00
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800880E0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CBDE0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlIsUntrustedObject @ 0x1800E67F0 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySecurityObject()
{
  __int64 result; // rax

  result = 347LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

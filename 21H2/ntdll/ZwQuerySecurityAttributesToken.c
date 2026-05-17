/*
 * XREFs of ZwQuerySecurityAttributesToken @ 0x1800A0190
 * Callers:
 *     RtlpQueryPackageIdentityAttributes @ 0x18006AC60 (RtlpQueryPackageIdentityAttributes.c)
 *     RtlQueryTokenHostIdAsUlong64 @ 0x180083AE0 (RtlQueryTokenHostIdAsUlong64.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySecurityAttributesToken()
{
  __int64 result; // rax

  result = 347LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

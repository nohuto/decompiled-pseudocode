/*
 * XREFs of __strtoi64 @ 0x4B2FB755
 * Callers:
 *     __atoi64 @ 0x4B2F6640 (__atoi64.c)
 * Callees:
 *     strtoxq @ 0x4B2FB4FC (strtoxq.c)
 */

__int64 __cdecl _strtoi64(const char *String, char **EndPtr, int Radix)
{
  __int64 result; // rax

  LODWORD(result) = strtoxq(
                      (int)&__initiallocalestructinfo,
                      (unsigned __int8 *)String,
                      (unsigned __int8 **)EndPtr,
                      Radix,
                      0);
  return result;
}

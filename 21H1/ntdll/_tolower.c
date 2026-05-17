/*
 * XREFs of _tolower @ 0x4B2FA530
 * Callers:
 *     <none>
 * Callees:
 *     ___pctype_func @ 0x4B2FB4F6 (___pctype_func.c)
 */

int __cdecl tolower(int C)
{
  int v1; // ebx
  int v2; // esi

  v1 = C;
  v2 = -1;
  if ( C != -1 )
    v2 = (unsigned __int8)C;
  if ( (__pctype_func()[v2] & 1) != 0 )
    return C + 32;
  return v1;
}

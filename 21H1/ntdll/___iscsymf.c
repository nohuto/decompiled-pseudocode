/*
 * XREFs of ___iscsymf @ 0x4B2F6090
 * Callers:
 *     <none>
 * Callees:
 *     ___pctype_func @ 0x4B2FB4F6 (___pctype_func.c)
 */

int __cdecl __iscsymf(int C)
{
  int v1; // esi

  v1 = -1;
  if ( C != -1 )
    v1 = (unsigned __int8)C;
  return (__pctype_func()[v1] & 0x103) != 0 || C == 95;
}

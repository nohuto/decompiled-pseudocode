/*
 * XREFs of _hextodec @ 0x4B2FE3D5
 * Callers:
 *     __input_l @ 0x4B2FE430 (__input_l.c)
 * Callees:
 *     ___pctype_func @ 0x4B2FB4F6 (___pctype_func.c)
 */

unsigned int __cdecl hextodec(unsigned __int8 a1)
{
  int v1; // edi

  v1 = (char)a1;
  if ( (__pctype_func()[a1] & 4) == 0 )
    return ((char)a1 & 0xFFFFFFDF) - 7;
  return v1;
}

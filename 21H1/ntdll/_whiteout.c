/*
 * XREFs of _whiteout @ 0x4B2FEB50
 * Callers:
 *     __input_l @ 0x4B2FE430 (__input_l.c)
 * Callees:
 *     ___pctype_func @ 0x4B2FB4F6 (___pctype_func.c)
 *     _inc @ 0x4B2FE3FC (_inc.c)
 */

int __cdecl whiteout(_DWORD *a1, _DWORD *a2)
{
  int v2; // ebx

  do
  {
    ++*a1;
    v2 = inc(a2);
  }
  while ( v2 != -1 && (__pctype_func()[(unsigned __int8)v2] & 8) != 0 );
  return v2;
}

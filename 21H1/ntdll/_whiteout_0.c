/*
 * XREFs of _whiteout_0 @ 0x4B301E7E
 * Callers:
 *     __input_s @ 0x4B30166C (__input_s.c)
 * Callees:
 *     _inc @ 0x4B2FE3FC (_inc.c)
 */

int __cdecl whiteout_0(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  do
  {
    ++*a1;
    result = inc(a2);
  }
  while ( result != -1 && (_pctype[(unsigned __int8)result] & 8) != 0 );
  return result;
}

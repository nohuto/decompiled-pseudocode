/*
 * XREFs of write_multi_char_1 @ 0x4B302952
 * Callers:
 *     __woutput_s @ 0x4B301F94 (__woutput_s.c)
 * Callees:
 *     write_char_1 @ 0x4B3028FC (write_char_1.c)
 */

_DWORD *__cdecl write_multi_char_1(__int16 a1, int a2, int a3, _DWORD *a4)
{
  int v4; // esi
  _DWORD *result; // eax

  v4 = a2;
  if ( a2 > 0 )
  {
    do
    {
      --v4;
      result = write_char_1(a1, a3, a4);
    }
    while ( *a4 != -1 && v4 > 0 );
  }
  return result;
}

/*
 * XREFs of write_multi_char_0 @ 0x4B2FCD80
 * Callers:
 *     __woutput_l @ 0x4B2FC3A0 (__woutput_l.c)
 * Callees:
 *     write_char_0 @ 0x4B2FCD40 (write_char_0.c)
 */

_DWORD *__cdecl write_multi_char_0(wchar_t Character, int a2, FILE *Stream, _DWORD *a4)
{
  int v4; // esi
  _DWORD *result; // eax

  v4 = a2;
  if ( a2 > 0 )
  {
    do
    {
      --v4;
      result = write_char_0(Character, Stream, a4);
    }
    while ( *a4 != -1 && v4 > 0 );
  }
  return result;
}

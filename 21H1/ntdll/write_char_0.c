/*
 * XREFs of write_char_0 @ 0x4B2FCD40
 * Callers:
 *     __woutput_l @ 0x4B2FC3A0 (__woutput_l.c)
 *     write_multi_char_0 @ 0x4B2FCD80 (write_multi_char_0.c)
 *     write_string_0 @ 0x4B2FCDAE (write_string_0.c)
 * Callees:
 *     __fputwc_nolock @ 0x4B2FEE10 (__fputwc_nolock.c)
 */

_DWORD *__cdecl write_char_0(wchar_t Character, FILE *Stream, _DWORD *a3)
{
  _DWORD *result; // eax

  if ( ((Stream->_flag & 0x40) == 0 || Stream->_base)
    && _fputwc_nolock(Character, Stream) == 0xFFFF
    && (Stream->_flag & 0x20) != 0 )
  {
    result = a3;
    *a3 = -1;
  }
  else
  {
    result = a3;
    ++*a3;
  }
  return result;
}

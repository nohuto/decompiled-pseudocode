/*
 * XREFs of __fputwc_nolock @ 0x4B2FEE10
 * Callers:
 *     write_char_0 @ 0x4B2FCD40 (write_char_0.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __flswbuf @ 0x4B2FEF27 (__flswbuf.c)
 */

wint_t __cdecl _fputwc_nolock(wchar_t Character, FILE *Stream)
{
  wint_t result; // ax
  bool v3; // sf

  if ( Stream )
  {
    v3 = Stream->_cnt - 2 < 0;
    Stream->_cnt -= 2;
    if ( v3 )
    {
      return _flswbuf(Character, Stream);
    }
    else
    {
      result = Character;
      *(_WORD *)Stream->_ptr = Character;
      Stream->_ptr += 2;
    }
  }
  else
  {
    _invalid_parameter();
    return -1;
  }
  return result;
}

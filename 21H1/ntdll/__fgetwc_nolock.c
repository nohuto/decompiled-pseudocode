/*
 * XREFs of __fgetwc_nolock @ 0x4B30365C
 * Callers:
 *     ReadString_1 @ 0x4B3029D2 (ReadString_1.c)
 *     _whiteout_1 @ 0x4B302E00 (_whiteout_1.c)
 *     __winput_s @ 0x4B302E38 (__winput_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __filwbuf_s @ 0x4B30372C (__filwbuf_s.c)
 */

wint_t __cdecl _fgetwc_nolock(FILE *Stream)
{
  wint_t result; // ax
  bool v2; // sf

  if ( Stream )
  {
    v2 = Stream->_cnt - 2 < 0;
    Stream->_cnt -= 2;
    if ( v2 )
    {
      return _filwbuf_s(Stream);
    }
    else
    {
      result = *(_WORD *)Stream->_ptr;
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

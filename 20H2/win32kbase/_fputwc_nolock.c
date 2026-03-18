/*
 * XREFs of _fputwc_nolock @ 0x1C00CD838
 * Callers:
 *     write_char_0 @ 0x1C00CD57C (write_char_0.c)
 * Callees:
 *     ?MarkInvalid@CIgnoreInputQueue@@EEAAXXZ @ 0x1C009B020 (-MarkInvalid@CIgnoreInputQueue@@EEAAXXZ.c)
 *     _flswbuf @ 0x1C00CD8D8 (_flswbuf.c)
 */

wint_t __cdecl fputwc_nolock(wchar_t Ch, FILE *File)
{
  wint_t result; // ax
  bool v3; // sf

  if ( File )
  {
    v3 = File->_cnt - 2 < 0;
    File->_cnt -= 2;
    if ( v3 )
    {
      return flswbuf(Ch);
    }
    else
    {
      *(_WORD *)File->_ptr = Ch;
      result = Ch;
      File->_ptr += 2;
    }
  }
  else
  {
    CIgnoreInputQueue::MarkInvalid(0LL);
    return -1;
  }
  return result;
}

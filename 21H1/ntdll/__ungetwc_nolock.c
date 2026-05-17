/*
 * XREFs of __ungetwc_nolock @ 0x4B30369A
 * Callers:
 *     _un_inc @ 0x4B302DE8 (_un_inc.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

wint_t __cdecl _ungetwc_nolock(wint_t Character, FILE *Stream)
{
  wint_t result; // ax
  int flag; // ecx
  char *ptr; // eax
  char *v5; // eax
  int v6; // ecx

  if ( !Stream )
  {
    _invalid_parameter();
    return -1;
  }
  if ( Character == 0xFFFF )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  ptr = Stream->_ptr;
  if ( Stream->_ptr < Stream->_base + 2 )
  {
    if ( Stream->_cnt || Stream->_bufsiz < 2u )
      return -1;
    ptr = Stream->_base + 2;
  }
  v5 = ptr - 2;
  Stream->_ptr = v5;
  if ( (flag & 0x40) != 0 )
  {
    if ( *(_WORD *)v5 != Character )
    {
      Stream->_ptr = v5 + 2;
      return -1;
    }
  }
  else
  {
    *(_WORD *)v5 = Character;
  }
  v6 = Stream->_flag;
  result = Character;
  Stream->_cnt += 2;
  Stream->_flag = v6 & 0xFFFFFFEE | 1;
  return result;
}

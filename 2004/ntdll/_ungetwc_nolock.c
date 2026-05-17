/*
 * XREFs of _ungetwc_nolock @ 0x18009B2C8
 * Callers:
 *     ReadString_1 @ 0x18009A3BC (ReadString_1.c)
 *     _winput_s @ 0x18009A88C (_winput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008C168 (_invalid_parameter.c)
 */

wint_t __cdecl ungetwc_nolock(wint_t Character, FILE *Stream)
{
  int flag; // r9d
  char *ptr; // rax
  char *v5; // rax
  int v6; // eax

  if ( !Stream )
  {
    invalid_parameter();
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
  Stream->_cnt += 2;
  Stream->_flag = v6 & 0xFFFFFFEE | 1;
  return Character;
}

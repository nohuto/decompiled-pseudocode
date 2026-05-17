/*
 * XREFs of __ungetc_nolock @ 0x4B2FEE9C
 * Callers:
 *     ReadString @ 0x4B2FE156 (ReadString.c)
 *     __input_l @ 0x4B2FE430 (__input_l.c)
 *     ReadString_0 @ 0x4B3013DC (ReadString_0.c)
 *     __input_s @ 0x4B30166C (__input_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __getbuf @ 0x4B2FEF3A (__getbuf.c)
 */

int __cdecl _ungetc_nolock(int Character, FILE *Stream)
{
  int result; // eax
  int flag; // eax
  char *base; // eax
  char *ptr; // edi
  int v6; // edx
  char *v7; // eax

  if ( !Stream )
  {
    _invalid_parameter();
    return -1;
  }
  if ( Character == -1 )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  base = Stream->_base;
  if ( !base )
  {
    _getbuf(Stream);
    base = Stream->_base;
  }
  ptr = Stream->_ptr;
  if ( Stream->_ptr == base )
  {
    if ( Stream->_cnt )
      return -1;
    Stream->_ptr = ++ptr;
  }
  v6 = Stream->_flag;
  v7 = ptr - 1;
  Stream->_ptr = ptr - 1;
  if ( (v6 & 0x40) != 0 )
  {
    if ( *v7 != (_BYTE)Character )
    {
      Stream->_ptr = ptr;
      return -1;
    }
  }
  else
  {
    *v7 = Character;
    v6 = Stream->_flag;
  }
  ++Stream->_cnt;
  result = (unsigned __int8)Character;
  Stream->_flag = v6 & 0xFFFFFFEE | 1;
  return result;
}

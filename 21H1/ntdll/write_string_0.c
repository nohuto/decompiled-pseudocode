/*
 * XREFs of write_string_0 @ 0x4B2FCDAE
 * Callers:
 *     __woutput_l @ 0x4B2FC3A0 (__woutput_l.c)
 * Callees:
 *     write_char_0 @ 0x4B2FCD40 (write_char_0.c)
 *     __errno @ 0x4B33D420 (__errno.c)
 */

void __cdecl write_string_0(wchar_t *a1, int a2, FILE *Stream, _DWORD *a4)
{
  int v4; // edi
  wchar_t *v5; // eax

  if ( (Stream->_flag & 0x40) == 0 || Stream->_base )
  {
    v4 = a2;
    if ( a2 > 0 )
    {
      v5 = a1;
      do
      {
        --v4;
        write_char_0(*v5, Stream, a4);
        v5 = ++a1;
        if ( *a4 == -1 )
        {
          if ( *_errno() != 42 )
            return;
          write_char_0(0x3Fu, Stream, a4);
          v5 = a1;
        }
      }
      while ( v4 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
}

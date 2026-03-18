/*
 * XREFs of write_string @ 0x1C001AE74
 * Callers:
 *     _woutput_l @ 0x1C001A4DC (_woutput_l.c)
 * Callees:
 *     write_char @ 0x1C001ADC8 (write_char.c)
 */

void __fastcall write_string(wchar_t *string, int len, _iobuf *f, int *pnumwritten)
{
  int v6; // ebx

  v6 = len;
  if ( (f->_flag & 0x40) == 0 || f->_base )
  {
    if ( len > 0 )
    {
      do
      {
        --v6;
        write_char(*string++, f, pnumwritten);
        if ( *pnumwritten == -1 )
        {
          if ( gbl_errno != 42 )
            return;
          write_char(0x3Fu, f, pnumwritten);
        }
      }
      while ( v6 > 0 );
    }
  }
  else
  {
    *pnumwritten += len;
  }
}

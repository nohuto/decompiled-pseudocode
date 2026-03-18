/*
 * XREFs of write_char_0 @ 0x1C00CE36C
 * Callers:
 *     _woutput_l @ 0x1C00CDA80 (_woutput_l.c)
 *     write_multi_char_0 @ 0x1C00CE3C0 (write_multi_char_0.c)
 *     write_string_0 @ 0x1C00CE418 (write_string_0.c)
 * Callees:
 *     _fputwc_nolock @ 0x1C00CE628 (_fputwc_nolock.c)
 */

__int16 __fastcall write_char_0(wchar_t a1, FILE *a2, _DWORD *a3)
{
  int flag; // eax

  flag = a2->_flag;
  if ( (flag & 0x40) == 0 || a2->_base )
  {
    LOWORD(flag) = fputwc_nolock(a1, a2);
    if ( (_WORD)flag == 0xFFFF && (flag = a2->_flag, (flag & 0x20) != 0) )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
  return flag;
}

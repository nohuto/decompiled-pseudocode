/*
 * XREFs of _flsbuf @ 0x1C00CC314
 * Callers:
 *     _vsnprintf_l @ 0x1C00CBCD8 (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1C00CBE24 (_vsnwprintf_l.c)
 *     write_char @ 0x1C00CCB60 (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}

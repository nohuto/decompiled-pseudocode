/*
 * XREFs of _flsbuf @ 0x18009279C
 * Callers:
 *     _snprintf @ 0x18008D100 (_snprintf.c)
 *     _snwprintf @ 0x18008D1B0 (_snwprintf.c)
 *     swprintf @ 0x18008D7F0 (swprintf.c)
 *     _vsprintf_l @ 0x18008D920 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x18008D9F4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18008DABC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18008DB8C (_vsnwprintf_l.c)
 *     sprintf @ 0x180090830 (sprintf.c)
 *     write_char @ 0x180093010 (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}

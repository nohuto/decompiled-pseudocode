/*
 * XREFs of _flsbuf @ 0x180092E9C
 * Callers:
 *     _snprintf @ 0x18008D800 (_snprintf.c)
 *     _snwprintf @ 0x18008D8B0 (_snwprintf.c)
 *     swprintf @ 0x18008DEF0 (swprintf.c)
 *     _vsprintf_l @ 0x18008E020 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x18008E0F4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18008E1BC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18008E28C (_vsnwprintf_l.c)
 *     sprintf @ 0x180090F30 (sprintf.c)
 *     write_char @ 0x180093710 (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}

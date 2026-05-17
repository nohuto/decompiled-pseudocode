/*
 * XREFs of _flsbuf @ 0x18009289C
 * Callers:
 *     _snprintf @ 0x18008D200 (_snprintf.c)
 *     _snwprintf @ 0x18008D2B0 (_snwprintf.c)
 *     swprintf @ 0x18008D8F0 (swprintf.c)
 *     _vsprintf_l @ 0x18008DA20 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x18008DAF4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18008DBBC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18008DC8C (_vsnwprintf_l.c)
 *     sprintf @ 0x180090930 (sprintf.c)
 *     write_char @ 0x180093110 (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}

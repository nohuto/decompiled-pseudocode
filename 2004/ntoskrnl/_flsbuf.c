/*
 * XREFs of _flsbuf @ 0x1403D1398
 * Callers:
 *     _vsnwprintf_l @ 0x1403CDA90 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1403CDBB0 (_vsnprintf_l.c)
 *     _snprintf @ 0x1403CE5D0 (_snprintf.c)
 *     _snwprintf @ 0x1403CE690 (_snwprintf.c)
 *     swprintf @ 0x1403CE920 (swprintf.c)
 *     _vswprintf_l @ 0x1403CEA0C (_vswprintf_l.c)
 *     sprintf @ 0x1403CFCF0 (sprintf.c)
 *     _vsprintf_l @ 0x1403D07E8 (_vsprintf_l.c)
 *     write_char_0 @ 0x1403D2608 (write_char_0.c)
 *     _soutput_s @ 0x1403D593C (_soutput_s.c)
 *     _swoutput_s @ 0x1403D5AA4 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}

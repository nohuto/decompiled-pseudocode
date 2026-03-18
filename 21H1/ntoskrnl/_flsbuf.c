/*
 * XREFs of _flsbuf @ 0x1403D0558
 * Callers:
 *     _vsnwprintf_l @ 0x1403CCC50 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1403CCD70 (_vsnprintf_l.c)
 *     _snprintf @ 0x1403CD790 (_snprintf.c)
 *     _snwprintf @ 0x1403CD850 (_snwprintf.c)
 *     swprintf @ 0x1403CDAE0 (swprintf.c)
 *     _vswprintf_l @ 0x1403CDBCC (_vswprintf_l.c)
 *     sprintf @ 0x1403CEEB0 (sprintf.c)
 *     _vsprintf_l @ 0x1403CF9A8 (_vsprintf_l.c)
 *     write_char_0 @ 0x1403D17C8 (write_char_0.c)
 *     _soutput_s @ 0x1403D4AFC (_soutput_s.c)
 *     _swoutput_s @ 0x1403D4C64 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}

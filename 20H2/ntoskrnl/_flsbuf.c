/*
 * XREFs of _flsbuf @ 0x1403D4028
 * Callers:
 *     _vsnwprintf_l @ 0x1403D0720 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1403D0840 (_vsnprintf_l.c)
 *     _snprintf @ 0x1403D1260 (_snprintf.c)
 *     _snwprintf @ 0x1403D1320 (_snwprintf.c)
 *     swprintf @ 0x1403D15B0 (swprintf.c)
 *     _vswprintf_l @ 0x1403D169C (_vswprintf_l.c)
 *     sprintf @ 0x1403D2980 (sprintf.c)
 *     _vsprintf_l @ 0x1403D3478 (_vsprintf_l.c)
 *     write_char_0 @ 0x1403D5298 (write_char_0.c)
 *     _soutput_s @ 0x1403D85CC (_soutput_s.c)
 *     _swoutput_s @ 0x1403D8734 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}

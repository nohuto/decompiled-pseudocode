/*
 * XREFs of _get_printf_count_output @ 0x1403D2D6C
 * Callers:
 *     _woutput_l @ 0x1403D13A8 (_woutput_l.c)
 *     _output_l @ 0x1403D1DCC (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140C12E40 == (_security_cookie | 1);
}

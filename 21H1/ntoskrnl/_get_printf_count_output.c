/*
 * XREFs of _get_printf_count_output @ 0x1403D1F2C
 * Callers:
 *     _woutput_l @ 0x1403D0568 (_woutput_l.c)
 *     _output_l @ 0x1403D0F8C (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140C12E00 == (_security_cookie | 1);
}

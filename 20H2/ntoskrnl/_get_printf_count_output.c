/*
 * XREFs of _get_printf_count_output @ 0x1403D59FC
 * Callers:
 *     _woutput_l @ 0x1403D4038 (_woutput_l.c)
 *     _output_l @ 0x1403D4A5C (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140C12E40 == (_security_cookie | 1);
}

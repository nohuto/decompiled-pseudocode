/*
 * XREFs of _get_printf_count_output @ 0x1C00CE4A4
 * Callers:
 *     _output_l @ 0x1C00CD114 (_output_l.c)
 *     _woutput_l @ 0x1C00CDA80 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C024AA20 == (_security_cookie | 1);
}

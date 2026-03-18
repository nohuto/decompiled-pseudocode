/*
 * XREFs of _get_printf_count_output @ 0x1C00CD6B4
 * Callers:
 *     _output_l @ 0x1C00CC324 (_output_l.c)
 *     _woutput_l @ 0x1C00CCC90 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C0248A20 == (_security_cookie | 1);
}

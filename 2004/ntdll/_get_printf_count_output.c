/*
 * XREFs of _get_printf_count_output @ 0x180095FB0
 * Callers:
 *     _output_l @ 0x1800927B0 (_output_l.c)
 *     _woutput_l @ 0x180093140 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_180168430 == (_security_cookie | 1);
}

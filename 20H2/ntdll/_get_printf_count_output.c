/*
 * XREFs of _get_printf_count_output @ 0x1800960B0
 * Callers:
 *     _output_l @ 0x1800928B0 (_output_l.c)
 *     _woutput_l @ 0x180093240 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_18016A430 == (_security_cookie | 1);
}

/*
 * XREFs of _get_printf_count_output @ 0x1800966B0
 * Callers:
 *     _output_l @ 0x180092EB0 (_output_l.c)
 *     _woutput_l @ 0x180093840 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_18016A430 == (_security_cookie | 1);
}

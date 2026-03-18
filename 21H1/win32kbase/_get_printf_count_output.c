/*
 * XREFs of _get_printf_count_output @ 0x1C00CDBF4
 * Callers:
 *     _output_l @ 0x1C00CC864 (_output_l.c)
 *     _woutput_l @ 0x1C00CD1D0 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C0250A20 == (_security_cookie | 1);
}

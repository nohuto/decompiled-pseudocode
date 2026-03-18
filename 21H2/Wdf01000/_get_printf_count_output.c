/*
 * XREFs of _get_printf_count_output @ 0x1C003643C
 * Callers:
 *     _woutput_l @ 0x1C00359CC (_woutput_l.c)
 * Callees:
 *     <none>
 */

_BOOL8 get_printf_count_output()
{
  return _enable_percent_n == (_security_cookie | 1);
}

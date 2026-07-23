/*
 * XREFs of __get_printf_count_output @ 0x4B2FED52
 * Callers:
 *     __output_l @ 0x4B2FB9B0 (__output_l.c)
 *     __woutput_l @ 0x4B2FC3A0 (__woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl _get_printf_count_output()
{
  return dword_4B3A40FC == ((unsigned int)__security_cookie | 1);
}

/*
 * XREFs of _set_statfp @ 0x1800958F8
 * Callers:
 *     _exception_enabled @ 0x180094770 (_exception_enabled.c)
 *     _handle_exc @ 0x180095008 (_handle_exc.c)
 * Callees:
 *     _get_fpsr @ 0x1800A4430 (_get_fpsr.c)
 */

__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}

/*
 * XREFs of _get_fpsr @ 0x1800A4430
 * Callers:
 *     _control87 @ 0x180094430 (_control87.c)
 *     _clrfp @ 0x180095850 (_clrfp.c)
 *     _ctrlfp @ 0x180095874 (_ctrlfp.c)
 *     _set_statfp @ 0x1800958F8 (_set_statfp.c)
 *     _statfp @ 0x180095920 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

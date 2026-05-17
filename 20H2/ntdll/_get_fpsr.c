/*
 * XREFs of _get_fpsr @ 0x1800A3E70
 * Callers:
 *     _control87 @ 0x180093E30 (_control87.c)
 *     _clrfp @ 0x180095250 (_clrfp.c)
 *     _ctrlfp @ 0x180095274 (_ctrlfp.c)
 *     _set_statfp @ 0x1800952F8 (_set_statfp.c)
 *     _statfp @ 0x180095320 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

/*
 * XREFs of _get_fpsr @ 0x1C00D2DE0
 * Callers:
 *     _clrfp @ 0x1C00D2C5C (_clrfp.c)
 *     _ctrlfp @ 0x1C00D2C80 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00D2D04 (_set_statfp.c)
 *     _statfp @ 0x1C00D2D2C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

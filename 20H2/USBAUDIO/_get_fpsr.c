/*
 * XREFs of _get_fpsr @ 0x1C0013510
 * Callers:
 *     _clrfp @ 0x1C00127BC (_clrfp.c)
 *     _ctrlfp @ 0x1C00127E0 (_ctrlfp.c)
 *     _set_statfp @ 0x1C0012864 (_set_statfp.c)
 *     _statfp @ 0x1C001288C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

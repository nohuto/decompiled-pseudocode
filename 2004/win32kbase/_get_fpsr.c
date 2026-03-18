/*
 * XREFs of _get_fpsr @ 0x1C00D3840
 * Callers:
 *     _clrfp @ 0x1C00D36BC (_clrfp.c)
 *     _ctrlfp @ 0x1C00D36E0 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00D3764 (_set_statfp.c)
 *     _statfp @ 0x1C00D378C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

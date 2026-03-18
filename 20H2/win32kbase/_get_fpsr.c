/*
 * XREFs of _get_fpsr @ 0x1C00D3710
 * Callers:
 *     _clrfp @ 0x1C00D358C (_clrfp.c)
 *     _ctrlfp @ 0x1C00D35B0 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00D3634 (_set_statfp.c)
 *     _statfp @ 0x1C00D365C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

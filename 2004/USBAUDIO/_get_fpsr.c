/*
 * XREFs of _get_fpsr @ 0x1C0013E50
 * Callers:
 *     _clrfp @ 0x1C00130FC (_clrfp.c)
 *     _ctrlfp @ 0x1C0013120 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00131A4 (_set_statfp.c)
 *     _statfp @ 0x1C00131CC (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

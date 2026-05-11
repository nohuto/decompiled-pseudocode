/*
 * XREFs of _get_fpsr @ 0x1C0013FB0
 * Callers:
 *     _clrfp @ 0x1C001325C (_clrfp.c)
 *     _ctrlfp @ 0x1C0013280 (_ctrlfp.c)
 *     _set_statfp @ 0x1C0013304 (_set_statfp.c)
 *     _statfp @ 0x1C001332C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

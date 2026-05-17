/*
 * XREFs of _get_fpsr @ 0x1800A3BD0
 * Callers:
 *     _control87 @ 0x180093D30 (_control87.c)
 *     _clrfp @ 0x180095150 (_clrfp.c)
 *     _ctrlfp @ 0x180095174 (_ctrlfp.c)
 *     _set_statfp @ 0x1800951F8 (_set_statfp.c)
 *     _statfp @ 0x180095220 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

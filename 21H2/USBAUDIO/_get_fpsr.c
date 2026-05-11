/*
 * XREFs of _get_fpsr @ 0x1C0013A70
 * Callers:
 *     _clrfp @ 0x1C0012D1C (_clrfp.c)
 *     _ctrlfp @ 0x1C0012D40 (_ctrlfp.c)
 *     _set_statfp @ 0x1C0012DC4 (_set_statfp.c)
 *     _statfp @ 0x1C0012DEC (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

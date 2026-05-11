/*
 * XREFs of _statfp @ 0x1C00131CC
 * Callers:
 *     _raise_exc_ex @ 0x1C0012E40 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C0013E50 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

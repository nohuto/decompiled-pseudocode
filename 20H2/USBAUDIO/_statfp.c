/*
 * XREFs of _statfp @ 0x1C001288C
 * Callers:
 *     _raise_exc_ex @ 0x1C0012500 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C0013510 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

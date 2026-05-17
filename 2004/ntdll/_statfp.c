/*
 * XREFs of _statfp @ 0x180095220
 * Callers:
 *     _raise_exc_ex @ 0x180094C10 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1800A3BD0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

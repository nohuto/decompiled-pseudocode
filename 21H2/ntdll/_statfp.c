/*
 * XREFs of _statfp @ 0x180095920
 * Callers:
 *     _raise_exc_ex @ 0x180095310 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1800A4430 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

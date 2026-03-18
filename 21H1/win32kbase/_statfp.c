/*
 * XREFs of _statfp @ 0x1C00D2D2C
 * Callers:
 *     _raise_exc_ex @ 0x1C00D29A0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C00D2DE0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

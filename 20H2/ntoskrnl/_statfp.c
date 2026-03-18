/*
 * XREFs of _statfp @ 0x1403D5F20
 * Callers:
 *     _raise_exc_ex @ 0x1403D5B60 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1404072C0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

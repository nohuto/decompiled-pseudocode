/*
 * XREFs of _statfp @ 0x1C00D365C
 * Callers:
 *     _raise_exc_ex @ 0x1C00D32D0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C00D3710 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

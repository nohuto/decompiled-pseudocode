/*
 * XREFs of _clrfp @ 0x180095250
 * Callers:
 *     _raise_exc_ex @ 0x180094D10 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x18009625A (_fclrf.c)
 *     _get_fpsr @ 0x1800A3E70 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}

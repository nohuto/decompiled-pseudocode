/*
 * XREFs of _clrfp @ 0x1C00D2C5C
 * Callers:
 *     _raise_exc_ex @ 0x1C00D29A0 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1C00D2D5A (_fclrf.c)
 *     _get_fpsr @ 0x1C00D2DE0 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}

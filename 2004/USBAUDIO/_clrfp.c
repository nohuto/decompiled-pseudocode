/*
 * XREFs of _clrfp @ 0x1C00130FC
 * Callers:
 *     _raise_exc_ex @ 0x1C0012E40 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1C00131FA (_fclrf.c)
 *     _get_fpsr @ 0x1C0013E50 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}

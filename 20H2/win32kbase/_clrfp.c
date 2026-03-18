/*
 * XREFs of _clrfp @ 0x1C00D358C
 * Callers:
 *     _raise_exc_ex @ 0x1C00D32D0 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1C00D368A (_fclrf.c)
 *     _get_fpsr @ 0x1C00D3710 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}

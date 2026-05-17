/*
 * XREFs of __clrfp @ 0x4B2FDFBB
 * Callers:
 *     __raise_exc_ex @ 0x4B2FDB09 (__raise_exc_ex.c)
 * Callees:
 *     <none>
 */

int __usercall _clrfp@<eax>(__int16 a1@<fpstat>)
{
  __asm { fnclex }
  return a1;
}

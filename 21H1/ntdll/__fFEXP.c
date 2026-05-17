/*
 * XREFs of __fFEXP @ 0x4B2FB170
 * Callers:
 *     <none>
 * Callees:
 *     __ffexpm1 @ 0x4B2FB2AD (__ffexpm1.c)
 */

int __usercall _fFEXP@<eax>(int a1@<ebp>)
{
  *(_BYTE *)(a1 - 144) = -2;
  _ffexpm1();
  return _rttospop();
}

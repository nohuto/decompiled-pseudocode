/*
 * XREFs of __fFATN2 @ 0x4B2FD0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __usercall _fFATN2@<st0>(__int16 a1@<cx>, int a2@<ebp>, long double a3@<st1>, long double a4@<st0>)
{
  double result; // st7

  *(_BYTE *)(a2 - 144) = -2;
  result = atan2(fabs(a4), fabs(a3));
  if ( (_BYTE)a1 )
    result = 3.141592653589793238 - result;
  if ( HIBYTE(a1) )
    return -result;
  return result;
}

/*
 * XREFs of __rtforatn20 @ 0x4B2FD100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall _rtforatn20(__int16 a1)
{
  double result; // st7

  if ( (_BYTE)a1 )
  {
    result = 3.141592653589793238;
    if ( HIBYTE(a1) )
      return -3.141592653589793238;
  }
  else
  {
    result = 0.0;
    if ( HIBYTE(a1) )
      return -0.0;
  }
  return result;
}

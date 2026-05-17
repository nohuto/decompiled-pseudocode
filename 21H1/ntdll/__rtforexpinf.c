/*
 * XREFs of __rtforexpinf @ 0x4B2FB2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall _rtforexpinf(char a1)
{
  double result; // st7

  if ( !a1 )
    return *(double *)&_infinity;
  _rtzeronpop();
  return result;
}

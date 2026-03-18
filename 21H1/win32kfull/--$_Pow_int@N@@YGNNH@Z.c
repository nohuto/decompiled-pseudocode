/*
 * XREFs of ??$_Pow_int@N@@YGNNH@Z @ 0x1B2DA8
 * Callers:
 *     ?UpdateIntObjUsage@@YGXPAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x1B3375 (-UpdateIntObjUsage@@YGXPAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE.c)
 * Callees:
 *     <none>
 */

double __stdcall _Pow_int<double>(double a1)
{
  double result; // st7
  unsigned int v3; // eax

  result = 1.0;
  v3 = 2;
  while ( 1 )
  {
    if ( (v3 & 1) != 0 )
      result = result * a1;
    v3 >>= 1;
    if ( !v3 )
      break;
    a1 = a1 * a1;
  }
  return result;
}

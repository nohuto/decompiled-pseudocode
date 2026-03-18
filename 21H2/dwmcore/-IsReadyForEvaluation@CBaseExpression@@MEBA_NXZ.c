/*
 * XREFs of ?IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ @ 0x1800D87F0
 * Callers:
 *     ?IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ @ 0x1800D8790 (-IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ.c)
 *     ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x1800D87C0 (-IsReadyForEvaluation@CExpression@@MEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseExpression::IsReadyForEvaluation(CBaseExpression *this)
{
  bool result; // al

  if ( (*((_BYTE *)this + 216) & 2) == 0 )
    return 0;
  result = 1;
  if ( (*((_BYTE *)this + 232) & 1) != 0 )
    return 0;
  return result;
}

/*
 * XREFs of ?IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ @ 0x1800C1460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBaseExpression::IsReadyForEvaluation(CBaseExpression *this)
{
  return (*((_BYTE *)this + 208) & 0x12) == 2;
}

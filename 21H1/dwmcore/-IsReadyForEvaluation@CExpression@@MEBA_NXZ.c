/*
 * XREFs of ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x1800C1430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CExpression::IsReadyForEvaluation(CExpression *this)
{
  char v1; // dl

  v1 = 0;
  if ( (*((_BYTE *)this + 208) & 0x12) == 2 )
    return *((_QWORD *)this + 39) != 0LL;
  return v1;
}

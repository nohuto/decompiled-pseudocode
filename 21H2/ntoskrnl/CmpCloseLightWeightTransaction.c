/*
 * XREFs of CmpCloseLightWeightTransaction @ 0x1406216D0
 * Callers:
 *     <none>
 * Callees:
 *     CmpRollbackLightWeightTransaction @ 0x1406216F0 (CmpRollbackLightWeightTransaction.c)
 */

__int64 __fastcall CmpCloseLightWeightTransaction(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
    return CmpRollbackLightWeightTransaction(a2);
  return result;
}

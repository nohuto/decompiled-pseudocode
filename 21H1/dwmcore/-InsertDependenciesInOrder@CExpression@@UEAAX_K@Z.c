/*
 * XREFs of ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x180097370
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1800973F4 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 */

void __fastcall CExpression::InsertDependenciesInOrder(CExpression *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // rbp
  __int64 v6; // r9
  __int64 v7; // r8

  v2 = 0LL;
  for ( i = *(_QWORD *)(*((_QWORD *)this + 2) + 272LL);
        (unsigned int)v2 < *((_DWORD *)this + 104);
        v2 = (unsigned int)(v2 + 1) )
  {
    v6 = *((_QWORD *)this + 51);
    v7 = *(_QWORD *)(*((_QWORD *)this + 49) + 8LL * *(unsigned int *)(v6 + 24 * v2 + 20));
    if ( v7 )
      CExpressionManager::InsertExpressionsInOrderForTarget(i, a2, v7, *(unsigned int *)(v6 + 24 * v2));
  }
}

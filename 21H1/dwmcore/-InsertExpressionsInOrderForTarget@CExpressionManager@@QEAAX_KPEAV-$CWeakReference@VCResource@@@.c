/*
 * XREFs of ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1800973F4
 * Callers:
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x180097370 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     _lambda_2149ae26af8bda672c72659e191929ce_::operator() @ 0x1801CB7F8 (_lambda_2149ae26af8bda672c72659e191929ce_--operator().c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x180215160 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180097440 (-LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV-$CWeakReferenc.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x180097758 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 */

void __fastcall CExpressionManager::InsertExpressionsInOrderForTarget(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 i; // rbx

  for ( i = CExpressionManager::LookupExpressionsForTarget(a1, a3, a4); i; i = *(_QWORD *)(i + 16) )
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(i + 8), a2);
}

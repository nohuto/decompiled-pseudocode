/*
 * XREFs of ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180070034
 * Callers:
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x18006FFB0 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     _lambda_2149ae26af8bda672c72659e191929ce_::operator() @ 0x1801C7028 (_lambda_2149ae26af8bda672c72659e191929ce_--operator().c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x18021092C (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18006F750 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180070080 (-LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV-$CWeakReferenc.c)
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

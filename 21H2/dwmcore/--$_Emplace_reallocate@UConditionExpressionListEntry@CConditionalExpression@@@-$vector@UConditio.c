/*
 * XREFs of ??$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@QEAAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU23@$$QEAU23@@Z @ 0x1801BD1B0
 * Callers:
 *     ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x1801BDF90 (-ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagM.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUConditionExpressionListEntry@CConditionalExpression@@PEAU12@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@0PEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x1801BD2EC (--$_Uninitialized_move@PEAUConditionExpressionListEntry@CConditionalExpression@@PEAU12@V-$alloca.c)
 *     ?_Change_array@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAXQEAUConditionExpressionListEntry@CConditionalExpression@@_K1@Z @ 0x1801BE3F8 (-_Change_array@-$vector@UConditionExpressionListEntry@CConditionalExpression@@V-$allocator@UCond.c)
 */

unsigned __int64 __fastcall std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Emplace_reallocate<CConditionalExpression::ConditionExpressionListEntry>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  SIZE_T v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // r13
  _QWORD *v15; // r15
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx

  v4 = a2 - *a1;
  v5 = (a1[1] - *a1) >> 4;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v5 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  else
  {
    v11 = v5 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v15 = (_QWORD *)(v13 + v14);
  *(_QWORD *)(v13 + v14) = 0LL;
  if ( (_QWORD *)(v13 + v14) != a3 )
  {
    *v15 = *a3;
    *a3 = 0LL;
  }
  v16 = a3 + 1;
  v15[1] = 0LL;
  if ( v15 + 1 != a3 + 1 )
  {
    v15[1] = *v16;
    *v16 = 0LL;
  }
  v17 = a1[1];
  v18 = (_QWORD *)v14;
  v19 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CConditionalExpression::ConditionExpressionListEntry *,CConditionalExpression::ConditionExpressionListEntry *,std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
      v19,
      a2,
      v14);
    v17 = a1[1];
    v18 = v15 + 2;
    v19 = a2;
  }
  std::_Uninitialized_move<CConditionalExpression::ConditionExpressionListEntry *,CConditionalExpression::ConditionExpressionListEntry *,std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
    v19,
    v17,
    v18);
  std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Change_array(a1, v14, v8, v11);
  return v13 + *a1;
}

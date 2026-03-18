/*
 * XREFs of ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x1800CC870
 * Callers:
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180050990 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x1800CC680 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x1800CC780 (-InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x1800CC870 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801FDCC8 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV-$CWe.c)
 *     ?InsertDependenciesInOrder@CConditionalExpression@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x1802111B0 (-InsertDependenciesInOrder@CConditionalExpression@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180043280 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x1800CC870 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@InteractionTrackerProperty@@@Z @ 0x18021B4CC (-InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@Inter.c)
 */

void __fastcall CBaseExpression::InsertInOrder(CBaseExpression *this, const struct ExpressionWalkContext *a2)
{
  char v2; // r14
  char v5; // cl
  unsigned int v6; // ecx
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 i; // rbp
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  CBaseExpression *v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( (int)++*((_DWORD *)this + 39) > 1 )
    goto LABEL_5;
  v5 = 0;
  if ( *((_BYTE *)a2 + 8) && *((_QWORD *)this + 28) != *(_QWORD *)a2 )
  {
    *((_QWORD *)this + 28) = *(_QWORD *)a2;
    v5 = 1;
  }
  if ( *((_QWORD *)this + 20) == *(_QWORD *)a2 && !v5 )
    goto LABEL_5;
  v6 = CBaseExpression::s_recursionLevel;
  if ( CBaseExpression::s_recursionLevel <= 0x10 )
  {
    v2 = 1;
    v7 = (*((_BYTE *)this + 232) & 2) == 0;
    ++CBaseExpression::s_recursionLevel;
    if ( v7 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 66); i = (unsigned int)(i + 1) )
        CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 30) + 8 * i), a2);
    }
    if ( *((_DWORD *)this + 53) == 88 )
    {
      v16 = *(_QWORD *)(*((_QWORD *)this + 23) + 16LL);
      if ( v16 )
        CInteractionTracker::InsertDependenciesForProperty(v16, a2, *((unsigned int *)this + 48));
    }
    (*(void (__fastcall **)(CBaseExpression *, const struct ExpressionWalkContext *))(*(_QWORD *)this + 200LL))(
      this,
      a2);
    if ( (*((_BYTE *)this + 216) & 2) != 0 )
    {
      v8 = *((_QWORD *)this + 2);
      v17 = this;
      v9 = *(_QWORD *)(v8 + 424);
      v10 = v9 + 32LL * (unsigned int)(1 - *(_DWORD *)(v9 + 164));
      v11 = *(_DWORD *)(v10 + 192);
      v12 = v11 + 1;
      if ( v11 + 1 < v11 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else if ( v12 > *(_DWORD *)(v10 + 188) )
      {
        v14 = DynArrayImpl<1>::AddMultipleAndSet(v10 + 168, 8u, v10, &v17);
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v10 + 168) + 8LL * v11) = this;
        *(_DWORD *)(v10 + 192) = v12;
      }
    }
LABEL_5:
    v6 = CBaseExpression::s_recursionLevel;
  }
  *((_QWORD *)this + 20) = *(_QWORD *)a2;
  if ( v2 )
    CBaseExpression::s_recursionLevel = v6 - 1;
  --*((_DWORD *)this + 39);
}

/*
 * XREFs of ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18006F750
 * Callers:
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x18006DE30 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18006F750 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180070034 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18007E5D0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z @ 0x1801BD340 (-InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800435D8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18006F750 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?InsertDependenciesForProperty@CInteractionTracker@@QEAAX_KW4Enum@InteractionTrackerProperty@@@Z @ 0x1801C959C (-InsertDependenciesForProperty@CInteractionTracker@@QEAAX_KW4Enum@InteractionTrackerProperty@@@Z.c)
 */

void __fastcall CBaseExpression::InsertInOrder(CBaseExpression *this, unsigned __int64 a2)
{
  char v2; // r14
  unsigned int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  CBaseExpression *v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( (int)++*((_DWORD *)this + 37) <= 1 && *((_QWORD *)this + 19) != a2 )
  {
    v5 = CBaseExpression::s_recursionLevel;
    if ( CBaseExpression::s_recursionLevel > 0x10 )
      goto LABEL_11;
    v6 = 0LL;
    v2 = 1;
    ++CBaseExpression::s_recursionLevel;
    if ( *((_DWORD *)this + 60) )
    {
      do
      {
        CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 27) + 8 * v6), a2);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *((_DWORD *)this + 60) );
    }
    if ( *((_DWORD *)this + 51) == 88 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)this + 22) + 16LL);
      if ( v14 )
        CInteractionTracker::InsertDependenciesForProperty(v14, a2, *((unsigned int *)this + 46));
    }
    (*(void (__fastcall **)(CBaseExpression *, unsigned __int64))(*(_QWORD *)this + 216LL))(this, a2);
    if ( (*((_BYTE *)this + 208) & 2) != 0 )
    {
      v7 = *((_QWORD *)this + 2);
      v15 = this;
      v8 = *(_QWORD *)(v7 + 272);
      v9 = v8 + 32LL * (unsigned int)(1 - *(_DWORD *)(v8 + 164));
      v10 = *(_DWORD *)(v9 + 192);
      v11 = v10 + 1;
      if ( v10 + 1 < v10 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else if ( v11 > *(_DWORD *)(v9 + 188) )
      {
        v12 = DynArrayImpl<1>::AddMultipleAndSet(v9 + 168, 8u, v9, &v15);
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC0u, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v9 + 168) + 8LL * v10) = this;
        *(_DWORD *)(v9 + 192) = v11;
      }
    }
  }
  v5 = CBaseExpression::s_recursionLevel;
LABEL_11:
  *((_QWORD *)this + 19) = a2;
  if ( v2 )
    CBaseExpression::s_recursionLevel = v5 - 1;
  --*((_DWORD *)this + 37);
}

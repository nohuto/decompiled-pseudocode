/*
 * XREFs of ?FlushQueuedStateChanges@CExpressionManager@@AEAAXXZ @ 0x1800508CC
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800506EC (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800422CC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CExpressionManager::FlushQueuedStateChanges(CExpressionManager *this)
{
  unsigned int i; // esi
  __int64 v3; // rbx

  for ( i = 0; i < *((_DWORD *)this + 64); ++i )
  {
    v3 = *((_QWORD *)this + 29) + 16LL * i;
    CBaseExpression::NotifyAnimationStateChanged(*(_QWORD *)(v3 + 8), *(_DWORD *)v3);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 8) + 16LL))(*(_QWORD *)(v3 + 8));
  }
  *((_DWORD *)this + 64) = 0;
  DynArrayImpl<1>::ShrinkToSize((char *)this + 232, 16LL);
}

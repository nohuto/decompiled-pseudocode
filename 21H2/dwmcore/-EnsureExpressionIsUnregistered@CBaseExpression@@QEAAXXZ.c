/*
 * XREFs of ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18004A1F8
 * Callers:
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800407C0 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180041060 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180049824 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180049EFC (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180050DC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x180254A78 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@_N@Z @ 0x1800496D8 (-UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV-$CWeakReference@V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1801FDB2C (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 */

void __fastcall CBaseExpression::EnsureExpressionIsUnregistered(CBaseExpression *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  CExpressionManager *v4; // rsi
  int v5; // [rsp+20h] [rbp-18h]

  if ( (*((_BYTE *)this + 232) & 8) != 0 )
  {
    v2 = *((_QWORD *)this + 38);
    v3 = *((_QWORD *)this + 39);
    v4 = *(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL);
    if ( v2 != v3 )
    {
      do
      {
        CExpressionManager::UnregisterExpressionWorker(
          (__int64)v4,
          (__int64)this,
          *(_QWORD *)v2,
          *(_DWORD *)(v2 + 8),
          v5,
          1);
        v2 += 16LL;
      }
      while ( v2 != v3 );
      v2 = *((_QWORD *)this + 38);
    }
    *((_QWORD *)this + 39) = v2;
    if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 248LL))(this) )
      CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(v4, this);
    CExpressionManager::UnregisterExpressionWorker(
      (__int64)v4,
      (__int64)this,
      *((_QWORD *)this + 23),
      *((_DWORD *)this + 48),
      v5,
      0);
    *((_BYTE *)this + 232) &= ~8u;
  }
}

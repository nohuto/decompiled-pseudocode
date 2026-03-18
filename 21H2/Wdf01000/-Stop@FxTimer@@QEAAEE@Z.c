/*
 * XREFs of ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0003728
 * Callers:
 *     imp_WdfTimerStop @ 0x1C00036A0 (imp_WdfTimerStop.c)
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C00189D0 (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C0011D90 (-Stop@MxTimer@@QEAAEXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0030348 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C005B340 (WPP_IFR_SF_D.c)
 */

BOOLEAN __fastcall FxTimer::Stop(FxTimer *this, unsigned __int8 Wait)
{
  $FDD9DE4FD1E55C1CC33A56ADBE39F553 *v3; // rcx
  unsigned __int8 v4; // di
  struct _EX_TIMER *m_KernelExTimer; // rcx
  unsigned int v8; // edx
  unsigned __int8 v9; // dl
  FxSystemWorkItem *m_SystemWorkItem; // rsi
  const void *_a1; // rax
  const void *_a2; // rdx
  KIRQL CurrentIrql; // al
  unsigned __int8 v14; // dl
  __int64 v15; // r10
  const void *ObjectHandleUnchecked; // rax
  const void *v17; // r8
  _FX_DRIVER_GLOBALS *v18; // r10
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  irql = 0;
  if ( !Wait )
  {
    v3 = &this->m_Timer.m_Timer.16;
    v4 = 1;
    if ( !this->m_Timer.m_Timer.m_IsExtTimer )
      return KeCancelTimer(&v3->KernelTimer);
    m_KernelExTimer = v3->m_KernelExTimer;
    if ( !m_KernelExTimer )
      return v4;
    return ExCancelTimer(m_KernelExTimer, 0LL);
  }
  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0x11u, WPP_FxTimer_cpp_Traceguids, _a1, _a2);
  }
  else
  {
    if ( !this->m_Globals->FxVerifierOn || !KeGetCurrentIrql() )
    {
      FxNonPagedObject::Lock(this, &irql);
      if ( this->m_Globals->FxVerifierOn
        && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v8, 9u) || *(_BYTE *)(v15 + 325))
        && this->m_StopThread )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qqq(
          v18,
          2u,
          0x12u,
          0x13u,
          WPP_FxTimer_cpp_Traceguids,
          ObjectHandleUnchecked,
          v17,
          KeGetCurrentThread());
        FxVerifierDbgBreakPoint(this->m_Globals);
      }
      this->m_StartAborted = 0;
      this->m_StopThread = KeGetCurrentThread();
      do
      {
        v9 = irql;
        this->m_StopAgain = 0;
        FxNonPagedObject::Unlock(this, v9);
        v4 = MxTimer::Stop(&this->m_Timer);
        KeFlushQueuedDpcs();
        m_SystemWorkItem = this->m_SystemWorkItem;
        if ( m_SystemWorkItem )
        {
          KeEnterCriticalRegion();
          KeWaitForSingleObject(&m_SystemWorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
          KeLeaveCriticalRegion();
        }
        FxNonPagedObject::Lock(this, &irql);
      }
      while ( !v4 && this->m_StopAgain );
      this->m_StopThread = 0LL;
      this->m_StopAgain = 0;
      if ( this->m_StartAborted )
      {
        v4 = 1;
        this->m_StartAborted = 0;
      }
      FxNonPagedObject::Unlock(this, irql);
      return v4;
    }
    CurrentIrql = KeGetCurrentIrql();
    WPP_IFR_SF_D(this->m_Globals, v14, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
  }
  FxVerifierDbgBreakPoint(this->m_Globals);
  return 0;
}

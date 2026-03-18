/*
 * XREFs of ?Stop@FxTimer@@QEAAEE@Z @ 0x1C000D5C8
 * Callers:
 *     imp_WdfTimerStop @ 0x1C000D540 (imp_WdfTimerStop.c)
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C00543A4 (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C0019040 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0032BF8 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_D @ 0x1C00391A0 (WPP_IFR_SF_D.c)
 */

BOOLEAN __fastcall FxTimer::Stop(FxTimer *this, unsigned __int8 Wait, unsigned __int8 a3)
{
  $3640983DA82489350F5E60D01859A3BD *v4; // rcx
  unsigned __int8 v6; // di
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v9; // edx
  struct _KTHREAD *m_StopThread; // r8
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  FxSystemWorkItem *m_SystemWorkItem; // rsi
  const void *_a1; // rax
  unsigned __int8 CurrentIrql; // al
  __int64 v16; // r10
  const void *ObjectHandleUnchecked; // rax
  const void *_a2; // r8
  _FX_DRIVER_GLOBALS *v19; // r10
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  irql = 0;
  if ( !Wait )
  {
    v4 = &this->m_Timer.m_Timer.16;
    if ( this->m_Timer.m_Timer.m_IsExtTimer )
      return ExCancelTimer(v4->m_KernelExTimer, 0LL);
    else
      return KeCancelTimer(&v4->KernelTimer);
  }
  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0x11u, WPP_FxTimer_cpp_Traceguids, _a1, this->m_CallbackThread);
  }
  else
  {
    m_Globals = this->m_Globals;
    if ( !m_Globals->FxVerifierOn || !KeGetCurrentIrql() )
    {
      FxNonPagedObject::Lock(this, &irql, a3);
      if ( this->m_Globals->FxVerifierOn
        && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v9, 9u) || *(_BYTE *)(v16 + 317)) )
      {
        m_StopThread = this->m_StopThread;
        if ( m_StopThread )
        {
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_qqq(
            v19,
            2u,
            0x12u,
            0x13u,
            WPP_FxTimer_cpp_Traceguids,
            ObjectHandleUnchecked,
            _a2,
            KeGetCurrentThread());
          FxVerifierDbgBreakPoint(this->m_Globals);
        }
      }
      this->m_StartAborted = 0;
      this->m_StopThread = KeGetCurrentThread();
      do
      {
        v11 = irql;
        this->m_StopAgain = 0;
        FxNonPagedObject::Unlock(this, v11, (unsigned __int8)m_StopThread);
        v6 = MxTimer::Stop(&this->m_Timer);
        KeFlushQueuedDpcs();
        m_SystemWorkItem = this->m_SystemWorkItem;
        if ( m_SystemWorkItem )
        {
          KeEnterCriticalRegion();
          KeWaitForSingleObject(&m_SystemWorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
          KeLeaveCriticalRegion();
        }
        FxNonPagedObject::Lock(this, &irql, v12);
      }
      while ( !v6 && this->m_StopAgain );
      this->m_StopThread = 0LL;
      this->m_StopAgain = 0;
      if ( this->m_StartAborted )
      {
        v6 = 1;
        this->m_StartAborted = 0;
      }
      FxNonPagedObject::Unlock(this, irql, (unsigned __int8)m_StopThread);
      return v6;
    }
    CurrentIrql = KeGetCurrentIrql();
    WPP_IFR_SF_D(m_Globals, CurrentIrql, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
  }
  FxVerifierDbgBreakPoint(this->m_Globals);
  return 0;
}

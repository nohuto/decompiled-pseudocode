/*
 * XREFs of ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C00046C8
 * Callers:
 *     ?_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z @ 0x1C00046B0 (-_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z.c)
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0004D90 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     FX_TRACK_DRIVER @ 0x1C0004734 (FX_TRACK_DRIVER.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxTimer::TimerHandler(FxTimer *this)
{
  FxCallbackLock *m_CallbackLock; // rcx
  WDFTIMER__ *v3; // rax
  WDFTIMER__ *ObjectHandleUnchecked; // rax
  __int64 v5; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FX_TRACK_DRIVER(this->m_Globals);
  if ( this->m_Callback )
  {
    m_CallbackLock = this->m_CallbackLock;
    this->m_CallbackThread = KeGetCurrentThread();
    if ( m_CallbackLock )
    {
      irql = 0;
      m_CallbackLock->Lock(m_CallbackLock, &irql);
      ObjectHandleUnchecked = (WDFTIMER__ *)FxObject::GetObjectHandleUnchecked(this);
      this->m_Callback(ObjectHandleUnchecked);
      LOBYTE(v5) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v5);
    }
    else
    {
      v3 = (WDFTIMER__ *)FxObject::GetObjectHandleUnchecked(this);
      this->m_Callback(v3);
    }
    this->m_CallbackThread = 0LL;
  }
}

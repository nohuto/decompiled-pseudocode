/*
 * XREFs of ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000D7F0
 * Callers:
 *     imp_WdfTimerStart @ 0x1C000D790 (imp_WdfTimerStart.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A018 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005A318 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005AE28 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

BOOLEAN __fastcall FxTimer::Start(FxTimer *this, _LARGE_INTEGER DueTime, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  char v6; // bp
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r14
  unsigned int v10; // ecx
  __int64 m_TolerableDelay; // r9
  BOOLEAN v12; // al
  unsigned __int8 v13; // r8
  BOOLEAN v14; // bl
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // r8
  void (__fastcall *m_Callback)(WDFTIMER__ *); // rcx
  const void *_a1; // rcx
  const void *v20; // rcx
  void (__fastcall *v21)(WDFTIMER__ *); // rcx
  FxObject *m_CallbackLockObject; // rax
  void (__fastcall *v23)(WDFTIMER__ *); // rcx
  void (__fastcall *v24)(WDFTIMER__ *); // rcx
  unsigned __int8 irql[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v26; // [rsp+48h] [rbp-40h] BYREF
  __int64 v27; // [rsp+50h] [rbp-38h]

  m_ObjectFlags = this->m_ObjectFlags;
  v6 = 0;
  irql[0] = 0;
  if ( m_ObjectFlags < 0 && (m_Callback = this[-1].m_Callback) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_Callback, irql, a3);
    v9 = irql[0];
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v9 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql[0] = v9;
  }
  if ( this->m_RunningDown )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xFu, WPP_FxTimer_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  else if ( this->m_StopThread )
  {
    v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v20 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0x10u, WPP_FxTimer_cpp_Traceguids, v20, this->m_StopThread);
    this->m_StartAborted = 1;
  }
  else
  {
    v6 = 1;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v21 = this[-1].m_Callback) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v21, v9, v8);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v9);
  if ( !v6 )
    return 0;
  v10 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_CallbackLockObject = this[-1].m_CallbackLockObject;
    if ( m_CallbackLockObject )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)m_CallbackLockObject,
        this,
        629,
        "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
        TagAddRef,
        v10);
  }
  m_TolerableDelay = this->m_TolerableDelay;
  if ( this->m_Timer.m_Timer.m_IsExtTimer )
  {
    v26 = 0LL;
    if ( (_DWORD)m_TolerableDelay == -1 )
      v27 = -1LL;
    else
      v27 = 10000 * m_TolerableDelay;
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
            this->m_Timer.m_Timer.m_KernelExTimer,
            (_LARGE_INTEGER)DueTime.QuadPart,
            10000LL * this->m_Timer.m_Timer.m_Period,
            &v26);
  }
  else
  {
    v12 = KeSetCoalescableTimer(
            &this->m_Timer.m_Timer.KernelTimer,
            DueTime,
            this->m_Timer.m_Timer.m_Period,
            m_TolerableDelay,
            &this->m_Timer.m_Timer.TimerDpc);
  }
  v14 = v12;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v23 = this[-1].m_Callback) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)v23, irql, v13);
    v15 = irql[0];
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    v15 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
  }
  if ( this->m_StopThread )
    this->m_StopAgain = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v24 = this[-1].m_Callback) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v24, v15, v16);
  else
    KeReleaseSpinLock(p_m_Lock, v15);
  this->Release(this, this, 646, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  return v14;
}

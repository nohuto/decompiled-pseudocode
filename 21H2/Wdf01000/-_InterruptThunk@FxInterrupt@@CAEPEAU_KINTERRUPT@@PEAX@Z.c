/*
 * XREFs of ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C0002950
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C00027C4 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C00399AC (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x1C008D460 (-WakeInterruptIsr@FxInterrupt@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptThunk(struct _KINTERRUPT *Interrupt, FxInterrupt *ServiceContext)
{
  void (__fastcall *v3)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int8 (__fastcall *m_EvtInterruptIsr)(WDFINTERRUPT__ *, unsigned int); // rax
  __int64 MessageNumber; // rdx
  unsigned __int64 v7; // rbx
  char v8; // di
  void (__fastcall *InterruptNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  void (__fastcall *v11)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  unsigned __int64 ObjectHandleUnchecked; // rax

  if ( ServiceContext->m_IsEdgeTriggeredNonMsiInterrupt != 1 )
  {
    if ( ServiceContext->m_Interrupt )
      goto LABEL_3;
    return 0;
  }
  if ( ServiceContext->m_Disconnecting == 1 )
    return 0;
  ServiceContext->m_InterruptCaptured = Interrupt;
LABEL_3:
  if ( ServiceContext->m_WakeInterruptMachine )
  {
    InterruptNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
    if ( InterruptNotifyRoutine )
      InterruptNotifyRoutine(&ServiceContext->m_EvtInterruptIsr, 8u, 2181038080u, 3937u, 2u);
    return FxInterrupt::WakeInterruptIsr(ServiceContext);
  }
  else
  {
    if ( ServiceContext->m_PassiveHandling )
    {
      FxInterrupt::AcquireLock(ServiceContext, (_FX_DRIVER_GLOBALS *)ServiceContext);
      v11 = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
      if ( v11 )
        v11(&ServiceContext->m_EvtInterruptIsr, 8u, 2181038080u, 3937u, 2u);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(ServiceContext);
      v8 = ((__int64 (__fastcall *)(unsigned __int64))ServiceContext->m_EvtInterruptIsr)(ObjectHandleUnchecked);
      FxInterrupt::ReleaseLock(ServiceContext);
    }
    else
    {
      v3 = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
      if ( v3 )
        v3(&ServiceContext->m_EvtInterruptIsr, 8u, 2181038080u, 3936u, 2u);
      m_ObjectSize = ServiceContext->m_ObjectSize;
      m_EvtInterruptIsr = ServiceContext->m_EvtInterruptIsr;
      MessageNumber = ServiceContext->m_InterruptInfo.MessageNumber;
      v7 = (unsigned __int64)ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v7 = 0LL;
      return m_EvtInterruptIsr((WDFINTERRUPT__ *)v7, MessageNumber);
    }
    return v8;
  }
}

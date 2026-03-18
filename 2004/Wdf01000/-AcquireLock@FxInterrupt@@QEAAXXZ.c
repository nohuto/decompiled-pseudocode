/*
 * XREFs of ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0003E54
 * Callers:
 *     ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C0003C30 (-_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     imp_WdfInterruptAcquireLock @ 0x1C0003DF0 (imp_WdfInterruptAcquireLock.c)
 *     ?_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C0019F20 (-_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C0019F90 (-_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C0089AFC (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 *     ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C0089E40 (-_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000EC9C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::AcquireLock(FxInterrupt *this, _FX_DRIVER_GLOBALS *a2)
{
  struct _KINTERRUPT *m_Interrupt; // rcx
  KIRQL CurrentIrql; // al
  const void *_a1; // rax

  if ( this->m_PassiveHandling )
  {
    FxWaitLockInternal::AcquireLock(&this->m_WaitLock->FxWaitLockInternal, a2, 0LL);
  }
  else
  {
    m_Interrupt = this->m_Interrupt;
    if ( m_Interrupt || (m_Interrupt = this->m_InterruptCaptured) != 0LL )
    {
      CurrentIrql = KeAcquireInterruptSpinLock(m_Interrupt);
    }
    else
    {
      _a1 = FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x1Cu, WPP_InterruptObject_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(this->m_Globals);
      CurrentIrql = KeGetCurrentIrql();
    }
    this->m_OldIrql = CurrentIrql;
  }
}

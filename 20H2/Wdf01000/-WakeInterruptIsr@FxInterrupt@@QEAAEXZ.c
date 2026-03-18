/*
 * XREFs of ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x1C0089354
 * Callers:
 *     ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C0003C30 (-_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0017934 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008B120 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 */

unsigned __int8 __fastcall FxInterrupt::WakeInterruptIsr(FxInterrupt *this)
{
  void *ObjectHandleUnchecked; // rax

  FxWakeInterruptMachine::ProcessEvent(this->m_WakeInterruptMachine, WakeInterruptEventIsr);
  ObjectHandleUnchecked = (void *)FxObject::GetObjectHandleUnchecked(this);
  _FX_DRIVER_GLOBALS::WaitForSignal(
    this->m_Globals,
    &this->m_WakeInterruptMachine->m_IsrEvent,
    "Wake Interrupt ISR is stuck waiting for the deviceto power back up and driver calllback to be processed",
    ObjectHandleUnchecked,
    this->m_Globals->DbgWaitForWakeInterruptIsrTimeoutInSec,
    3);
  return this->m_WakeInterruptMachine->m_Claimed;
}

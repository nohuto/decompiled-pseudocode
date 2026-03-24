/*
 * XREFs of ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C0012840
 * Callers:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C00129B4 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0017894 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 */

void __fastcall FxIoQueue::StartPowerTransitionOff(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  bool v3; // zf
  unsigned __int16 v5; // r9
  void *v6; // rax
  _FX_DRIVER_GLOBALS *v7; // r10
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v9; // r10
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  v3 = this->m_PowerManaged == 0;
  irql = 0;
  if ( !v3 )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    this->m_PowerState = FxIoQueuePowerStartingTransition;
    KeClearEvent(&this->m_PowerIdle.m_Event);
    if ( FxIoQueue::DispatchEvents(this, irql, 0LL, v5) )
    {
      if ( this->m_Globals->FxVerboseOn )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(v9, 5u, 0xDu, 0x66u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked);
      }
      v6 = (void *)FxObject::GetObjectHandleUnchecked(this);
      _FX_DRIVER_GLOBALS::WaitForSignal(
        v7,
        &this->m_PowerIdle,
        "waiting for all threads to stop dispatching requests so that queue can be powered off, WDFQUEUE",
        v6,
        v7->FxVerifierDbgWaitForSignalTimeoutInSec,
        1u);
    }
  }
}

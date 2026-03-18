/*
 * XREFs of ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000F900
 * Callers:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000F808 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C000FAF8 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C001B404 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001B62C (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 */

void __fastcall FxIoQueue::StopProcessingForPower(
        FxIoQueue *this,
        FxIoStopProcessingForPowerAction Action,
        unsigned __int8 a3)
{
  int v4; // edx
  unsigned __int16 v5; // r9
  void *v6; // rax
  _FX_DRIVER_GLOBALS *v7; // r10
  int v8; // edx
  bool v9; // zf
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // r8
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v13; // r10
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF

  irql = 0;
  v4 = Action - 1;
  if ( !v4 )
  {
    if ( !this->m_PowerManaged )
      return;
    FxNonPagedObject::Lock(this, &irql, a3);
    this->m_PowerState = FxIoQueuePowerStopping;
    goto LABEL_5;
  }
  v8 = v4 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return;
    v9 = this->m_PowerManaged == 1;
  }
  else
  {
    v9 = this->m_PowerManaged == 0;
  }
  if ( !v9 )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    FxIoQueue::SetState(this, FxIoQueueSetShutdown|0x2);
    FxNonPagedObject::Unlock(this, irql, v10);
    FxIoQueue::QueuePurge(this, 1u, 1u, 0LL, 0LL);
    FxNonPagedObject::Lock(this, &irql, v11);
    this->m_PowerState = FxIoQueuePowerPurge;
LABEL_5:
    KeClearEvent(&this->m_PowerIdle.m_Event);
    if ( FxIoQueue::DispatchEvents(this, irql, 0LL, v5) )
    {
      if ( this->m_Globals->FxVerboseOn )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(v13, 5u, 0xDu, 0x67u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked);
      }
      v6 = (void *)FxObject::GetObjectHandleUnchecked(this);
      _FX_DRIVER_GLOBALS::WaitForSignal(
        v7,
        &this->m_PowerIdle,
        "waiting for all inflight requests to be acknowledged on WDFQUEUE",
        v6,
        v7->FxVerifierDbgWaitForSignalTimeoutInSec,
        1u);
    }
  }
}

/*
 * XREFs of ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001522C
 * Callers:
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0012998 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014EBC (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014FE0 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C00151B0 (imp_WdfIoQueueStart.c)
 *     ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1C00748E0 (-AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1C0075170 (-ResetStateForRestart@FxPkgIo@@QEAAXXZ.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C0076284 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::SetState(FxIoQueue *this, _FX_IO_QUEUE_SET_STATE NewStatus)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  char v3; // di
  _FX_IO_QUEUE_STATE m_QueueState; // eax
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax

  m_Globals = this->m_Globals;
  v3 = NewStatus;
  if ( (NewStatus & 0x7FFCFFF0) != 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x16u, WPP_FxIoQueue_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    if ( (NewStatus & 0x20000) != 0 )
      this->m_QueueState &= ~0x10000u;
    if ( (NewStatus & 0x10000) != 0 )
      this->m_QueueState |= 0x10000u;
    if ( (NewStatus & 1) != 0 )
    {
      m_QueueState = this->m_QueueState;
      if ( (m_QueueState & 0x10000) != 0 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 4u, 0xDu, 0x17u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked);
      }
      else
      {
        this->m_QueueState = m_QueueState | 1;
      }
    }
    if ( (v3 & 2) != 0 )
      this->m_QueueState &= ~1u;
    if ( (v3 & 4) != 0 )
    {
      this->m_QueueState |= 2u;
      this->m_CancelDispatchedRequests = 0;
    }
    if ( (v3 & 8) != 0 )
      this->m_QueueState &= ~2u;
  }
}

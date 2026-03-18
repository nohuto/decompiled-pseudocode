/*
 * XREFs of ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C008B2A8
 * Callers:
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008B120 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C008B4B0 (-_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C000EED4 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012700 (WPP_IFR_SF_qqLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxWakeInterruptMachine::ProcessEventInner(FxWakeInterruptMachine *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v5; // al
  __int64 m_QueueHead; // rdx
  FxWakeInterruptEvents _a4; // ebp
  __int64 m_CurrentState; // r9
  __int64 v9; // rax
  unsigned int TargetStatesCount; // r8d
  const FxWakeInterruptTargetState *TargetStates; // rdx
  const void *_a1; // rax
  __int64 v13; // r10
  __int64 v14; // r8
  unsigned int _a3; // r9d
  int WakeInterruptState; // edi
  const void *ObjectHandleUnchecked; // rax
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 m_HistoryIndex; // r8
  FxWakeInterruptStates (__fastcall *StateFunc)(FxWakeInterruptMachine *); // rax
  KIRQL v22; // r9

  p_m_Lock = &this->m_QueueLock.m_Lock;
  while ( 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = this->m_QueueHead;
    if ( (_BYTE)m_QueueHead == this->m_QueueTail )
      break;
    _a4 = this->m_Queue[m_QueueHead];
    this->m_QueueHead = ((int)m_QueueHead + 1) % (unsigned int)this->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v5);
    m_CurrentState = this->m_CurrentState;
    v9 = 0LL;
    TargetStatesCount = FxWakeInterruptMachine::m_StateTable[m_CurrentState - 1].TargetStatesCount;
    if ( !TargetStatesCount )
      goto LABEL_7;
    TargetStates = FxWakeInterruptMachine::m_StateTable[m_CurrentState - 1].TargetStates;
    while ( TargetStates[v9].WakeInterruptEvent != _a4 )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= TargetStatesCount )
        goto LABEL_7;
    }
    WakeInterruptState = TargetStates[v9].WakeInterruptState;
    if ( WakeInterruptState == 10 )
    {
LABEL_7:
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
      WPP_IFR_SF_qqLL(
        *(_FX_DRIVER_GLOBALS **)(v13 + 16),
        4u,
        0xCu,
        0xBu,
        WPP_WakeInterruptStateMachine_cpp_Traceguids,
        _a1,
        *(const void **)(v14 + 144),
        _a3,
        _a4);
    }
    else
    {
      do
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
        WPP_IFR_SF_qqLL(
          *(_FX_DRIVER_GLOBALS **)(v18 + 16),
          4u,
          0x15u,
          0xCu,
          WPP_WakeInterruptStateMachine_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(const void **)(v19 + 144),
          WakeInterruptState,
          this->m_CurrentState);
        m_HistoryIndex = this->m_HistoryIndex;
        this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
        this->m_States.History[m_HistoryIndex] = WakeInterruptState;
        this->m_CurrentState = WakeInterruptState;
        StateFunc = FxWakeInterruptMachine::m_StateTable[(unsigned __int8)WakeInterruptState - 1].StateFunc;
        if ( StateFunc )
          WakeInterruptState = StateFunc(this);
        else
          WakeInterruptState = 10;
      }
      while ( WakeInterruptState != 10 );
    }
  }
  FxEventQueue::GetFinishedState(this, Info);
  KeReleaseSpinLock(p_m_Lock, v22);
}

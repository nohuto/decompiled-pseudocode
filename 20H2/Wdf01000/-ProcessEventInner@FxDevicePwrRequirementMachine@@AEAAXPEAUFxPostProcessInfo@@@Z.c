/*
 * XREFs of ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C000ED2C
 * Callers:
 *     ?_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C000E850 (-_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C000EF08 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C000EED4 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012700 (WPP_IFR_SF_qqLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C008DDC4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FxDevicePwrRequirementMachine::ProcessEventInner(
        FxDevicePwrRequirementMachine *this,
        FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v5; // al
  __int64 m_QueueHead; // rdx
  FxDevicePwrRequirementEvents _a4; // esi
  __int64 m_CurrentState; // r9
  __int64 v9; // rax
  unsigned int TargetStatesCount; // r8d
  const FxDevicePwrRequirementTargetState *TargetStates; // rdx
  int _a3; // edi
  const void *_a1; // rax
  __int64 v14; // r10
  __int64 v15; // r8
  __int64 m_HistoryIndex; // r8
  FxDevicePwrRequirementStates (__fastcall *StateFunc)(FxDevicePwrRequirementMachine *); // rax
  KIRQL v18; // r9
  const void *ObjectHandleUnchecked; // rax
  __int64 v20; // r10
  __int64 v21; // r8
  unsigned int v22; // r9d
  const char *v23; // rcx

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
    TargetStatesCount = FxDevicePwrRequirementMachine::m_StateTable[m_CurrentState - 1].TargetStatesCount;
    if ( !TargetStatesCount )
      goto LABEL_14;
    TargetStates = FxDevicePwrRequirementMachine::m_StateTable[m_CurrentState - 1].TargetStates;
    while ( TargetStates[v9].DprEvent != _a4 )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= TargetStatesCount )
        goto LABEL_14;
    }
    _a3 = TargetStates[v9].DprState;
    if ( _a3 == 15 )
    {
LABEL_14:
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PoxInterface->m_PkgPnp->m_DeviceBase);
      WPP_IFR_SF_qqLL(
        *(_FX_DRIVER_GLOBALS **)(v20 + 16),
        4u,
        0xCu,
        0xBu,
        WPP_DevicePwrReqStateMachine_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v21 + 144),
        v22,
        _a4);
      if ( _a4 >= DprEventDeviceDirectedPoweredDown || this->m_CurrentState >= 8u )
        MicrosoftTelemetryAssertTriggeredArgsKM(v23, this->m_CurrentState, _a4);
    }
    else
    {
      do
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PoxInterface->m_PkgPnp->m_DeviceBase);
        WPP_IFR_SF_qqLL(
          *(_FX_DRIVER_GLOBALS **)(v14 + 16),
          4u,
          0x15u,
          0xCu,
          WPP_DevicePwrReqStateMachine_cpp_Traceguids,
          _a1,
          *(const void **)(v15 + 144),
          _a3,
          this->m_CurrentState);
        m_HistoryIndex = this->m_HistoryIndex;
        this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
        this->m_States.History[m_HistoryIndex] = _a3;
        this->m_CurrentState = _a3;
        StateFunc = FxDevicePwrRequirementMachine::m_StateTable[(unsigned __int8)_a3 - 1].StateFunc;
        if ( StateFunc )
          _a3 = StateFunc(this);
        else
          _a3 = 15;
      }
      while ( _a3 != 15 );
    }
  }
  FxEventQueue::GetFinishedState(this, Info);
  KeReleaseSpinLock(p_m_Lock, v18);
}

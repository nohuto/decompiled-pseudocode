/*
 * XREFs of ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0016CA4
 * Callers:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00158AC (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0017020 (-_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0016154 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C0016A84 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C0085584 (WPP_IFR_SF_qqLLL.c)
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0086728 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rbp
  FxPowerMachine *p_m_PowerMachine; // r14
  __int64 v6; // rsi
  KIRQL v7; // al
  __int64 m_QueueHead; // rdx
  KIRQL v9; // r9
  unsigned int _a4; // edi
  unsigned __int16 m_SingularEventsPresent; // cx
  __int64 TargetState; // rdx
  const POWER_EVENT_TARGET_STATE *OtherTargetStates; // rcx
  FxPowerEvent PowerEvent; // eax
  __int64 v15; // r8
  const void *_a1; // rax
  __int64 v17; // r8
  _FX_DRIVER_GLOBALS *v18; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v20; // rdx
  unsigned int globals; // r8d

  p_m_Lock = &this->m_PowerMachine.m_QueueLock.m_Lock;
  p_m_PowerMachine = &this->m_PowerMachine;
  while ( 1 )
  {
    v6 = (HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) & 0xFFFF7FFF) - 768;
    v7 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = p_m_PowerMachine->m_QueueHead;
    v9 = v7;
    if ( (_BYTE)m_QueueHead == p_m_PowerMachine->m_QueueTail )
      break;
    _a4 = this->m_PowerMachine.m_Queue.Events[m_QueueHead];
    if ( (_a4 & 0x3900) == 0 && (*(_DWORD *)&FxPkgPnp::m_WdfPowerStates[v6].StateInfo.Bits & 1) == 0 )
      goto LABEL_12;
    m_SingularEventsPresent = this->m_PowerMachine.m_SingularEventsPresent;
    if ( ((unsigned __int16)_a4 & m_SingularEventsPresent) != 0 )
      this->m_PowerMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~(_WORD)_a4;
    p_m_PowerMachine->m_QueueHead = ((int)m_QueueHead + 1) % (unsigned int)p_m_PowerMachine->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v7);
    if ( FxPkgPnp::m_WdfPowerStates[v6].FirstTargetState.PowerEvent == _a4 )
    {
      TargetState = (unsigned int)FxPkgPnp::m_WdfPowerStates[v6].FirstTargetState.TargetState;
      goto LABEL_9;
    }
    OtherTargetStates = FxPkgPnp::m_WdfPowerStates[v6].OtherTargetStates;
    if ( !OtherTargetStates
      || (PowerEvent = OtherTargetStates->PowerEvent,
          LODWORD(v15) = 0,
          OtherTargetStates->PowerEvent == PowerEventMaximum) )
    {
LABEL_18:
      if ( this->m_Globals->FxVerboseOn )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqLL(
          v18,
          5u,
          0xCu,
          0xCu,
          WPP_PowerStateMachine_cpp_Traceguids,
          _a1,
          *(const void **)(v17 + 144),
          *(_DWORD *)(v17 + 204),
          _a4);
      }
      if ( ((*(_DWORD *)&FxPkgPnp::m_WdfPowerStates[v6].StateInfo.Bits >> 1) & _a4) == 0 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          globals,
          0xDu,
          WPP_PowerStateMachine_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(const void **)(v20 + 144),
          *(_DWORD *)(v20 + 204),
          _a4,
          globals);
      }
      if ( _a4 )
      {
        if ( _a4 <= 2 )
        {
          LOBYTE(TargetState) = 1;
          this->PowerReleasePendingDeviceIrp(this, TargetState);
        }
        else if ( _a4 == 8 || _a4 == 16 || _a4 == 32 )
        {
          FxPkgPnp::PowerCompletePendedWakeIrp(this);
        }
      }
    }
    else
    {
      TargetState = 0LL;
      while ( PowerEvent != _a4 )
      {
        v15 = (unsigned int)(v15 + 1);
        TargetState = (unsigned int)v15;
        PowerEvent = OtherTargetStates[v15].PowerEvent;
        if ( PowerEvent == PowerEventMaximum )
          goto LABEL_18;
      }
      TargetState = (unsigned int)OtherTargetStates[TargetState].TargetState;
LABEL_9:
      if ( (_DWORD)TargetState == 873 )
        goto LABEL_18;
      FxPkgPnp::PowerEnterNewState(this, (_WDF_DEVICE_POWER_STATE)TargetState);
    }
  }
  FxEventQueue::GetFinishedState(p_m_PowerMachine, Info);
LABEL_12:
  KeReleaseSpinLock(p_m_Lock, v9);
}

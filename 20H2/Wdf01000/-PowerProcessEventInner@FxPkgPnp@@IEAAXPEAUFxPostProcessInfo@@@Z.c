/*
 * XREFs of ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00122C0
 * Callers:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011740 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0011A70 (-_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C00124A0 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012700 (WPP_IFR_SF_qqLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C007BE08 (WPP_IFR_SF_qqLLL.c)
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C007CBC8 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  __int64 v4; // rdi
  KIRQL v5; // al
  __int64 m_QueueHead; // rcx
  KIRQL v7; // r8
  unsigned int _a4; // ebp
  unsigned __int16 m_SingularEventsPresent; // cx
  __int64 TargetState; // rdx
  unsigned __int8 m_QueueFlags; // al
  const POWER_EVENT_TARGET_STATE *OtherTargetStates; // rcx
  FxPowerEvent PowerEvent; // eax
  __int64 v14; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int globals; // r8d
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  FxDeviceBase *v19; // rdx
  const void *v20; // rcx

  while ( 1 )
  {
    v4 = (HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) & 0xFFFF7FFF) - 768;
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_QueueLock.m_Lock);
    m_QueueHead = this->m_PowerMachine.m_QueueHead;
    v7 = v5;
    if ( (_BYTE)m_QueueHead == this->m_PowerMachine.m_QueueTail )
      break;
    _a4 = this->m_PowerMachine.m_Queue.Events[m_QueueHead];
    if ( (_a4 & 0x3900) == 0 && (*(_DWORD *)&FxPkgPnp::m_WdfPowerStates[v4].StateInfo.Bits & 1) == 0 )
      goto LABEL_11;
    m_SingularEventsPresent = this->m_PowerMachine.m_SingularEventsPresent;
    if ( ((unsigned __int16)_a4 & m_SingularEventsPresent) != 0 )
      this->m_PowerMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~(_WORD)_a4;
    this->m_PowerMachine.m_QueueHead = ((unsigned int)this->m_PowerMachine.m_QueueHead + 1)
                                     % this->m_PowerMachine.m_QueueDepth;
    KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v5);
    if ( FxPkgPnp::m_WdfPowerStates[v4].FirstTargetState.PowerEvent == _a4 )
    {
      TargetState = (unsigned int)FxPkgPnp::m_WdfPowerStates[v4].FirstTargetState.TargetState;
      goto LABEL_7;
    }
    OtherTargetStates = FxPkgPnp::m_WdfPowerStates[v4].OtherTargetStates;
    if ( !OtherTargetStates
      || (PowerEvent = OtherTargetStates->PowerEvent,
          TargetState = 0LL,
          OtherTargetStates->PowerEvent == PowerEventMaximum) )
    {
LABEL_19:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        m_DeviceBase = this->m_DeviceBase;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_DeviceBase->m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qqLL(
          m_Globals,
          5u,
          0xCu,
          0xCu,
          WPP_PowerStateMachine_cpp_Traceguids,
          _a1,
          m_DeviceBase->m_DeviceObject.m_DeviceObject,
          HIDWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable),
          _a4);
      }
      globals = *(_DWORD *)&FxPkgPnp::m_WdfPowerStates[v4].StateInfo.Bits >> 1;
      if ( (globals & _a4) == 0 )
      {
        v19 = this->m_DeviceBase;
        v20 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v19->m_ObjectSize )
          v20 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          globals,
          0xDu,
          WPP_PowerStateMachine_cpp_Traceguids,
          v20,
          v19->m_DeviceObject.m_DeviceObject,
          HIDWORD(v19[1].FxNonPagedObject::FxObject::__vftable),
          _a4,
          globals);
      }
      if ( _a4 <= 0x20 && (_WORD)_a4 )
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
      v14 = 0LL;
      while ( PowerEvent != _a4 )
      {
        TargetState = (unsigned int)(TargetState + 1);
        v14 = (unsigned int)TargetState;
        PowerEvent = OtherTargetStates[TargetState].PowerEvent;
        if ( PowerEvent == PowerEventMaximum )
          goto LABEL_19;
      }
      TargetState = (unsigned int)OtherTargetStates[v14].TargetState;
LABEL_7:
      if ( (_DWORD)TargetState == 873 )
        goto LABEL_19;
      FxPkgPnp::PowerEnterNewState(this, (_WDF_DEVICE_POWER_STATE)TargetState);
    }
  }
  m_QueueFlags = this->m_PowerMachine.m_QueueFlags;
  if ( (m_QueueFlags & 1) == 0 && !this->m_PowerMachine.m_WorkItemRunningCount )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      this->m_PowerMachine.m_QueueFlags = m_QueueFlags & 0xFB;
      Info->m_DeleteObject = 1;
      m_QueueFlags = this->m_PowerMachine.m_QueueFlags;
    }
    if ( (m_QueueFlags & 2) != 0 )
    {
      Info->m_Event = this->m_PowerMachine.m_WorkItemFinished;
      this->m_PowerMachine.m_WorkItemFinished = 0LL;
    }
  }
LABEL_11:
  KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v7);
}

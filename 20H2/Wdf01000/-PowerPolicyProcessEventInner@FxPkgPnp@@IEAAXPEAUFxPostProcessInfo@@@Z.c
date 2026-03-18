/*
 * XREFs of ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011F80
 * Callers:
 *     ?_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0011690 (-_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011B20 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 * Callees:
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0010318 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0011548 (-NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     ?PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0011D50 (-PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012700 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C007BE08 (WPP_IFR_SF_qqLLL.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C008DDC4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rsi
  unsigned int _a3; // r15d
  __int64 v6; // rbp
  KIRQL v7; // r8
  __int64 v8; // rax
  FxPowerPolicyEvent _a4; // edi
  unsigned int v10; // ecx
  __int64 TargetState; // rdx
  unsigned __int8 m_QueueFlags; // al
  int v13; // ecx
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *v14; // rdi
  int CurrentTargetState; // eax
  __int64 m_QueueHead; // rax
  FxPowerPolicyEvent v17; // ebp
  unsigned int m_SingularEventsPresent; // ecx
  unsigned int TargetStatesCount; // eax
  const POWER_POLICY_EVENT_TARGET_STATE *TargetStates; // rcx
  int v21; // edx
  const POWER_POLICY_EVENT_TARGET_STATE *OtherTargetStates; // r8
  FxPowerPolicyEvent PowerPolicyEvent; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int globals; // r8d
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  FxDeviceBase *v30; // rdx
  const void *v31; // rcx
  const char *v32; // rcx

  p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
  if ( !this->m_PowerPolicyMachine.m_Owner )
  {
    while ( 1 )
    {
LABEL_19:
      v13 = 0;
      v14 = FxPkgPnp::m_WdfNotPowerPolicyOwnerStates;
      CurrentTargetState = 1280;
      do
      {
        if ( CurrentTargetState == *(_DWORD *)&this->m_DeviceBase[1].m_Type )
          goto LABEL_23;
        v14 = &FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[++v13];
        CurrentTargetState = v14->CurrentTargetState;
      }
      while ( v14->CurrentTargetState != WdfDevStatePwrPolNull );
      v14 = 0LL;
LABEL_23:
      v7 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
      m_QueueHead = this->m_PowerPolicyMachine.m_QueueHead;
      if ( (_BYTE)m_QueueHead == this->m_PowerPolicyMachine.m_QueueTail )
        goto LABEL_16;
      v17 = this->m_PowerPolicyMachine.m_Queue[m_QueueHead];
      if ( (v17 & 0x60030) == 0 && !v14->QueueOpen )
        goto LABEL_16;
      m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
      if ( (m_SingularEventsPresent & v17) != 0 )
        this->m_PowerPolicyMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~v17;
      this->m_PowerPolicyMachine.m_QueueHead = ((unsigned int)this->m_PowerPolicyMachine.m_QueueHead + 1)
                                             % this->m_PowerPolicyMachine.m_QueueDepth;
      KeReleaseSpinLock(p_m_Lock, v7);
      if ( v14 )
      {
        TargetStatesCount = v14->TargetStatesCount;
        if ( (_BYTE)TargetStatesCount )
        {
          TargetStates = v14->TargetStates;
          v21 = 0;
          while ( v17 != TargetStates[v21].PowerPolicyEvent )
          {
            if ( ++v21 >= TargetStatesCount )
              goto LABEL_19;
          }
          FxPkgPnp::NotPowerPolicyOwnerEnterNewState(this, TargetStates[v21].TargetState);
        }
      }
    }
  }
  while ( 1 )
  {
    _a3 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
    v6 = (_a3 & 0xFFFF7FFF) - 1280;
    v7 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    v8 = this->m_PowerPolicyMachine.m_QueueHead;
    if ( (_BYTE)v8 == this->m_PowerPolicyMachine.m_QueueTail )
      break;
    _a4 = this->m_PowerPolicyMachine.m_Queue[v8];
    if ( (_a4 & 0x3A3F07F0) == 0 && (*(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v6].StateInfo.Bits & 1) == 0 )
      goto LABEL_16;
    v10 = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (v10 & _a4) != 0 )
      this->m_PowerPolicyMachine.m_SingularEventsPresent = v10 & ~_a4;
    this->m_PowerPolicyMachine.m_QueueHead = ((unsigned int)this->m_PowerPolicyMachine.m_QueueHead + 1)
                                           % this->m_PowerPolicyMachine.m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v7);
    if ( FxPkgPnp::m_WdfPowerPolicyStates[v6].FirstTargetState.PowerPolicyEvent == _a4 )
    {
      TargetState = (unsigned int)FxPkgPnp::m_WdfPowerPolicyStates[v6].FirstTargetState.TargetState;
      goto LABEL_8;
    }
    OtherTargetStates = FxPkgPnp::m_WdfPowerPolicyStates[v6].OtherTargetStates;
    if ( !OtherTargetStates
      || (PowerPolicyEvent = OtherTargetStates->PowerPolicyEvent,
          LODWORD(v24) = 0,
          OtherTargetStates->PowerPolicyEvent == PwrPolNull) )
    {
LABEL_39:
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
          0x13u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          _a1,
          m_DeviceBase->m_DeviceObject.m_DeviceObject,
          _a3,
          _a4);
      }
      globals = *(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v6].StateInfo.Bits >> 1;
      if ( (globals & _a4) == 0 )
      {
        v30 = this->m_DeviceBase;
        v31 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v30->m_ObjectSize )
          v31 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          2u,
          globals,
          0x14u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          v31,
          v30->m_DeviceObject.m_DeviceObject,
          _a3,
          _a4,
          globals);
        if ( _a4 >= PwrPolDeviceDirectedPowerDown || (_a3 & 0xFFFF7FFF) >= 0x599 )
          MicrosoftTelemetryAssertTriggeredArgsKM(v32, _a3, _a4);
      }
      if ( _a4 >= PwrPolUsbSelectiveSuspendCallback || _a4 < (PwrPolWakeFailed|PwrPolStart) )
      {
        switch ( _a4 )
        {
          case PwrPolSx:
            FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(this);
            break;
          case PwrPolWakeSuccess:
          case PwrPolWakeFailed:
            this->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped = 1;
            break;
          case PwrPolUsbSelectiveSuspendCallback:
            KeSetEvent((PRKEVENT)this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_IdleCallbackEvent, 0, 0);
            break;
          case PwrPolUsbSelectiveSuspendCompleted:
            this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_EventDropped = 1;
            break;
        }
      }
    }
    else
    {
      v25 = 0LL;
      while ( PowerPolicyEvent != _a4 )
      {
        v24 = (unsigned int)(v24 + 1);
        v25 = (unsigned int)v24;
        PowerPolicyEvent = OtherTargetStates[v24].PowerPolicyEvent;
        if ( PowerPolicyEvent == PwrPolNull )
          goto LABEL_39;
      }
      TargetState = (unsigned int)OtherTargetStates[v25].TargetState;
LABEL_8:
      if ( (_DWORD)TargetState == 1472 )
        goto LABEL_39;
      FxPkgPnp::PowerPolicyEnterNewState(this, TargetState);
    }
  }
  m_QueueFlags = this->m_PowerPolicyMachine.m_QueueFlags;
  if ( (m_QueueFlags & 1) == 0 && !this->m_PowerPolicyMachine.m_WorkItemRunningCount )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      this->m_PowerPolicyMachine.m_QueueFlags = m_QueueFlags & 0xFB;
      Info->m_DeleteObject = 1;
      m_QueueFlags = this->m_PowerPolicyMachine.m_QueueFlags;
    }
    if ( (m_QueueFlags & 2) != 0 )
    {
      Info->m_Event = this->m_PowerPolicyMachine.m_WorkItemFinished;
      this->m_PowerPolicyMachine.m_WorkItemFinished = 0LL;
    }
  }
LABEL_16:
  KeReleaseSpinLock(p_m_Lock, v7);
}

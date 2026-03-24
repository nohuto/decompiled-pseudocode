/*
 * XREFs of ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011B40
 * Callers:
 *     ?_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0011480 (-_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011910 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 * Callees:
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C00100C8 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0011308 (-NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     ?PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0012030 (-PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012660 (WPP_IFR_SF_qqLL.c)
 *     ?AcknowledgeS0@FxPowerPolicyMachine@@QEAAXXZ @ 0x1C001C7E4 (-AcknowledgeS0@FxPowerPolicyMachine@@QEAAXXZ.c)
 *     ?Feature_Servicing_WdfPowerMgmtFixes__private_IsEnabled@@YAHXZ @ 0x1C001C824 (-Feature_Servicing_WdfPowerMgmtFixes__private_IsEnabled@@YAHXZ.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C007C768 (WPP_IFR_SF_qqLLL.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C008E734 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  FxPowerPolicyMachine *p_m_PowerPolicyMachine; // r15
  unsigned __int64 *p_m_Lock; // r14
  unsigned int _a3; // ebp
  __int64 v6; // rsi
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // r8
  FxPowerPolicyEvent _a4; // ebx
  unsigned int v11; // ecx
  _WDF_DEVICE_POWER_POLICY_STATE TargetState; // edx
  const POWER_POLICY_EVENT_TARGET_STATE *OtherTargetStates; // r8
  FxPowerPolicyEvent PowerPolicyEvent; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  FxPwrPolStateInfo *p_StateInfo; // r14
  int v21; // esi
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  FxDeviceBase *v24; // r8
  const void *v25; // rdx
  const char *v26; // rcx
  const char *v27; // rcx
  unsigned __int8 m_QueueFlags; // al
  int v29; // ecx
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *v30; // rbx
  int CurrentTargetState; // eax
  KIRQL v32; // al
  __int64 m_QueueHead; // rcx
  FxPowerPolicyEvent v34; // esi
  unsigned int m_SingularEventsPresent; // ecx
  unsigned int TargetStatesCount; // ecx
  const POWER_POLICY_EVENT_TARGET_STATE *TargetStates; // r8
  int v38; // eax

  p_m_PowerPolicyMachine = &this->m_PowerPolicyMachine;
  p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
  if ( !this->m_PowerPolicyMachine.m_Owner )
  {
    while ( 1 )
    {
LABEL_55:
      v29 = 0;
      v30 = FxPkgPnp::m_WdfNotPowerPolicyOwnerStates;
      CurrentTargetState = 1280;
      do
      {
        if ( CurrentTargetState == *(_DWORD *)&this->m_DeviceBase[1].m_Type )
          goto LABEL_59;
        v30 = &FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[++v29];
        CurrentTargetState = v30->CurrentTargetState;
      }
      while ( v30->CurrentTargetState != WdfDevStatePwrPolNull );
      v30 = 0LL;
LABEL_59:
      v32 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
      m_QueueHead = p_m_PowerPolicyMachine->m_QueueHead;
      if ( (_BYTE)m_QueueHead == p_m_PowerPolicyMachine->m_QueueTail
        || (v34 = this->m_PowerPolicyMachine.m_Queue[m_QueueHead], (v34 & 0x60030) == 0) && !v30->QueueOpen )
      {
        KeReleaseSpinLock(p_m_Lock, v32);
        return;
      }
      m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
      if ( (m_SingularEventsPresent & v34) != 0 )
        this->m_PowerPolicyMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~v34;
      p_m_PowerPolicyMachine->m_QueueHead = ((unsigned int)p_m_PowerPolicyMachine->m_QueueHead + 1)
                                          % p_m_PowerPolicyMachine->m_QueueDepth;
      KeReleaseSpinLock(p_m_Lock, v32);
      if ( v30 )
      {
        TargetStatesCount = v30->TargetStatesCount;
        if ( (_BYTE)TargetStatesCount )
        {
          TargetStates = v30->TargetStates;
          v38 = 0;
          while ( v34 != TargetStates[v38].PowerPolicyEvent )
          {
            if ( ++v38 >= TargetStatesCount )
              goto LABEL_55;
          }
          FxPkgPnp::NotPowerPolicyOwnerEnterNewState(this, TargetStates[v38].TargetState);
        }
      }
    }
  }
  while ( 1 )
  {
    _a3 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
    v6 = (_a3 & 0xFFFF7FFF) - 1280;
    v7 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    v8 = p_m_PowerPolicyMachine->m_QueueHead;
    v9 = v7;
    if ( (_BYTE)v8 == p_m_PowerPolicyMachine->m_QueueTail )
      break;
    _a4 = this->m_PowerPolicyMachine.m_Queue[v8];
    if ( (_a4 & 0x3A3F07F0) == 0 && (*(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v6].StateInfo.Bits & 1) == 0 )
      goto LABEL_54;
    v11 = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (v11 & _a4) != 0 )
      this->m_PowerPolicyMachine.m_SingularEventsPresent = v11 & ~_a4;
    p_m_PowerPolicyMachine->m_QueueHead = ((unsigned int)p_m_PowerPolicyMachine->m_QueueHead + 1)
                                        % p_m_PowerPolicyMachine->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v7);
    if ( FxPkgPnp::m_WdfPowerPolicyStates[v6].FirstTargetState.PowerPolicyEvent == _a4 )
    {
      TargetState = FxPkgPnp::m_WdfPowerPolicyStates[v6].FirstTargetState.TargetState;
    }
    else
    {
      OtherTargetStates = FxPkgPnp::m_WdfPowerPolicyStates[v6].OtherTargetStates;
      if ( !OtherTargetStates )
        goto LABEL_16;
      PowerPolicyEvent = OtherTargetStates->PowerPolicyEvent;
      LODWORD(v15) = 0;
      if ( OtherTargetStates->PowerPolicyEvent == PwrPolNull )
        goto LABEL_16;
      v16 = 0LL;
      while ( PowerPolicyEvent != _a4 )
      {
        v15 = (unsigned int)(v15 + 1);
        v16 = (unsigned int)v15;
        PowerPolicyEvent = OtherTargetStates[v15].PowerPolicyEvent;
        if ( PowerPolicyEvent == PwrPolNull )
          goto LABEL_16;
      }
      TargetState = OtherTargetStates[v16].TargetState;
    }
    if ( TargetState == WdfDevStatePwrPolNull )
    {
LABEL_16:
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
      p_StateInfo = &FxPkgPnp::m_WdfPowerPolicyStates[v6].StateInfo;
      v21 = _a4 & (*(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v6].StateInfo.Bits >> 1);
      if ( !Feature_Servicing_WdfPowerMgmtFixes__private_IsEnabled()
        && _a4 == PwrPolS0
        && (v22 = _a3 - 1379, (unsigned int)v22 <= 0x26)
        && (v23 = 0x4200000001LL, _bittest64(&v23, v22))
        || !v21 )
      {
        v24 = this->m_DeviceBase;
        v25 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v24->m_ObjectSize )
          v25 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          2u,
          (unsigned int)v24,
          0x14u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          v25,
          v24->m_DeviceObject.m_DeviceObject,
          _a3,
          _a4,
          *(_DWORD *)&p_StateInfo->Bits >> 1);
        if ( _a4 >= PwrPolDeviceDirectedPowerDown || (_a3 & 0xFFFF7FFF) >= 0x599 )
          MicrosoftTelemetryAssertTriggeredArgsKM(v26, _a3, _a4);
      }
      if ( _a4 > PwrPolWakeFailed )
      {
        if ( _a4 == PwrPolUsbSelectiveSuspendCallback )
        {
          KeSetEvent((PRKEVENT)this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_IdleCallbackEvent, 0, 0);
          goto $LL287;
        }
        p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
        if ( _a4 == PwrPolUsbSelectiveSuspendCompleted )
        {
          this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_EventDropped = 1;
          goto $LL287;
        }
      }
      else
      {
        if ( _a4 == PwrPolWakeFailed )
          goto LABEL_35;
        if ( _a4 == PwrPolSx )
        {
          FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(this);
          goto $LL287;
        }
        if ( _a4 != PwrPolS0 )
        {
          if ( _a4 != PwrPolWakeSuccess )
            goto $LL287;
LABEL_35:
          this->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped = 1;
          goto $LL287;
        }
        p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
        if ( Feature_Servicing_WdfPowerMgmtFixes__private_IsEnabled() )
        {
          switch ( _a3 )
          {
            case 0x500u:
            case 0x58Eu:
              break;
            case 0x505u:
            case 0x508u:
            case 0x531u:
            case 0x53Eu:
            case 0x563u:
            case 0x565u:
            case 0x56Eu:
            case 0x584u:
            case 0x589u:
              FxPowerPolicyMachine::AcknowledgeS0(p_m_PowerPolicyMachine);
              break;
            default:
              MicrosoftTelemetryAssertTriggeredArgsKM(v27, _a3, 8u);
              break;
          }
$LL287:
          p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
        }
      }
    }
    else
    {
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
LABEL_54:
  KeReleaseSpinLock(p_m_Lock, v9);
}

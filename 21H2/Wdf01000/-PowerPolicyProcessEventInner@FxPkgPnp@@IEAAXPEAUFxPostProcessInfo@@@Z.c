/*
 * XREFs of ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00161D8
 * Callers:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0015C14 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C00160B0 (-_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C000CB78 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C00151A0 (-NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     ?GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0015AD8 (-GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEV.c)
 *     ?PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C001666C (-PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     ?Feature_Servicing_WdfPowerFailure_31388879__private_IsEnabled@@YAHXZ @ 0x1C0036750 (-Feature_Servicing_WdfPowerFailure_31388879__private_IsEnabled@@YAHXZ.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C0085584 (WPP_IFR_SF_qqLLL.c)
 *     ?AcknowledgeS0@FxPowerPolicyMachine@@QEAAXXZ @ 0x1C008A7D4 (-AcknowledgeS0@FxPowerPolicyMachine@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C008F414 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  FxPowerPolicyMachine *p_m_PowerPolicyMachine; // r15
  unsigned __int64 *p_m_Lock; // r12
  signed int _a3; // esi
  __int64 v6; // r14
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // r8
  FxPowerPolicyEvent _a4; // edi
  unsigned int v11; // ecx
  _WDF_DEVICE_POWER_POLICY_STATE TargetState; // edx
  const POWER_POLICY_EVENT_TARGET_STATE *OtherTargetStates; // rcx
  FxPowerPolicyEvent PowerPolicyEvent; // eax
  __int64 v15; // r8
  __int64 v16; // rdx
  const void *_a1; // rax
  __int64 v18; // rdx
  _FX_DRIVER_GLOBALS *v19; // r10
  bool v20; // bp
  const void *ObjectHandleUnchecked; // rax
  __int64 v22; // rdx
  unsigned int v23; // r8d
  bool v24; // zf
  bool v25; // cc
  unsigned __int8 m_QueueFlags; // al
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *NotPowerPolicyOwnerTableEntry; // rdi
  KIRQL v28; // al
  __int64 m_QueueHead; // rdx
  FxPowerPolicyEvent v30; // esi
  unsigned int m_SingularEventsPresent; // ecx
  unsigned int TargetStatesCount; // ecx
  __int64 v33; // rax
  const POWER_POLICY_EVENT_TARGET_STATE *TargetStates; // rdx

  p_m_PowerPolicyMachine = &this->m_PowerPolicyMachine;
  p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
  if ( !this->m_PowerPolicyMachine.m_Owner )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_60:
        NotPowerPolicyOwnerTableEntry = FxPkgPnp::GetNotPowerPolicyOwnerTableEntry((_WDF_DEVICE_POWER_POLICY_STATE)*(_DWORD *)&this->m_DeviceBase[1].m_Type);
        v28 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
        m_QueueHead = p_m_PowerPolicyMachine->m_QueueHead;
        v9 = v28;
        if ( (_BYTE)m_QueueHead == p_m_PowerPolicyMachine->m_QueueTail )
          goto LABEL_59;
        v30 = this->m_PowerPolicyMachine.m_Queue[m_QueueHead];
        if ( (v30 & 0x60030) == 0 && !NotPowerPolicyOwnerTableEntry->QueueOpen )
          goto LABEL_59;
        m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
        if ( (m_SingularEventsPresent & v30) != 0 )
          this->m_PowerPolicyMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~v30;
        p_m_PowerPolicyMachine->m_QueueHead = ((int)m_QueueHead + 1)
                                            % (unsigned int)p_m_PowerPolicyMachine->m_QueueDepth;
        KeReleaseSpinLock(p_m_Lock, v28);
        if ( NotPowerPolicyOwnerTableEntry )
        {
          TargetStatesCount = NotPowerPolicyOwnerTableEntry->TargetStatesCount;
          if ( (_BYTE)TargetStatesCount )
            break;
        }
      }
      v33 = 0LL;
      TargetStates = NotPowerPolicyOwnerTableEntry->TargetStates;
      while ( v30 != TargetStates[v33].PowerPolicyEvent )
      {
        v33 = (unsigned int)(v33 + 1);
        if ( (unsigned int)v33 >= TargetStatesCount )
          goto LABEL_60;
      }
      FxPkgPnp::NotPowerPolicyOwnerEnterNewState(this, TargetStates[v33].TargetState);
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
      goto LABEL_59;
    v11 = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (v11 & _a4) != 0 )
      this->m_PowerPolicyMachine.m_SingularEventsPresent = v11 & ~_a4;
    p_m_PowerPolicyMachine->m_QueueHead = ((int)v8 + 1) % (unsigned int)p_m_PowerPolicyMachine->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v7);
    if ( FxPkgPnp::m_WdfPowerPolicyStates[v6].FirstTargetState.PowerPolicyEvent == _a4 )
    {
      TargetState = FxPkgPnp::m_WdfPowerPolicyStates[v6].FirstTargetState.TargetState;
    }
    else
    {
      OtherTargetStates = FxPkgPnp::m_WdfPowerPolicyStates[v6].OtherTargetStates;
      if ( !OtherTargetStates )
        goto LABEL_14;
      PowerPolicyEvent = OtherTargetStates->PowerPolicyEvent;
      LODWORD(v15) = 0;
      if ( OtherTargetStates->PowerPolicyEvent == PwrPolNull )
        goto LABEL_14;
      v16 = 0LL;
      while ( PowerPolicyEvent != _a4 )
      {
        v15 = (unsigned int)(v15 + 1);
        v16 = (unsigned int)v15;
        PowerPolicyEvent = OtherTargetStates[v15].PowerPolicyEvent;
        if ( PowerPolicyEvent == PwrPolNull )
          goto LABEL_14;
      }
      TargetState = OtherTargetStates[v16].TargetState;
    }
    if ( TargetState == WdfDevStatePwrPolNull )
    {
LABEL_14:
      if ( this->m_Globals->FxVerboseOn )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqLL(
          v19,
          5u,
          0xCu,
          0x13u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          _a1,
          *(const void **)(v18 + 144),
          _a3,
          _a4);
      }
      v20 = ((*(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v6].StateInfo.Bits >> 1) & _a4) == 0;
      if ( !Feature_Servicing_WdfPowerFailure_31388879__private_IsEnabled() && _a4 == PwrPolS0 && _a3 == 1379 || v20 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          2u,
          v23,
          0x14u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(const void **)(v22 + 144),
          _a3,
          _a4,
          *(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v6].StateInfo.Bits >> 1);
        if ( _a4 >= PwrPolDeviceDirectedPowerDown || (_a3 & 0xFFFF7FFF) >= 0x599 )
          MicrosoftTelemetryAssertTriggeredArgsKM("wdf01000.sys", _a3, _a4);
      }
      if ( _a4 == PwrPolSx )
      {
        FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(this);
      }
      else if ( _a4 == PwrPolS0 )
      {
        if ( Feature_Servicing_WdfPowerFailure_31388879__private_IsEnabled() )
        {
          v24 = _a3 == 1379;
          v25 = _a3 <= 1379;
          goto LABEL_38;
        }
        v24 = _a3 == 1379;
        v25 = _a3 <= 1379;
        if ( _a3 == 1379 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("wdf01000.sys", 0x563u, 8u);
        }
        else
        {
LABEL_38:
          if ( v25 )
          {
            if ( v24 )
              goto LABEL_45;
            if ( _a3 != 1280 )
            {
              if ( _a3 == 1285 || _a3 == 1288 || _a3 == 1329 || _a3 == 1342 )
                goto LABEL_45;
LABEL_51:
              MicrosoftTelemetryAssertTriggeredArgsKM("wdf01000.sys", _a3, 8u);
            }
          }
          else if ( _a3 == 1381 || _a3 == 1390 || _a3 == 1412 || _a3 == 1417 )
          {
LABEL_45:
            FxPowerPolicyMachine::AcknowledgeS0(p_m_PowerPolicyMachine);
          }
          else if ( _a3 != 1422 )
          {
            goto LABEL_51;
          }
        }
      }
      else if ( ((_a4 - 512) & 0xFFFFFDFF) != 0 )
      {
        if ( _a4 == PwrPolUsbSelectiveSuspendCallback )
        {
          KeSetEvent((PRKEVENT)this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_IdleCallbackEvent, 0, 0);
        }
        else if ( _a4 == PwrPolUsbSelectiveSuspendCompleted )
        {
          this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_EventDropped = 1;
        }
      }
      else
      {
        this->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped = 1;
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
LABEL_59:
  KeReleaseSpinLock(p_m_Lock, v9);
}

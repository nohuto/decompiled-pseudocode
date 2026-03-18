/*
 * XREFs of ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0011548
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011F80 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0011F3C (-GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEV.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012700 (WPP_IFR_SF_qqLL.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1C007BF84 (-Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICA.c)
 */

void __fastcall FxPkgPnp::NotPowerPolicyOwnerEnterNewState(FxPkgPnp *this, _WDF_DEVICE_POWER_POLICY_STATE NewState)
{
  _WDF_DEVICE_POWER_POLICY_STATE v2; // ebx
  _WDF_DEVICE_POWER_POLICY_STATE v4; // esi
  const void *_a1; // rax
  __int64 v6; // rdx
  __int64 m_HistoryIndex; // r8
  _WDF_DEVICE_POWER_POLICY_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  FxDeviceBase *m_DeviceBase; // rcx
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  FxPowerPolicyStateCallback *v11; // r10
  FxDeviceBase *v12; // rcx
  WDFDEVICE__ *v13; // rax
  FxPowerPolicyStateCallback *v14; // r10
  FxDeviceBase *v15; // rcx
  WDFDEVICE__ *v16; // rax
  FxPowerPolicyStateCallback *v17; // r10
  _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA NotificationData; // [rsp+50h] [rbp-20h] BYREF

  if ( NewState != WdfDevStatePwrPolNull )
  {
    v2 = NewState;
    *(_QWORD *)&NotificationData.Type = 0LL;
    NotificationData.Data.EnterState.NewState = WdfDevStatePwrPolInvalid;
    v4 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
    do
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0x15u,
        0xAu,
        WPP_NotPowerPolicyOwnerStateMachine_cpp_Traceguids,
        _a1,
        *(const void **)(v6 + 144),
        v2,
        v4);
      if ( this->m_PowerPolicyStateCallbacks )
      {
        m_DeviceBase = this->m_DeviceBase;
        NotificationData.Type = StateNotificationLeaveState;
        NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(v2, v4);
        ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
        FxPowerPolicyStateCallback::Invoke(
          v11,
          v4,
          StateNotificationLeaveState,
          ObjectHandleUnchecked,
          &NotificationData);
      }
      m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
      this->m_PowerPolicyMachine.m_HistoryIndex = ((int)m_HistoryIndex + 1)
                                                % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
      this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = v2;
      if ( this->m_PowerPolicyStateCallbacks )
      {
        v12 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationEnterState;
        NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(v2, v4);
        v13 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v12);
        FxPowerPolicyStateCallback::Invoke(v14, v2, StateNotificationEnterState, v13, &NotificationData);
      }
      v4 = v2;
      *(_DWORD *)&this->m_DeviceBase[1].m_Type = v2;
      StateFunc = FxPkgPnp::GetNotPowerPolicyOwnerTableEntry(v2)->StateFunc;
      if ( StateFunc )
        v2 = StateFunc(this);
      else
        v2 = WdfDevStatePwrPolNull;
      if ( this->m_PowerPolicyStateCallbacks )
      {
        v15 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationPostProcessState;
        NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)v4;
        v16 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v15);
        FxPowerPolicyStateCallback::Invoke(v17, v4, StateNotificationPostProcessState, v16, &NotificationData);
      }
    }
    while ( v2 != WdfDevStatePwrPolNull );
  }
}

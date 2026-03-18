/*
 * XREFs of ?PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z @ 0x1C001E3A4
 * Callers:
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C001E4F0 (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?Invoke@FxPnpStateCallback@@QEAAXW4_WDF_DEVICE_PNP_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_PNP_NOTIFICATION_DATA@@@Z @ 0x1C00856C4 (-Invoke@FxPnpStateCallback@@QEAAXW4_WDF_DEVICE_PNP_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWD.c)
 */

void __fastcall FxPkgPnp::PnpEnterNewState(FxPkgPnp *this, _WDF_DEVICE_PNP_STATE State)
{
  _WDF_DEVICE_PNP_STATE v2; // ebx
  _WDF_DEVICE_PNP_STATE v4; // esi
  const void *_a1; // rax
  __int64 v6; // r8
  __int64 m_HistoryIndex; // r8
  _WDF_DEVICE_PNP_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  FxDeviceBase *m_DeviceBase; // rcx
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  FxPnpStateCallback *v11; // r10
  FxDeviceBase *v12; // rcx
  WDFDEVICE__ *v13; // rax
  FxPnpStateCallback *v14; // r10
  FxDeviceBase *v15; // rcx
  WDFDEVICE__ *v16; // rax
  FxPnpStateCallback *v17; // r10
  _WDF_DEVICE_PNP_NOTIFICATION_DATA NotificationData; // [rsp+50h] [rbp-20h] BYREF

  if ( State != WdfDevStatePnpNull )
  {
    v2 = State;
    *(_QWORD *)&NotificationData.Type = 0LL;
    NotificationData.Data.EnterState.NewState = WdfDevStatePnpInvalid;
    v4 = (_WDF_DEVICE_PNP_STATE)this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable;
    do
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0x15u,
        0xEu,
        WPP_PnpStateMachine_cpp_Traceguids,
        _a1,
        *(const void **)(v6 + 144),
        v2,
        v4);
      if ( this->m_PnpStateCallbacks )
      {
        m_DeviceBase = this->m_DeviceBase;
        NotificationData.Type = StateNotificationLeaveState;
        NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(v2, v4);
        ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
        FxPnpStateCallback::Invoke(v11, v4, StateNotificationLeaveState, ObjectHandleUnchecked, &NotificationData);
      }
      m_HistoryIndex = this->m_PnpMachine.m_HistoryIndex;
      this->m_PnpMachine.m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PnpMachine.m_QueueDepth;
      this->m_PnpMachine.m_States.History[m_HistoryIndex] = v2;
      if ( this->m_PnpStateCallbacks )
      {
        v12 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationEnterState;
        NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(v2, v4);
        v13 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v12);
        FxPnpStateCallback::Invoke(v14, v2, StateNotificationEnterState, v13, &NotificationData);
      }
      v4 = v2;
      LODWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) = v2;
      StateFunc = FxPkgPnp::m_WdfPnpStates[(v2 & 0xFFFF7FFF) - 256].StateFunc;
      if ( StateFunc )
        v2 = StateFunc(this);
      else
        v2 = WdfDevStatePnpNull;
      if ( this->m_PnpStateCallbacks )
      {
        v15 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationPostProcessState;
        NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)v4;
        v16 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v15);
        FxPnpStateCallback::Invoke(v17, v4, StateNotificationPostProcessState, v16, &NotificationData);
      }
    }
    while ( v2 != WdfDevStatePnpNull );
  }
}

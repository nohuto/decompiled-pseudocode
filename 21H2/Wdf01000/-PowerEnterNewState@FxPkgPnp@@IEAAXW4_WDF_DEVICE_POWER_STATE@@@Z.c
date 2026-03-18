/*
 * XREFs of ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C0016A84
 * Callers:
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0016CA4 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C0011D90 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0013450 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C0013E68 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1C0016E64 (--1MxTimer@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_NOTIFICATION_DATA@@@Z @ 0x1C008573C (-Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PE.c)
 */

void __fastcall FxPkgPnp::PowerEnterNewState(FxPkgPnp *this, _WDF_DEVICE_POWER_STATE State)
{
  _WDF_DEVICE_POWER_STATE _a3; // ebx
  FxDeviceBase *m_DeviceBase; // rax
  _WDF_DEVICE_POWER_STATE _a4; // r14d
  FxDeviceBase *v6; // rdx
  const void *_a1; // rcx
  __int64 m_HistoryIndex; // r8
  const POWER_STATE_TABLE *v9; // rsi
  FxDeviceBase *v10; // rcx
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  FxPowerStateCallback *v12; // r10
  FxDeviceBase *v13; // rcx
  WDFDEVICE__ *v14; // rax
  FxPowerStateCallback *v15; // r10
  FxDeviceBase *v16; // rcx
  WDFDEVICE__ *v17; // rax
  FxPowerStateCallback *v18; // r10
  FxWatchdog watchdog; // [rsp+50h] [rbp-B0h] BYREF
  _WDF_DEVICE_POWER_NOTIFICATION_DATA data; // [rsp+100h] [rbp+0h] BYREF

  watchdog.m_PkgPnp = this;
  watchdog.m_Timer.m_Timer.m_TimerContext = 0LL;
  *(_QWORD *)&data.Type = 0LL;
  _a3 = State;
  data.Data.EnterState.NewState = WdfDevStatePowerInvalid;
  m_DeviceBase = this->m_DeviceBase;
  watchdog.m_Timer.m_Timer.m_TimerCallback = 0LL;
  watchdog.m_Timer.m_Timer.m_Period = 0;
  watchdog.m_Timer.m_Timer.m_KernelExTimer = 0LL;
  _a4 = HIDWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable);
  while ( _a3 != WdfDevStatePowerNull )
  {
    v6 = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0x15u,
      0xEu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a1,
      v6->m_DeviceObject.m_DeviceObject,
      _a3,
      _a4);
    if ( this->m_PowerStateCallbacks )
    {
      v10 = this->m_DeviceBase;
      data.Type = StateNotificationLeaveState;
      data.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
      ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v10);
      FxPowerStateCallback::Invoke(v12, _a4, StateNotificationLeaveState, ObjectHandleUnchecked, &data);
    }
    m_HistoryIndex = this->m_PowerMachine.m_HistoryIndex;
    this->m_PowerMachine.m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PowerMachine.m_QueueDepth;
    this->m_PowerMachine.m_States.History[m_HistoryIndex] = _a3;
    if ( this->m_PowerStateCallbacks )
    {
      v13 = this->m_DeviceBase;
      data.Type = StateNotificationEnterState;
      data.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
      v14 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v13);
      FxPowerStateCallback::Invoke(v15, _a3, StateNotificationEnterState, v14, &data);
    }
    _a4 = _a3;
    HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) = _a3;
    v9 = &FxPkgPnp::m_WdfPowerStates[(_a3 & 0xFFFF7FFF) - 768];
    if ( v9->StateFunc )
    {
      if ( (_a3 & 0x8000) != 0 )
      {
        MxTimer::Initialize(&watchdog.m_Timer, &watchdog, FxWatchdog::_WatchdogDpc, 0);
        watchdog.m_CallingThread = KeGetCurrentThread();
        MxTimer::Start(
          &watchdog.m_Timer,
          (_LARGE_INTEGER)((-(__int64)(watchdog.m_PkgPnp->m_SharedPower.m_ExtendWatchDogTimer != 0) & 0xFFFFFF383B36FC00uLL)
                         - 6000000000LL),
          0);
      }
      _a3 = v9->StateFunc(this);
    }
    else
    {
      _a3 = WdfDevStatePowerNull;
    }
    if ( this->m_PowerStateCallbacks )
    {
      v16 = this->m_DeviceBase;
      data.Type = StateNotificationPostProcessState;
      data.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
      v17 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v16);
      FxPowerStateCallback::Invoke(v18, _a4, StateNotificationPostProcessState, v17, &data);
    }
  }
  MxTimer::~MxTimer(&watchdog.m_Timer);
}

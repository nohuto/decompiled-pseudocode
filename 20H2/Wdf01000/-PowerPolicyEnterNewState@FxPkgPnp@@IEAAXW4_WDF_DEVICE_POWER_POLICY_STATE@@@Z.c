/*
 * XREFs of ?PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0011D50
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011F80 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0012700 (WPP_IFR_SF_qqLL.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0014E04 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C0018D40 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C0019040 (-Stop@MxTimer@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1C007BF84 (-Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICA.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall FxPkgPnp::PowerPolicyEnterNewState(FxPkgPnp *this, __int64 NewState)
{
  _LIST_ENTRY *Flink; // r15
  _WDF_DEVICE_POWER_POLICY_STATE _a3; // ebx
  FxDeviceBase *m_DeviceBase; // rax
  _WDF_DEVICE_POWER_POLICY_STATE v6; // r12d
  FxDeviceBase *v7; // rdx
  const void *_a1; // rcx
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  FxPowerPolicyStateCallback *v11; // rcx
  __int64 v12; // rsi
  _WDF_DEVICE_POWER_POLICY_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  int v14; // r14d
  _WDF_DEVICE_POWER_POLICY_STATE v15; // eax
  FxPowerPolicyStateCallback *v16; // rcx
  FxDeviceBase *v17; // r9
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v19; // r9
  FxDeviceBase *v20; // r9
  unsigned __int16 v21; // ax
  WDFDEVICE__ *v22; // r9
  _LARGE_INTEGER v23; // rdx
  FxDeviceBase *v24; // r9
  unsigned __int16 v25; // ax
  WDFDEVICE__ *v26; // r9
  FxWatchdog watchdog; // [rsp+50h] [rbp-B8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-10h]
  __int64 data_8; // [rsp+108h] [rbp+0h] OVERLAPPED BYREF
  _WDF_DEVICE_POWER_POLICY_STATE v30; // [rsp+110h] [rbp+8h]

  Flink = 0LL;
  data_8 = 0LL;
  _a3 = (int)NewState;
  v30 = WdfDevStatePwrPolInvalid;
  m_DeviceBase = this->m_DeviceBase;
  watchdog.m_PkgPnp = 0LL;
  *(_OWORD *)&watchdog.m_Timer.m_Timer.KernelTimer.Header.Lock = 0uLL;
  LODWORD(watchdog.m_Timer.m_Timer.m_TimerCallback) = 0;
  watchdog.m_CallingThread = (struct _KTHREAD *)this;
  v6 = *(_DWORD *)&m_DeviceBase[1].m_Type;
  if ( (_DWORD)NewState != 1472 )
  {
    do
    {
      v7 = this->m_DeviceBase;
      _a1 = 0LL;
      if ( v7->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0x15u,
        0x15u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        _a1,
        v7->m_DeviceObject.m_DeviceObject,
        _a3,
        v6);
      m_PowerPolicyStateCallbacks = this->m_PowerPolicyStateCallbacks;
      if ( m_PowerPolicyStateCallbacks )
      {
        v17 = this->m_DeviceBase;
        LODWORD(data_8) = 4;
        HIDWORD(data_8) = v6;
        v30 = _a3;
        m_ObjectSize = v17->m_ObjectSize;
        v19 = (WDFDEVICE__ *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v19 = 0LL;
        FxPowerPolicyStateCallback::Invoke(
          m_PowerPolicyStateCallbacks,
          v6,
          StateNotificationLeaveState,
          v19,
          (const _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA *)&data_8);
      }
      m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
      NewState = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
      this->m_PowerPolicyMachine.m_HistoryIndex = NewState;
      this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = _a3;
      v11 = this->m_PowerPolicyStateCallbacks;
      if ( v11 )
      {
        v20 = this->m_DeviceBase;
        LODWORD(data_8) = 1;
        HIDWORD(data_8) = v6;
        v30 = _a3;
        v21 = v20->m_ObjectSize;
        v22 = (WDFDEVICE__ *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v21 )
          v22 = 0LL;
        FxPowerPolicyStateCallback::Invoke(
          v11,
          _a3,
          StateNotificationEnterState,
          v22,
          (const _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA *)&data_8);
      }
      v6 = _a3;
      v12 = (_a3 & 0xFFFF7FFF) - 1280;
      *(_DWORD *)&this->m_DeviceBase[1].m_Type = _a3;
      StateFunc = FxPkgPnp::m_WdfPowerPolicyStates[v12].StateFunc;
      if ( StateFunc )
      {
        v14 = _a3 & 0x8000;
        if ( (_a3 & 0x8000) != 0 )
        {
          MxTimer::Initialize(
            (MxTimer *)&watchdog.m_Timer.m_Timer.8,
            &watchdog.m_Timer.m_Timer.8,
            FxWatchdog::_WatchdogDpc,
            0);
          CurrentThread = KeGetCurrentThread();
          v23.QuadPart = -864000000000LL;
          if ( !*((_BYTE *)watchdog.m_CallingThread + 921) )
            v23.QuadPart = -6000000000LL;
          MxTimer::Start((MxTimer *)&watchdog.m_Timer.m_Timer.8, v23, 0);
          v15 = FxPkgPnp::m_WdfPowerPolicyStates[v12].StateFunc(this);
        }
        else
        {
          v15 = StateFunc(this);
        }
        _a3 = v15;
        if ( v14 )
          MxTimer::Stop((MxTimer *)&watchdog.m_Timer.m_Timer.8);
      }
      else
      {
        _a3 = WdfDevStatePwrPolNull;
      }
      v16 = this->m_PowerPolicyStateCallbacks;
      if ( v16 )
      {
        v24 = this->m_DeviceBase;
        v30 = WdfDevStatePwrPolInvalid;
        LODWORD(data_8) = 2;
        HIDWORD(data_8) = v6;
        v25 = v24->m_ObjectSize;
        v26 = (WDFDEVICE__ *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v25 )
          v26 = 0LL;
        FxPowerPolicyStateCallback::Invoke(
          v16,
          v6,
          StateNotificationPostProcessState,
          v26,
          (const _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA *)&data_8);
      }
    }
    while ( _a3 != WdfDevStatePwrPolNull );
    Flink = watchdog.m_Timer.m_Timer.KernelTimer.Header.WaitListHead.Flink;
  }
  if ( BYTE4(watchdog.m_Timer.m_Timer.m_ExTimerCallback) )
  {
    if ( Flink )
    {
      LOBYTE(NewState) = 1;
      ExDeleteTimer(Flink, NewState, 0LL, 0LL);
    }
  }
}

/*
 * XREFs of ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0015C14
 * Callers:
 *     ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C9DC (-DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C000D138 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA?AW4_WDF_DEVICE_POWER_STATE@@E@Z @ 0x1C000D8A8 (-PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA-AW4_WDF_DEVICE_POWER_STATE@@E@Z.c)
 *     ?_SystemPowerS0Completion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000DBB0 (-_SystemPowerS0Completion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?PowerNotRequiredD0@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C000E6B0 (-PowerNotRequiredD0@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV1@@Z.c)
 *     ?PowerRequiredDx@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C000E700 (-PowerRequiredDx@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV1@@Z.c)
 *     ?_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C000E940 (-_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_S.c)
 *     ?_SystemPowerSxCompletion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000EC60 (-_SystemPowerSxCompletion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C000ECB0 (-_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STA.c)
 *     ?InDxIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C000F570 (-InDxIoIncrement@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C000F798 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C0015164 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?TimedOutIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0015390 (-TimedOutIoIncrement@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?TimingOut@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0015A90 (-TimingOut@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C001C1D0 (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0021720 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0083D40 (-PnpEventFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailedIoStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0083DB0 (-PnpEventFailedIoStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0083DF0 (-PnpEventFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueriedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084220 (-PnpEventQueriedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00848F0 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084930 (-PnpEventRestartHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084A10 (-PnpEventRestarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00873E8 (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C0087484 (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0088098 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?DisablingTimerExpired@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0089790 (-DisablingTimerExpired@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?_PowerPolDeviceWaitWakeComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C008CB40 (-_PowerPolDeviceWaitWakeComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_ST.c)
 *     ?_PowerPolicyUsbSelectiveSuspendCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C008CB80 (-_PowerPolicyUsbSelectiveSuspendCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEA.c)
 *     ?Waking@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008E7F0 (-Waking@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C008EC50 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 *     ?DirectedPowerDownFailedUpArrived@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C008F0A0 (-DirectedPowerDownFailedUpArrived@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementSta.c)
 *     ?DirectedPowerDownInitiate@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C008F0D0 (-DirectedPowerDownInitiate@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PE.c)
 *     ?DirectedPowerUpInitiate@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C008F100 (-DirectedPowerUpInitiate@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C0015E5C (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 *     ?QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ @ 0x1C0015ED4 (-QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C0016054 (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00161D8 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEvent(FxPkgPnp *this, FxPowerPolicyEvent Event, unsigned __int8 a3)
{
  unsigned __int64 *p_m_Lock; // r14
  KIRQL v6; // bp
  __int64 m_QueueTail; // r8
  int v8; // r10d
  NTSTATUS v9; // ecx
  unsigned int m_SingularEventsPresent; // ecx
  const void *_a1; // rax
  __int64 v12; // r8
  const void *ObjectHandleUnchecked; // rax
  __int64 v14; // rdx
  FxPostProcessInfo info; // [rsp+50h] [rbp-38h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF

  p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock);
  if ( (Event & 0x2002000) != 0 )
  {
    m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & Event) != 0 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0xCu,
        0x11u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        _a1,
        *(const void **)(v12 + 144),
        *(_DWORD *)(v12 + 208),
        Event);
      goto LABEL_18;
    }
    this->m_PowerPolicyMachine.m_SingularEventsPresent = Event | m_SingularEventsPresent;
  }
  m_QueueTail = this->m_PowerPolicyMachine.m_QueueTail;
  v8 = (this->m_PowerPolicyMachine.m_QueueDepth + this->m_PowerPolicyMachine.m_QueueHead - 1)
     % this->m_PowerPolicyMachine.m_QueueDepth;
  if ( v8 == this->m_PowerPolicyMachine.m_QueueTail % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth )
  {
LABEL_18:
    KeReleaseSpinLock(p_m_Lock, v6);
    return;
  }
  if ( (this->m_PowerPolicyMachine.m_QueueFlags & 2) != 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0x12u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      ObjectHandleUnchecked,
      *(const void **)(v14 + 144),
      *(_DWORD *)(v14 + 208),
      Event);
    goto LABEL_18;
  }
  if ( ((this->m_PowerPolicyMachine.m_Owner != 0LL ? 977209328 : 393264) & Event) != 0 )
  {
    this->m_PowerPolicyMachine.m_QueueHead = v8;
    this->m_PowerPolicyMachine.m_Queue[(unsigned __int8)v8] = Event;
  }
  else
  {
    this->m_PowerPolicyMachine.m_QueueTail = ((int)m_QueueTail + 1)
                                           % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
    this->m_PowerPolicyMachine.m_Queue[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(p_m_Lock, v6);
  if ( !v6 )
  {
    Timeout.QuadPart = 0LL;
    KeEnterCriticalRegion();
    v9 = KeWaitForSingleObject(&this->m_PowerPolicyMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
    if ( v9 == 258 )
    {
      KeLeaveCriticalRegion();
    }
    else
    {
      this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
      if ( v9 >= 0 )
      {
        info.m_Event = 0LL;
        *(_WORD *)&info.m_DeleteObject = 0;
        info.m_FireAndForgetIrp = 0LL;
        FxPkgPnp::PowerPolicyProcessEventInner(this, &info);
        this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = 0LL;
        KeSetEvent(&this->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
        KeLeaveCriticalRegion();
        FxPostProcessInfo::Evaluate(&info, this);
        return;
      }
    }
  }
  if ( FxEventQueue::QueueToThreadWorker(&this->m_PowerPolicyMachine) )
    FxThreadedEventQueue::QueueWorkItem(&this->m_PowerPolicyMachine);
}

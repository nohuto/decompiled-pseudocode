/*
 * XREFs of ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011B20
 * Callers:
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00047E4 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerNotRequiredD0@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C000E580 (-PowerNotRequiredD0@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV1@@Z.c)
 *     ?PowerRequiredDx@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C000E720 (-PowerRequiredDx@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV1@@Z.c)
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C000E76C (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?TimingOut@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C000E7B0 (-TimingOut@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C000EAC8 (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0010080 (-DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0010E70 (-_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_S.c)
 *     ?_SystemPowerS0Completion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0010EB0 (-_SystemPowerS0Completion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?_SystemPowerSxCompletion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0010F60 (-_SystemPowerSxCompletion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0011420 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C00114C4 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?InDxIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0013850 (-InDxIoIncrement@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00194C0 (-_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STA.c)
 *     ?PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA?AW4_WDF_DEVICE_POWER_STATE@@E@Z @ 0x1C001C2F8 (-PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA-AW4_WDF_DEVICE_POWER_STATE@@E@Z.c)
 *     ?PnpEventFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0079AD0 (-PnpEventFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailedIoStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0079B40 (-PnpEventFailedIoStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0079B80 (-PnpEventFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0079DD0 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueriedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A0D0 (-PnpEventQueriedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A7A0 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A7E0 (-PnpEventRestartHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A8C0 (-PnpEventRestarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C007DA28 (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C007DAC4 (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C007F6D4 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?DisablingTimerExpired@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0083310 (-DisablingTimerExpired@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?TimedOutIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0083570 (-TimedOutIoIncrement@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?_PowerPolDeviceWaitWakeComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00882F0 (-_PowerPolDeviceWaitWakeComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_ST.c)
 *     ?_PowerPolicyUsbSelectiveSuspendCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0088330 (-_PowerPolicyUsbSelectiveSuspendCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEA.c)
 *     ?Waking@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008B480 (-Waking@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C008BD40 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 *     ?DirectedPowerDownFailedUpArrived@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C008C3B0 (-DirectedPowerDownFailedUpArrived@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementSta.c)
 *     ?DirectedPowerDownInitiate@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C008C3E0 (-DirectedPowerDownInitiate@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PE.c)
 *     ?DirectedPowerUpInitiate@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C008C410 (-DirectedPowerUpInitiate@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV.c)
 * Callees:
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C001199C (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011F80 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012700 (WPP_IFR_SF_qqLL.c)
 *     ?QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ @ 0x1C0012804 (-QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C008186C (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEvent(FxPkgPnp *this, FxPowerPolicyEvent Event, unsigned __int8 a3)
{
  KIRQL v5; // bp
  unsigned int m_QueueDepth; // r8d
  int v7; // ecx
  int v8; // ecx
  __int64 m_QueueTail; // r9
  int v10; // eax
  NTSTATUS v11; // ecx
  unsigned int m_SingularEventsPresent; // eax
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  FxDeviceBase *v15; // rdx
  const void *v16; // rcx
  FxPostProcessInfo info; // [rsp+50h] [rbp-48h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  _IRP *m_FireAndForgetIrp; // [rsp+B8h] [rbp+20h] BYREF

  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock);
  if ( (Event & 0x2002000) != 0 )
  {
    m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & Event) != 0 )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0xCu,
        0x11u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        _a1,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        *(_DWORD *)&m_DeviceBase[1].m_Type,
        Event);
      KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v5);
      return;
    }
    this->m_PowerPolicyMachine.m_SingularEventsPresent = Event | m_SingularEventsPresent;
  }
  m_QueueDepth = this->m_PowerPolicyMachine.m_QueueDepth;
  v7 = this->m_PowerPolicyMachine.m_QueueHead + m_QueueDepth - 1;
  if ( m_QueueDepth == 8 )
    v8 = v7 % 8;
  else
    v8 = v7 % (int)m_QueueDepth;
  m_QueueTail = this->m_PowerPolicyMachine.m_QueueTail;
  if ( v8 == this->m_PowerPolicyMachine.m_QueueTail % m_QueueDepth )
  {
LABEL_34:
    KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v5);
    return;
  }
  if ( (this->m_PowerPolicyMachine.m_QueueFlags & 2) != 0 )
  {
    v15 = this->m_DeviceBase;
    v16 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v15->m_ObjectSize )
      v16 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0x12u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      v16,
      v15->m_DeviceObject.m_DeviceObject,
      *(_DWORD *)&v15[1].m_Type,
      Event);
    goto LABEL_34;
  }
  v10 = 977209328;
  if ( !this->m_PowerPolicyMachine.m_Owner )
    v10 = 393264;
  if ( (v10 & Event) != 0 )
  {
    this->m_PowerPolicyMachine.m_QueueHead = v8;
    this->m_PowerPolicyMachine.m_Queue[(unsigned __int8)v8] = Event;
  }
  else
  {
    this->m_PowerPolicyMachine.m_QueueTail = ((int)m_QueueTail + 1) % m_QueueDepth;
    this->m_PowerPolicyMachine.m_Queue[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v5);
  if ( !v5 )
  {
    Timeout.QuadPart = 0LL;
    KeEnterCriticalRegion();
    v11 = KeWaitForSingleObject(&this->m_PowerPolicyMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
    if ( v11 == 258 )
    {
      KeLeaveCriticalRegion();
    }
    else
    {
      this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
      if ( v11 >= 0 )
      {
        info.m_Event = 0LL;
        *(_WORD *)&info.m_DeleteObject = 0;
        info.m_FireAndForgetIrp = 0LL;
        FxPkgPnp::PowerPolicyProcessEventInner(this, &info);
        this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = 0LL;
        KeSetEvent(&this->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
        KeLeaveCriticalRegion();
        if ( info.m_SetRemovedEvent )
        {
          KeSetEvent(&this->m_DeviceRemoveProcessed->m_Event, 0, 0);
        }
        else
        {
          if ( info.m_FireAndForgetIrp )
          {
            m_FireAndForgetIrp = info.m_FireAndForgetIrp;
            this->FireAndForgetIrp(this, (FxIrp *)&m_FireAndForgetIrp);
          }
          if ( info.m_DeleteObject )
            FxPkgPnp::ProcessDelayedDeletion(this);
          if ( info.m_Event )
            KeSetEvent(&info.m_Event->m_Event.m_Event, 0, 0);
        }
        return;
      }
    }
  }
  if ( FxEventQueue::QueueToThreadWorker(&this->m_PowerPolicyMachine) )
    FxThreadedEventQueue::QueueWorkItem(&this->m_PowerPolicyMachine);
}

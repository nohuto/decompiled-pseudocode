/*
 * XREFs of ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C00887E4
 * Callers:
 *     ?PowerPolSleepingWakeCancelWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C001C890 (-PowerPolSleepingWakeCancelWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolCancelingWakeForSystemSleep@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00868C0 (-PowerPolCancelingWakeForSystemSleep@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolIoPresentArmed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086BC0 (-PowerPolIoPresentArmed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakePowerDownFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086F10 (-PowerPolSleepingWakePowerDownFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087650 (-PowerPolStoppingCancelWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingDisarmWakeCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00877F0 (-PowerPolStoppingDisarmWakeCancelWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeEnabled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087A20 (-PowerPolSystemWakeDeviceWakeEnabled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeEnabledNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087A60 (-PowerPolSystemWakeDeviceWakeEnabledNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeInterruptFired@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087AA0 (-PowerPolSystemWakeDeviceWakeInterruptFired@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?PowerPolSystemWakeDeviceWakeInterruptFiredNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087AE0 (-PowerPolSystemWakeDeviceWakeInterruptFiredNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PE.c)
 *     ?PowerPolTimerExpiredWakeCapableCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087CF0 (-PowerPolTimerExpiredWakeCapableCancelWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1.c)
 *     ?PowerPolTimerExpiredWakeCapablePowerDownFailedCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087E10 (-PowerPolTimerExpiredWakeCapablePowerDownFailedCancelWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLI.c)
 *     ?PowerPolTimerExpiredWakeCapableWakeInterruptArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0088130 (-PowerPolTimerExpiredWakeCapableWakeInterruptArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_ST.c)
 *     ?PowerPolWaitingArmedWakeInterruptFired@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00884C0 (-PowerPolWaitingArmedWakeInterruptFired@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C001029C (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C007DF24 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 */

char __fastcall FxPkgPnp::PowerPolicyCancelWaitWake(FxPkgPnp *this)
{
  char v2; // di
  _IRP *_a1; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 FxVerboseOn; // al
  BOOLEAN v6; // al
  _FX_DRIVER_GLOBALS *v7; // rcx
  FxIrp irp; // [rsp+50h] [rbp+8h] BYREF

  if ( this->m_SharedPower.m_WaitWakeOwner )
    return FxPkgPnp::PowerIndicateWaitWakeStatus(this, -1073741536);
  _a1 = (_IRP *)_InterlockedExchange64((volatile __int64 *)&this->m_SharedPower, 0LL);
  m_Globals = this->m_Globals;
  FxVerboseOn = m_Globals->FxVerboseOn;
  if ( _a1 )
  {
    irp.m_Irp = _a1;
    if ( FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x2Cu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
    v6 = IoCancelIrp(_a1);
    v7 = this->m_Globals;
    if ( v7->FxVerboseOn )
      WPP_IFR_SF_qL(v7, 5u, 0xCu, 0x2Du, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, v6);
    v2 = 1;
    if ( _InterlockedExchange(&this->m_PowerPolicyMachine.m_Owner->m_WaitWakeCancelCompletionOwnership, 1) == 1 )
      FxPkgPnp::CompletePowerRequest(this, &irp, _a1->IoStatus.Status);
  }
  else
  {
    if ( FxVerboseOn )
      WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x2Eu, WPP_PowerPolicyStateMachine_cpp_Traceguids);
    return 0;
  }
  return v2;
}

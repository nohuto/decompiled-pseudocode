/*
 * XREFs of ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C000E174
 * Callers:
 *     ?PowerPolTimerExpiredNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000E120 (-PowerPolTimerExpiredNoWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapablePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087DE0 (-PowerPolTimerExpiredWakeCapablePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000EA4C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C00107D8 (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1C001C9C0 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 *     WPP_IFR_SF_qid @ 0x1C002FD7C (WPP_IFR_SF_qid.c)
 */

char __fastcall FxPkgPnp::PowerPolicyCanIdlePowerDown(FxPkgPnp *this, _FX_DRIVER_GLOBALS *DxState)
{
  _DEVICE_POWER_STATE v3; // esi
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  char v6; // bl
  FxEnumerationInfo *v7; // rcx
  const void *_a1; // rax
  __int64 v10; // r8
  int _a3; // r10d

  v3 = (int)DxState;
  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxWaitLockInternal::AcquireLock(&m_EnumInfo->m_PowerStateLock, DxState, 0LL);
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    if ( m_Owner->m_ChildrenPoweredOnCount )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qid(
        this->m_Globals,
        4u,
        0xCu,
        0x34u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        _a1,
        *(_QWORD *)(v10 + 144),
        _a3);
      v6 = 0;
    }
    else
    {
      m_Owner->m_ChildrenCanPowerUp = 0;
      v6 = 1;
    }
    v7 = this->m_EnumInfo;
    v7->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&v7->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = 1;
  }
  if ( v6 && FxPkgPnp::PowerPolicySendDevicePowerRequest(this, v3, NoRetry, RequestDxForIdleOut) < 0 )
  {
    FxPkgPnp::PowerPolicyChildrenCanPowerUp(this);
    return 0;
  }
  return v6;
}

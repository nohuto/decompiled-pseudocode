/*
 * XREFs of ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C00201F0
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C0020104 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C001CD74 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     memset @ 0x1C0036C00 (memset.c)
 */

__int64 __fastcall FxPoxInterface::PoxRegisterDevice(FxPoxInterface *this)
{
  FxPkgPnp *m_PkgPnp; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  unsigned int v5; // r10d
  _POX_SETTINGS *v6; // r9
  _GUID *p_Id; // rax
  int _a3; // ebx
  const void *_a1; // rax
  __int64 v11; // rdx
  __int64 v12; // r10
  _PO_FX_DEVICE_V3 poxDevice; // [rsp+40h] [rbp-69h] BYREF
  _PO_FX_COMPONENT_IDLE_STATE idleState; // [rsp+E0h] [rbp+37h] BYREF

  memset(&poxDevice, 0, sizeof(poxDevice));
  m_PkgPnp = this->m_PkgPnp;
  poxDevice.Version = 3;
  poxDevice.ComponentIdleStateCallback = (void (__fastcall *)(void *, unsigned int, unsigned int))FxPoxInterface::StateCallback;
  poxDevice.ComponentActiveConditionCallback = (void (__fastcall *)(void *, unsigned int))FxPoxInterface::ComponentActiveCallback;
  poxDevice.ComponentIdleConditionCallback = (void (__fastcall *)(void *, unsigned int))FxPoxInterface::ComponentIdleCallback;
  poxDevice.DevicePowerRequiredCallback = FxPoxInterface::PowerRequiredCallback;
  poxDevice.DevicePowerNotRequiredCallback = FxPoxInterface::PowerNotRequiredCallback;
  memset(&idleState, 0, sizeof(idleState));
  poxDevice.DeviceContext = this;
  m_Owner = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported )
  {
    poxDevice.DirectedPowerUpCallback = FxPoxInterface::DirectedPowerUpCallback;
    poxDevice.DirectedPowerDownCallback = FxPoxInterface::DirectedPowerDownCallback;
    m_Owner = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  }
  poxDevice.Flags = m_Owner->m_IdleSettings.m_TimeoutMgmt.m_PoFxDeviceFlags;
  poxDevice.ComponentCount = 1;
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(this);
  v6 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings && PowerFrameworkSettings->PowerControlCallback )
  {
    poxDevice.PowerControlCallback = FxPoxInterface::PowerControlCallback;
  }
  else
  {
    poxDevice.PowerControlCallback = 0LL;
    if ( !PowerFrameworkSettings )
    {
LABEL_7:
      idleState.NominalPower = -1;
      poxDevice.Components[0].IdleStates = &idleState;
      poxDevice.Components[0].IdleStateCount = v5;
      goto LABEL_8;
    }
  }
  p_Id = &PowerFrameworkSettings->Component->Id;
  if ( !p_Id )
    goto LABEL_7;
  poxDevice.Components[0].Id = *p_Id;
  poxDevice.Components[0].IdleStateCount = v6->Component->IdleStateCount;
  poxDevice.Components[0].DeepestWakeableIdleState = v6->Component->DeepestWakeableIdleState;
  poxDevice.Components[0].IdleStates = v6->Component->IdleStates;
LABEL_8:
  _a3 = PoFxRegisterDevice(
          this->m_PkgPnp->m_DeviceBase->m_PhysicalDevice.m_DeviceObject,
          &poxDevice,
          &this->m_PoHandle,
          v6);
  if ( _a3 < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qqd(
      *(_FX_DRIVER_GLOBALS **)(v12 + 16),
      2u,
      0xCu,
      0x12u,
      WPP_PoxInterfaceKm_cpp_Traceguids,
      _a1,
      *(const void **)(v11 + 144),
      _a3);
  }
  else
  {
    return 0;
  }
  return (unsigned int)_a3;
}

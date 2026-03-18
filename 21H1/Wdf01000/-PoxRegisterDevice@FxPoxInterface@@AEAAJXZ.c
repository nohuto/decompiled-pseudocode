/*
 * XREFs of ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C008D1A8
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C008CA14 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C008C9DC (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 */

__int64 __fastcall FxPoxInterface::PoxRegisterDevice(FxPoxInterface *this)
{
  FxPkgPnp *m_PkgPnp; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  unsigned __int64 Flags; // rcx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  unsigned int v6; // r10d
  _POX_SETTINGS *v7; // r9
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
  poxDevice.ComponentIdleStateCallback = FxPoxInterface::StateCallback;
  poxDevice.ComponentActiveConditionCallback = (void (__fastcall *)(void *, unsigned int))FxPoxInterface::ComponentActiveCallback;
  poxDevice.ComponentIdleConditionCallback = (void (__fastcall *)(void *, unsigned int))FxPoxInterface::ComponentIdleCallback;
  poxDevice.DevicePowerRequiredCallback = (void (__fastcall *)(void *))FxPoxInterface::PowerRequiredCallback;
  poxDevice.DevicePowerNotRequiredCallback = (void (__fastcall *)(void *))FxPoxInterface::PowerNotRequiredCallback;
  memset(&idleState, 0, sizeof(idleState));
  poxDevice.DeviceContext = this;
  if ( m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported )
  {
    poxDevice.DirectedPowerUpCallback = (void (__fastcall *)(void *, unsigned int))FxPoxInterface::DirectedPowerUpCallback;
    poxDevice.DirectedPowerDownCallback = (void (__fastcall *)(void *, unsigned int))FxPoxInterface::DirectedPowerDownCallback;
    m_Owner = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    Flags = poxDevice.Flags;
    if ( m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsChildrenOptional )
      Flags = 6LL;
    poxDevice.Flags = Flags;
  }
  poxDevice.ComponentCount = 1;
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(this);
  v7 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings && PowerFrameworkSettings->PowerControlCallback )
    poxDevice.PowerControlCallback = (int (__fastcall *)(void *, const _GUID *, void *, unsigned __int64, void *, unsigned __int64, unsigned __int64 *))FxPoxInterface::PowerControlCallback;
  else
    poxDevice.PowerControlCallback = 0LL;
  if ( PowerFrameworkSettings && (p_Id = &PowerFrameworkSettings->Component->Id) != 0LL )
  {
    poxDevice.Components[0].Id = *p_Id;
    poxDevice.Components[0].IdleStateCount = v7->Component->IdleStateCount;
    poxDevice.Components[0].DeepestWakeableIdleState = v7->Component->DeepestWakeableIdleState;
    poxDevice.Components[0].IdleStates = v7->Component->IdleStates;
  }
  else
  {
    idleState.NominalPower = -1;
    poxDevice.Components[0].IdleStates = &idleState;
    poxDevice.Components[0].IdleStateCount = v6;
  }
  _a3 = PoFxRegisterDevice(this->m_PkgPnp->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, &poxDevice, &this->m_PoHandle);
  if ( _a3 >= 0 )
  {
    return 0;
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qid(
      *(_FX_DRIVER_GLOBALS **)(v12 + 16),
      2u,
      0xCu,
      0x12u,
      WPP_PoxInterfaceKm_cpp_Traceguids,
      _a1,
      *(_QWORD *)(v11 + 144),
      _a3);
  }
  return (unsigned int)_a3;
}

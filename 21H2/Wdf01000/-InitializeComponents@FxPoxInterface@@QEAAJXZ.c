/*
 * XREFs of ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C0020104
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C001FF10 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0012F54 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C001CD74 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C00201F0 (-PoxRegisterDevice@FxPoxInterface@@AEAAJXZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C0020408 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPoxInterface::InitializeComponents(FxPoxInterface *this)
{
  int _a3; // edi
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v5; // rsi
  unsigned __int64 v6; // rbp
  __int64 (__fastcall *v7)(unsigned __int64, POHANDLE__ *); // r8
  const void *_a1; // rax
  __int64 v9; // r8
  __int64 v10; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v12; // rdx
  __int64 v13; // r10
  void (__fastcall *EvtDeviceWdmPrePoFxUnregisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // rax

  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) == 0 )
    return 0LL;
  if ( this->m_DevicePowerRequirementMachine
    || (_a3 = FxPoxInterface::CreateDevicePowerRequirementMachine(this), _a3 >= 0) )
  {
    _a3 = FxPoxInterface::PoxRegisterDevice(this);
    if ( _a3 < 0 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
      WPP_IFR_SF_qqd(
        *(_FX_DRIVER_GLOBALS **)(v10 + 16),
        2u,
        0xCu,
        0xDu,
        WPP_PoxInterface_cpp_Traceguids,
        _a1,
        *(const void **)(v9 + 144),
        _a3);
    }
    else
    {
      PoFxActivateComponent(this->m_PoHandle, 0LL, 0LL);
      PoFxStartDevicePowerManagement(this->m_PoHandle);
      PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(this);
      v5 = PowerFrameworkSettings;
      if ( PowerFrameworkSettings
        && PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice
        && (v6 = FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase),
            _a3 = v7(v6, this->m_PoHandle),
            _a3 < 0) )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
        WPP_IFR_SF_qqd(
          *(_FX_DRIVER_GLOBALS **)(v13 + 16),
          2u,
          0xCu,
          0xEu,
          WPP_PoxInterface_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(const void **)(v12 + 144),
          _a3);
        EvtDeviceWdmPrePoFxUnregisterDevice = v5->EvtDeviceWdmPrePoFxUnregisterDevice;
        if ( EvtDeviceWdmPrePoFxUnregisterDevice )
          EvtDeviceWdmPrePoFxUnregisterDevice((WDFDEVICE__ *)v6, this->m_PoHandle);
        PoFxUnregisterDevice(this->m_PoHandle);
      }
      else
      {
        FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventRegisteredWithPox);
      }
    }
  }
  return (unsigned int)_a3;
}

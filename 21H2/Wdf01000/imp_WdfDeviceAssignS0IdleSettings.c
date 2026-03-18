/*
 * XREFs of imp_WdfDeviceAssignS0IdleSettings @ 0x1C001B9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C001BAE0 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceAssignS0IdleSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings)
{
  unsigned __int8 v5; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxPkgPnp *m_PkgPnp; // r8
  unsigned int Size; // ecx
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps; // edx
  _WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake; // eax
  unsigned __int16 v12; // r9
  unsigned int _a2; // ebx
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Settings )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    Size = Settings->Size;
    if ( ((Settings->Size - 24) & 0xFFFFFFF3) != 0 || Size == 32 )
    {
      _a2 = -1073741820;
      WPP_IFR_SF_DDd(m_Globals, v5, 0x12u, 0xCu, WPP_FxDeviceApi_cpp_Traceguids, 36, Size, -1073741820);
      return _a2;
    }
    if ( (unsigned int)(Settings->DxState - 2) > 3
      || (IdleCaps = Settings->IdleCaps, (unsigned int)(IdleCaps - 1) > 2)
      || (unsigned int)(Settings->UserControlOfIdleSettings - 1) > 1
      || Settings->Enabled > (unsigned int)WdfUseDefault )
    {
      v15 = 13;
      goto LABEL_22;
    }
    if ( Size > 0x18 )
    {
      PowerUpIdleDeviceOnSystemWake = Settings->PowerUpIdleDeviceOnSystemWake;
      if ( (unsigned int)PowerUpIdleDeviceOnSystemWake > WdfUseDefault )
      {
        v15 = 14;
        goto LABEL_22;
      }
      if ( PowerUpIdleDeviceOnSystemWake != WdfUseDefault && IdleCaps != IdleCannotWakeFromS0 )
      {
        v15 = 15;
LABEL_22:
        _a2 = -1073741811;
        WPP_IFR_SF_d(m_Globals, 2u, 0x12u, v15, WPP_FxDeviceApi_cpp_Traceguids, -1073741811);
        return _a2;
      }
    }
    if ( Size <= 0x1C || Settings->IdleTimeoutType <= SystemManagedIdleTimeoutWithHint )
      return FxPkgPnp::PowerPolicySetS0IdleSettings(m_PkgPnp, Settings);
    v12 = 16;
    _a2 = -1073741811;
    v14 = 18;
  }
  else
  {
    v12 = 11;
    _a2 = -1073741808;
    v14 = 12;
  }
  WPP_IFR_SF_qL(m_Globals, 2u, v14, v12, WPP_FxDeviceApi_cpp_Traceguids, Device, _a2);
  return _a2;
}

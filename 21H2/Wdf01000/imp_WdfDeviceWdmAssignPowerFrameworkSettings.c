/*
 * XREFs of imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x1C001D590
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C001D84C (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C0053A68 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

unsigned int __fastcall imp_WdfDeviceWdmAssignPowerFrameworkSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  unsigned __int8 v6; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxPkgPnp *m_PkgPnp; // r14
  unsigned int _a4; // esi
  _PO_FX_COMPONENT_V1 *Component; // rax
  unsigned int v12; // ebx
  unsigned __int16 v13; // r9
  _WDF_POWER_FRAMEWORK_SETTINGS pofxSettings; // [rsp+50h] [rbp-88h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]
  FxDevice *pDevice; // [rsp+E0h] [rbp+8h] BYREF

  pDevice = 0LL;
  memset(&pofxSettings, 0, sizeof(pofxSettings));
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !PowerFrameworkSettings )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( !m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    v12 = -1073741808;
    v13 = 70;
LABEL_19:
    WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, v13, WPP_FxDeviceApi_cpp_Traceguids, Device, v12);
    goto LABEL_20;
  }
  _a4 = PowerFrameworkSettings->Size;
  if ( PowerFrameworkSettings->Size == 88 )
  {
LABEL_8:
    Component = PowerFrameworkSettings->Component;
    if ( !Component )
      return FxPkgPnp::AssignPowerFrameworkSettings(m_PkgPnp, PowerFrameworkSettings);
    if ( Component->IdleStateCount )
    {
      if ( Component->IdleStates )
        return FxPkgPnp::AssignPowerFrameworkSettings(m_PkgPnp, PowerFrameworkSettings);
      v13 = 74;
    }
    else
    {
      v13 = 73;
    }
    v12 = -1073741811;
    goto LABEL_19;
  }
  if ( _a4 == 72 )
  {
    memset(&pofxSettings, 0, sizeof(pofxSettings));
    memmove(&pofxSettings, PowerFrameworkSettings, 0x48uLL);
    pofxSettings.PoFxDeviceFlags = 0LL;
    pofxSettings.DirectedPoFxEnabled = WdfFalse;
    pofxSettings.Size = 88;
    if ( FxLibraryGlobals.WdfDirectedPowerTransitionEnabled
      || *(_DWORD *)(*(_QWORD *)&DriverGlobals[-3].DriverName[8] + 20LL) >= 0x1Fu )
    {
      pofxSettings.DirectedPoFxEnabled = WdfTrue;
    }
    PowerFrameworkSettings = &pofxSettings;
    goto LABEL_8;
  }
  v12 = -1073741820;
  WPP_IFR_SF_qddd(pDevice->m_Globals, v6, 0x12u, 0x47u, WPP_FxDeviceApi_cpp_Traceguids, Device, 88, _a4, -1073741820);
LABEL_20:
  FxVerifierDbgBreakPoint(m_Globals);
  return v12;
}

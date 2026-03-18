/*
 * XREFs of ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C001D84C
 * Callers:
 *     imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x1C001D590 (imp_WdfDeviceWdmAssignPowerFrameworkSettings.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C001DC5C (-CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTI.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 */

__int64 __fastcall FxPkgPnp::AssignPowerFrameworkSettings(
        FxPkgPnp *this,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  unsigned int v2; // ebx
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  _PO_FX_COMPONENT_V1 *Component; // rax
  __int64 Pool2; // rax
  _PO_FX_COMPONENT_IDLE_STATE *v9; // r15
  _POX_SETTINGS *v10; // r14
  FxPowerPolicyOwnerSettings *m_Owner; // rbp
  int v12; // edi
  _PO_FX_COMPONENT_V1 *v14; // rcx
  _PO_FX_COMPONENT_V1 *v15; // rax
  const void *_a1; // rax
  __int64 v17; // r8
  const void *v18; // rax
  __int64 v19; // r8
  int v20; // r10d
  unsigned __int16 v21; // r9
  const void *ObjectHandleUnchecked; // rax
  __int64 v23; // rdx
  int v24; // r10d
  int _a3; // [rsp+38h] [rbp-20h]

  v2 = 0;
  LODWORD(v5) = 0;
  v6 = 0LL;
  if ( FxLibraryGlobals.PoxRegisterDevice )
  {
    Component = PowerFrameworkSettings->Component;
    if ( !Component )
    {
LABEL_3:
      if ( (int)v6 + 64 < (unsigned int)v6 )
      {
        v2 = -1073741675;
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqd(
          this->m_Globals,
          2u,
          0xCu,
          0x56u,
          (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(const void **)(v23 + 144),
          v24);
        return v2;
      }
      Pool2 = ExAllocatePool2(64LL, (unsigned int)(v6 + 64), this->m_Globals->Tag);
      v9 = (_PO_FX_COMPONENT_IDLE_STATE *)Pool2;
      if ( Pool2 )
      {
        v10 = (_POX_SETTINGS *)(Pool2 + v6);
        v10->EvtDeviceWdmPostPoFxRegisterDevice = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice;
        v10->EvtDeviceWdmPrePoFxUnregisterDevice = PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
        v10->Component = PowerFrameworkSettings->Component;
        v10->ComponentActiveConditionCallback = PowerFrameworkSettings->ComponentActiveConditionCallback;
        v10->ComponentIdleConditionCallback = PowerFrameworkSettings->ComponentIdleConditionCallback;
        v10->ComponentIdleStateCallback = PowerFrameworkSettings->ComponentIdleStateCallback;
        v10->PowerControlCallback = PowerFrameworkSettings->PowerControlCallback;
        v10->PoFxDeviceContext = PowerFrameworkSettings->PoFxDeviceContext;
        if ( PowerFrameworkSettings->Component )
        {
          v14 = (_PO_FX_COMPONENT_V1 *)((unsigned int)v5 + Pool2);
          v10->Component = v14;
          v15 = PowerFrameworkSettings->Component;
          v14->Id = v15->Id;
          *(_OWORD *)&v14->IdleStateCount = *(_OWORD *)&v15->IdleStateCount;
          v10->Component->IdleStates = v9;
          memmove(v10->Component->IdleStates, PowerFrameworkSettings->Component->IdleStates, (unsigned int)v5);
        }
        m_Owner = this->m_PowerPolicyMachine.m_Owner;
        v12 = IdleTimeoutManagement::CommitPowerFrameworkSettings(
                &m_Owner->m_IdleSettings.m_TimeoutMgmt,
                this->m_Globals,
                v10);
        if ( v12 < 0 )
        {
          ExFreePoolWithTag(v9, 0);
          return (unsigned int)v12;
        }
        else
        {
          m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported = PowerFrameworkSettings->DirectedPoFxEnabled != WdfFalse;
          m_Owner->m_IdleSettings.m_TimeoutMgmt.m_PoFxDeviceFlags = PowerFrameworkSettings->PoFxDeviceFlags;
        }
        return v2;
      }
      v2 = -1073741670;
      v18 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v21 = 87;
      _a3 = -1073741670;
LABEL_17:
      WPP_IFR_SF_qqd(
        this->m_Globals,
        2u,
        0xCu,
        v21,
        (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
        v18,
        *(const void **)(v19 + 144),
        _a3);
      return v2;
    }
    v5 = 24LL * Component->IdleStateCount;
    if ( v5 > 0xFFFFFFFF )
    {
      v2 = -1073741675;
      v18 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v21 = 84;
    }
    else
    {
      v6 = (unsigned int)(v5 + 32);
      if ( (unsigned int)v6 >= (unsigned int)v5 )
        goto LABEL_3;
      v2 = -1073741675;
      v18 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v21 = 85;
    }
    _a3 = v20;
    goto LABEL_17;
  }
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_qq(
    this->m_Globals,
    4u,
    0xCu,
    0x53u,
    (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
    _a1,
    *(const void **)(v17 + 144));
  return 0LL;
}

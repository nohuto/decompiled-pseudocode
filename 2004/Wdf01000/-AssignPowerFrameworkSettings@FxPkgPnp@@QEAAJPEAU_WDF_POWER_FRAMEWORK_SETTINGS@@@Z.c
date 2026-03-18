/*
 * XREFs of ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C007F810
 * Callers:
 *     imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x1C00493E0 (imp_WdfDeviceWdmAssignPowerFrameworkSettings.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     memmove @ 0x1C001D440 (memmove.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 *     ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C00863A4 (-CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTI.c)
 */

__int64 __fastcall FxPkgPnp::AssignPowerFrameworkSettings(
        FxPkgPnp *this,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  _PO_FX_COMPONENT_IDLE_STATE *v6; // r14
  const void *_a1; // rax
  __int64 v8; // r8
  _PO_FX_COMPONENT_V1 *Component; // rax
  int v11; // ebx
  const void *ObjectHandleUnchecked; // rax
  __int64 v13; // r8
  int v14; // r10d
  unsigned __int16 v15; // r9
  SIZE_T v16; // rdx
  _PO_FX_COMPONENT_IDLE_STATE *PoolWithTag; // rax
  const void *v18; // rax
  __int64 v19; // rdx
  unsigned __int16 v20; // r9
  _POX_SETTINGS *v21; // rsi
  _PO_FX_COMPONENT_V1 *v22; // rcx
  _PO_FX_COMPONENT_V1 *v23; // rax
  int v24; // r10d
  int _a3; // [rsp+38h] [rbp-20h]

  LODWORD(v4) = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( !FxLibraryGlobals.PoxRegisterDevice )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qq(
      this->m_Globals,
      4u,
      0xCu,
      0x53u,
      (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      _a1,
      *(const void **)(v8 + 144));
    return 0LL;
  }
  Component = PowerFrameworkSettings->Component;
  if ( Component )
  {
    v4 = 24LL * Component->IdleStateCount;
    if ( v4 > 0xFFFFFFFF )
    {
      v11 = -1073741675;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v15 = 84;
      goto LABEL_7;
    }
    v5 = (unsigned int)(v4 + 32);
    if ( (unsigned int)v5 < (unsigned int)v4 )
    {
      v11 = -1073741675;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v15 = 85;
LABEL_7:
      WPP_IFR_SF_qid(
        this->m_Globals,
        2u,
        0xCu,
        v15,
        (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(_QWORD *)(v13 + 144),
        v14);
      goto LABEL_20;
    }
  }
  v16 = (unsigned int)(v5 + 64);
  if ( (unsigned int)v16 < (unsigned int)v5 )
  {
    v11 = -1073741675;
    v18 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v20 = 86;
    _a3 = v24;
  }
  else
  {
    PoolWithTag = (_PO_FX_COMPONENT_IDLE_STATE *)ExAllocatePoolWithTag(
                                                   ExDefaultNonPagedPoolType,
                                                   v16,
                                                   this->m_Globals->Tag);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      v21 = (_POX_SETTINGS *)((char *)PoolWithTag + v5);
      v21->EvtDeviceWdmPostPoFxRegisterDevice = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice;
      v21->EvtDeviceWdmPrePoFxUnregisterDevice = PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
      v21->Component = PowerFrameworkSettings->Component;
      v21->ComponentActiveConditionCallback = PowerFrameworkSettings->ComponentActiveConditionCallback;
      v21->ComponentIdleConditionCallback = PowerFrameworkSettings->ComponentIdleConditionCallback;
      v21->ComponentIdleStateCallback = PowerFrameworkSettings->ComponentIdleStateCallback;
      v21->PowerControlCallback = PowerFrameworkSettings->PowerControlCallback;
      v21->PoFxDeviceContext = PowerFrameworkSettings->PoFxDeviceContext;
      if ( PowerFrameworkSettings->Component )
      {
        v22 = (_PO_FX_COMPONENT_V1 *)((char *)PoolWithTag + (unsigned int)v4);
        v21->Component = v22;
        v23 = PowerFrameworkSettings->Component;
        v22->Id = v23->Id;
        *(_OWORD *)&v22->IdleStateCount = *(_OWORD *)&v23->IdleStateCount;
        v21->Component->IdleStates = v6;
        memmove(v21->Component->IdleStates, PowerFrameworkSettings->Component->IdleStates, (unsigned int)v4);
      }
      v11 = IdleTimeoutManagement::CommitPowerFrameworkSettings(
              &this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt,
              this->m_Globals,
              v21);
      if ( v11 >= 0 )
        v11 = 0;
      if ( v11 >= 0 )
        return (unsigned int)v11;
      goto LABEL_20;
    }
    v11 = -1073741670;
    v18 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v20 = 87;
    _a3 = -1073741670;
  }
  WPP_IFR_SF_qid(
    this->m_Globals,
    2u,
    0xCu,
    v20,
    (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
    v18,
    *(_QWORD *)(v19 + 144),
    _a3);
LABEL_20:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v11;
}

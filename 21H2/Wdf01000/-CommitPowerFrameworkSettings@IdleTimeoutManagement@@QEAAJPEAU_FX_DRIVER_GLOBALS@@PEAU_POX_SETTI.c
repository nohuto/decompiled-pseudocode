/*
 * XREFs of ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C001DC5C
 * Callers:
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C001D84C (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C001DCB8 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall IdleTimeoutManagement::CommitPowerFrameworkSettings(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _POX_SETTINGS *PoxSettings)
{
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // r10
  IdleTimeoutManagement::IdleTimeoutStatusUpdateResult updated; // edx
  FxObject *v7; // r10
  unsigned int v8; // ebx
  const void *_a1; // rax
  __int64 v11; // r10
  int _a3; // r8d
  __int32 v13; // edx
  __int32 v14; // edx
  const void *ObjectHandleUnchecked; // rax
  int v16; // r8d
  __int64 v17; // r10
  __int16 v18; // dx
  unsigned __int16 v19; // r9

  ComponentIdleConditionCallback = this[-2].m_PoxSettings[1].ComponentIdleConditionCallback;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PoxSettings, (signed __int64)PoxSettings, 0LL) )
  {
    v8 = -1073741808;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)ComponentIdleConditionCallback);
    WPP_IFR_SF_qqd(
      DriverGlobals,
      2u,
      0xCu,
      0xEu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v11 + 144),
      _a3);
    FxVerifierDbgBreakPoint(DriverGlobals);
    return v8;
  }
  updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutPoxSettingsSpecified);
  if ( updated )
  {
    v13 = updated - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        v8 = -1073741808;
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v7);
        v19 = 15;
        goto LABEL_11;
      }
      if ( v14 == 1 )
      {
        v8 = -1073741808;
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v7);
        v19 = v18 + 15;
LABEL_11:
        WPP_IFR_SF_qqd(
          DriverGlobals,
          2u,
          0xCu,
          v19,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(const void **)(v17 + 144),
          v16);
        FxVerifierDbgBreakPoint(DriverGlobals);
LABEL_13:
        this->m_PoxSettings = 0LL;
        return v8;
      }
    }
    v8 = -1073741595;
    goto LABEL_13;
  }
  return 0;
}

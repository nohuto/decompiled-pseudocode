/*
 * XREFs of ?FreezeIdleTimeoutManagementStatus@IdleTimeoutManagement@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00864B0
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087370 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall IdleTimeoutManagement::FreezeIdleTimeoutManagementStatus(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  volatile int m_IdleTimeoutStatus; // r8d
  int v4; // ebx
  FxObject *v5; // rsi
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax

  m_IdleTimeoutStatus = this->m_IdleTimeoutStatus;
  v4 = this->m_IdleTimeoutStatus | 1;
  v5 = *(FxObject **)(*(_QWORD *)&this[-3].m_IdleTimeoutStatus + 96LL);
  if ( _InterlockedExchange(&this->m_IdleTimeoutStatus, v4) != m_IdleTimeoutStatus )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v5);
    WPP_IFR_SF_qq(
      DriverGlobals,
      3u,
      0xCu,
      0xCu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      v5[1].m_ChildListHead.Blink);
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
  if ( (v4 & 4) != 0 && FxLibraryGlobals.PoxRegisterDevice && (v4 & 2) == 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v5);
    WPP_IFR_SF_qq(
      DriverGlobals,
      3u,
      0xCu,
      0xDu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      ObjectHandleUnchecked,
      v5[1].m_ChildListHead.Blink);
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
}

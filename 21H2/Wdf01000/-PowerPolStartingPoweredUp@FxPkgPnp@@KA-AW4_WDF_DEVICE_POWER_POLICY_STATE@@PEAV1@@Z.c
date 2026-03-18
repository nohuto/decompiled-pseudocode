/*
 * XREFs of ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C001FF10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C001FFCC (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C0020104 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingPoweredUp(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  volatile int m_IdleTimeoutStatus; // edx
  char v5; // bl
  FxObject *m_DeviceBase; // rbp
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  m_Globals = This->m_Globals;
  m_IdleTimeoutStatus = m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus;
  v5 = m_IdleTimeoutStatus | 1;
  m_DeviceBase = m_Owner->m_PkgPnp->m_DeviceBase;
  if ( _InterlockedExchange(&m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus, m_IdleTimeoutStatus | 1) != m_IdleTimeoutStatus )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
    WPP_IFR_SF_qq(
      m_Globals,
      3u,
      0xCu,
      0xCu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      m_DeviceBase[1].m_ChildListHead.Blink);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  if ( (v5 & 4) != 0 && FxLibraryGlobals.PoxRegisterDevice && (v5 & 2) == 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
    WPP_IFR_SF_qq(
      m_Globals,
      3u,
      0xCu,
      0xDu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      ObjectHandleUnchecked,
      m_DeviceBase[1].m_ChildListHead.Blink);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  if ( FxPoxInterface::InitializeComponents(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface) < 0 )
    return 1425LL;
  FxPkgPnp::SleepStudyEvaluateParticipation(This);
  return 1282LL;
}

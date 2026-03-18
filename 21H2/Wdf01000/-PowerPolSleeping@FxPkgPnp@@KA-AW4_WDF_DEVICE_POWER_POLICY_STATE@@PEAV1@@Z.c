/*
 * XREFs of ?PowerPolSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C000CD7C (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1C000CE74 (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 *     ?SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ @ 0x1C000CF08 (-SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?FxVerifierBreakOnDeviceStateError@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008A868 (-FxVerifierBreakOnDeviceStateError@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleeping(FxPkgPnp *This)
{
  __int64 result; // rax
  unsigned int m_SystemWake; // eax
  unsigned int v4; // edx
  bool v5; // cf
  bool v6; // zf
  const void *_a1; // rax

  if ( !This->m_SpecialFileCount[1] && This->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    WPP_IFR_SF_q(This->m_Globals, 2u, 0xCu, 0x1Fu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
    FxVerifierBreakOnDeviceStateError(This->m_DeviceBase->m_Globals);
  }
  FxPoxInterface::SimulateDevicePowerNotRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::NotifyDevicePowerDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  if ( !FxPkgPnp::PowerPolicyIsWakeEnabled(This) )
    return 1319LL;
  m_SystemWake = This->m_SystemWake;
  v4 = (This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF;
  v5 = v4 < m_SystemWake;
  v6 = v4 == m_SystemWake;
  result = 1322LL;
  if ( !v5 && !v6 )
    return 1319LL;
  return result;
}

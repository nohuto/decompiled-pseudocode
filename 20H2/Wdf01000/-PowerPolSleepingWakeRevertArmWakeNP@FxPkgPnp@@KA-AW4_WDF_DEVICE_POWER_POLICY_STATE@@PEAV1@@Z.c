/*
 * XREFs of ?PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C0087FA0 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeRevertArmWakeNP(FxPkgPnp *This)
{
  WPP_IFR_SF_(This->m_Globals, 2u, 0xCu, 0x1Eu, WPP_PowerPolicyStateMachine_cpp_Traceguids);
  FxPkgPnp::PowerPolicyDisarmWakeFromSx(This);
  return 34237LL;
}

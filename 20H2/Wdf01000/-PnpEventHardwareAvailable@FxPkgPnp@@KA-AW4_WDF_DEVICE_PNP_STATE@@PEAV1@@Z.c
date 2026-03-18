/*
 * XREFs of ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0079DD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011B20 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C007B148 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C00818D4 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     ?CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ @ 0x1C008A740 (-CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventHardwareAvailable(FxPkgPnp *This)
{
  FxPkgPnp_vtbl *v1; // rax
  unsigned __int8 v3; // r8
  int _a1; // eax
  int v6; // edi
  unsigned __int8 matched; // [rsp+40h] [rbp+8h] BYREF
  FxCxCallbackProgress progress; // [rsp+48h] [rbp+10h] BYREF

  v1 = This->__vftable;
  progress = FxCxCallbackProgressInitialized;
  matched = 0;
  if ( v1->QueryForReenumerationInterface(This) < 0 || FxPkgPnp::CreatePowerThreadIfNeeded(This) < 0 )
    return 303LL;
  if ( FxPkgPnp::PnpPrepareHardware(This, &matched, &progress) < 0 )
  {
    if ( matched && progress )
      return 298LL;
    return 303LL;
  }
  if ( This->m_PowerPolicyMachine.m_Owner )
  {
    _a1 = FxPkgPnp::QueryForCapabilities(This);
    v6 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0xFu, WPP_PnpStateMachine_cpp_Traceguids, _a1);
      This->m_PendingPnPIrp->IoStatus.Status = v6;
      return 298LL;
    }
    This->m_CapsQueried = 1;
  }
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolStart, v3);
  return 314LL;
}

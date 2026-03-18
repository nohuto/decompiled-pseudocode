/*
 * XREFs of ?DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000CC5C
 * Callers:
 *     ?_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000CC30 (-_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000CCC0 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C000CD7C (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C000CDE4 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C000CFA0 (-PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 */

int __fastcall FxPkgFdo::DispatchSystemQueryPower(FxPkgFdo *this, FxIrp *Irp)
{
  int Power; // eax

  if ( FxPkgPnp::PowerPolicyIsWakeEnabled(this)
    && (Power = FxPkgPnp::PowerPolicyHandleSystemQueryPower(
                  this,
                  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Power.State.SystemState),
        Irp->m_Irp->IoStatus.Status = Power,
        Power < 0) )
  {
    return FxPkgPnp::CompletePowerRequest(this, Irp, Power);
  }
  else
  {
    return FxPkgFdo::_PowerPassDown(this, Irp);
  }
}

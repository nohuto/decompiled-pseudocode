/*
 * XREFs of ?_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0010370
 * Callers:
 *     <none>
 * Callees:
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0010430 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C00104EC (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C001057C (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C0081D90 (-PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 */

int __fastcall FxPkgFdo::_DispatchQueryPower(FxPkgPnp *This, FxIrp *Irp)
{
  FxIrp *v2; // rdi
  FxPkgPnp *v3; // rbx
  __int64 v4; // r8
  int Power; // eax

  v2 = Irp;
  v3 = This;
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options )
  {
    Irp->m_Irp->IoStatus.Status = 0;
    return FxPkgFdo::_PowerPassDown(This, Irp);
  }
  if ( !FxPkgPnp::PowerPolicyIsWakeEnabled(This)
    || (Power = FxPkgPnp::PowerPolicyHandleSystemQueryPower(v3, *(_SYSTEM_POWER_STATE *)(v4 + 24)),
        v2->m_Irp->IoStatus.Status = Power,
        Power >= 0) )
  {
    Irp = v2;
    This = v3;
    return FxPkgFdo::_PowerPassDown(This, Irp);
  }
  return FxPkgPnp::CompletePowerRequest(v3, v2, Power);
}

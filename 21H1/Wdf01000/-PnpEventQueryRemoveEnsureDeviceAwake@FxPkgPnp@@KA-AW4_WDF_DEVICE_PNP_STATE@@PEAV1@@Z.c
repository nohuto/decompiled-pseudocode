/*
 * XREFs of ?PnpEventQueryRemoveEnsureDeviceAwake@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007AB00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1C0081A60 (-PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventQueryRemoveEnsureDeviceAwake(FxPkgPnp *This)
{
  int _a2; // ebx
  const void *_a1; // rax

  _a2 = FxPkgPnp::PnpPowerReferenceDuringQueryPnp(This);
  if ( _a2 == 259 )
    return 314LL;
  if ( _a2 >= 0 )
    return 268LL;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, 0x12u, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2);
  This->m_PendingPnPIrp->IoStatus.Status = _a2;
  return 281LL;
}

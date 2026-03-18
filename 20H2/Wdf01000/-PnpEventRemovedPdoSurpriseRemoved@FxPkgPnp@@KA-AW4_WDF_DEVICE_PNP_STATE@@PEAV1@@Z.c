/*
 * XREFs of ?PnpEventRemovedPdoSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A720
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0010BF4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C007AB4C (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventRemovedPdoSurpriseRemoved(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v3; // rdx
  unsigned __int8 v4; // dl

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_QWORD *)(v3 + 32) = ObjectHandleUnchecked;
  FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v3);
  This->PnpEventSurpriseRemovePendingOverload(This);
  FxPkgPnp::PnpFinishProcessingIrp(This, v4);
  return 277LL;
}

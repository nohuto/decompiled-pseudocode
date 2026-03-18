/*
 * XREFs of ?PnpEventSurpriseRemoveIoStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084B20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C000D528 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventSurpriseRemoveIoStarted(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v3; // rdx

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_QWORD *)(v3 + 32) = ObjectHandleUnchecked;
  FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v3);
  This->PnpEventSurpriseRemovePendingOverload(This);
  return 297LL;
}

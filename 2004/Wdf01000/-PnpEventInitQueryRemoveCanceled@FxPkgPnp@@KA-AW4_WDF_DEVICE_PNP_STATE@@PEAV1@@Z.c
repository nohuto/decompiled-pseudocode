/*
 * XREFs of ?PnpEventInitQueryRemoveCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A7F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventInitQueryRemoveCanceled(FxPkgPnp *This)
{
  _IRP *m_PendingPnPIrp; // rax
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  m_PendingPnPIrp = This->m_PendingPnPIrp;
  This->m_PendingPnPIrp = 0LL;
  irp.m_Irp = m_PendingPnPIrp;
  This->FireAndForgetIrp(This, &irp);
  return 261LL;
}

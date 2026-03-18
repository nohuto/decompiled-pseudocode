/*
 * XREFs of ?_PnpSetLock@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00792A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0004B54 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPdo::_PnpSetLock(FxPkgPnp *This, FxIrp *Irp)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 (__fastcall *m_Lock)(unsigned __int64); // rax
  signed int v6; // r8d

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  m_Lock = (__int64 (__fastcall *)(unsigned __int64))This[1].m_SpinLock.m_Lock;
  if ( m_Lock )
    v6 = m_Lock(ObjectHandleUnchecked);
  else
    v6 = -1073741823;
  if ( v6 >= 0 )
    Irp->m_Irp->IoStatus.Information = 0LL;
  return FxPkgPnp::CompletePnpRequest(This, Irp, v6);
}

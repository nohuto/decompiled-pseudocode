/*
 * XREFs of ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008EB8
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008430 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008890 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C000AA68 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C000AB04 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C000AEBC (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C00301DC (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C0035760 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C0066EB0 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00840F0 (-PnpEventPdoInitFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C00847C0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C000AA68 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 */

void __fastcall FxObject::DestroyChildren(FxObject *this)
{
  _LIST_ENTRY *p_m_ChildListHead; // rbx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v3; // rax

  p_m_ChildListHead = &this->m_ChildListHead;
  while ( 1 )
  {
    Flink = p_m_ChildListHead->Flink;
    if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
      break;
    if ( Flink->Blink != p_m_ChildListHead || (v3 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_m_ChildListHead->Flink = v3;
    v3->Blink = p_m_ChildListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    FxObject::ParentDeleteEvent((FxObject *)&Flink[-5].Blink);
  }
}

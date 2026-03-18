/*
 * XREFs of ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C00083F0
 * Callers:
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C00040D8 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0005D70 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C0015684 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00187B0 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C004CD60 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C0051AF4 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C0051DA0 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A880 (-PnpEventPdoInitFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C007AF50 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C00040D8 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
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

/*
 * XREFs of ?get_TabTransferEventBroker@TabViewManager@@UEAAJPEAPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025FCC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::get_TabTransferEventBroker(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker **a2)
{
  struct Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker *v2; // rcx

  v2 = (struct Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker *)*((_QWORD *)this + 153);
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}

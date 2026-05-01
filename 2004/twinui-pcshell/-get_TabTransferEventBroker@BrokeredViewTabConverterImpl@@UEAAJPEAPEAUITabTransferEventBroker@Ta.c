/*
 * XREFs of ?get_TabTransferEventBroker@BrokeredViewTabConverterImpl@@UEAAJPEAPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180263390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterImpl::get_TabTransferEventBroker(
        BrokeredViewTabConverterImpl *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker **))(**((_QWORD **)this + 8) + 200LL))(
           *((_QWORD *)this + 8),
           a2);
}

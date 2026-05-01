/*
 * XREFs of ?remove_ViewTabLostFocus@BrokeredViewTabConverterImpl@@UEAAJUEventRegistrationToken@@@Z @ 0x180262B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterImpl::remove_ViewTabLostFocus(
        BrokeredViewTabConverterImpl *this,
        struct EventRegistrationToken a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 160LL))(*((_QWORD *)this + 8), a2.value);
}

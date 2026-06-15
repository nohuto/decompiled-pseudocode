/*
 * XREFs of ??1wnf_subscription_state_base@details@wil@@UEAA@XZ @ 0x18013565C
 * Callers:
 *     _wil::details::wnf_subscription_state_wil::details::empty_wnf_state_::wnf_subscription_state_wil::details::empty_wnf_state__::_1_::dtor$0 @ 0x18013525E (_wil--details--wnf_subscription_state_wil--details--empty_wnf_state_--wnf_subscription_state_wil.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::wnf_subscription_state_base::~wnf_subscription_state_base(
        wil::details::wnf_subscription_state_base *this)
{
  *(_QWORD *)this = &wil::details::wnf_subscription_state_base::`vftable';
  if ( *((_QWORD *)this + 1) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
}

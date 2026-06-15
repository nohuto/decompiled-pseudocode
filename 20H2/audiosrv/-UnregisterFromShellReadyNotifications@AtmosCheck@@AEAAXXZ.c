/*
 * XREFs of ?UnregisterFromShellReadyNotifications@AtmosCheck@@AEAAXXZ @ 0x180073D60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_58c08c42a645875e4bfc7c52011cdf6b___::Run @ 0x180073CF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_58c08c42a645875e4bfc7c52011cdf6b___--Run.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x180137010 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::UnregisterFromShellReadyNotifications(AtmosCheck *this)
{
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (char *)this + 240,
    0LL);
}

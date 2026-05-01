/*
 * XREFs of ?Shutdown@ConnectedStandbyHelper@@QEAAXXZ @ 0x1802A7600
 * Callers:
 *     ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180287540 (-UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802985B0 (-UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PDCShellPhaseUseWNF@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A7564 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PDCShellPhaseUseWNF@@@details@wil@@QEAAX_.c)
 */

void __fastcall ConnectedStandbyHelper::Shutdown(Concurrency::details::_RefCounter **this, __int64 a2, __int64 a3)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PDCShellPhaseUseWNF>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PDCShellPhaseUseWNF>::GetImpl'::`2'::impl,
    1u,
    a3);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    this + 6,
    0LL);
}

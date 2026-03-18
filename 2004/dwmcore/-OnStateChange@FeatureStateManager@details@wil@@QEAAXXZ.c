/*
 * XREFs of ?OnStateChange@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18014F3A8
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_0ae89f7ca77040da3af7dd229dfecfb4_@@CAJU__WIL__WNF_STATE_NAME@@KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18014D2D0 (-_lambda_invoker_cdecl_@_lambda_0ae89f7ca77040da3af7dd229dfecfb4_@@CAJU__WIL__WNF_STATE_NAME@@KP.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CAXPEAX@Z @ 0x18014D380 (-_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CAXPEAX@Z.c)
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18014F1F4 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall wil::details::FeatureStateManager::OnStateChange(wil::details::FeatureStateManager *this)
{
  if ( *(_BYTE *)this )
    wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)((char *)this + 104), (PSRWLOCK)this + 4);
}

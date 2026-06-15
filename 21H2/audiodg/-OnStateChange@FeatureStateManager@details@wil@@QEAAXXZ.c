/*
 * XREFs of ?OnStateChange@FeatureStateManager@details@wil@@QEAAXXZ @ 0x1400253B8
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_0ae89f7ca77040da3af7dd229dfecfb4_@@CAJU__WIL__WNF_STATE_NAME@@KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x14001EC20 (-_lambda_invoker_cdecl_@_lambda_0ae89f7ca77040da3af7dd229dfecfb4_@@CAJU__WIL__WNF_STATE_NAME@@KP.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CAXPEAX@Z @ 0x14001EC70 (-_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CAXPEAX@Z.c)
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1400252BC (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall wil::details::FeatureStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  if ( LOBYTE(this->Ptr) )
    wil::details_abi::SubscriptionList::OnSignaled((wil::details_abi::SubscriptionList *)&this[9], this + 4);
}

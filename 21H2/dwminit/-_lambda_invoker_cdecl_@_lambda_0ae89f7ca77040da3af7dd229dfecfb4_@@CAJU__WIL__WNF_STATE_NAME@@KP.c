/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_0ae89f7ca77040da3af7dd229dfecfb4_@@CAJU__WIL__WNF_STATE_NAME@@KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800061C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1800056D8 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

__int64 __fastcall _lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( *(_BYTE *)a4 )
    wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)(a4 + 72), (PSRWLOCK)(a4 + 32));
  return 0LL;
}

/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CAXPEAX@Z @ 0x18007CA70
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18007E6AC (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall _lambda_1ad7ecfab602a777ecf020873216a663_::_lambda_invoker_cdecl_(char *a1)
{
  if ( *a1 )
    wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)(a1 + 104), (PSRWLOCK)a1 + 4);
}

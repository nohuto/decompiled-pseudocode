/*
 * XREFs of ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18007D6F8
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18002CE60 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_ @ 0x180042DD0 (_lambda_d51448ba32f8ef42e59400edd4566183_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x18002D9C0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18002DAA8 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18007DE3C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall wil::details::FeatureStateManager::FlushUsage(wil::details::FeatureStateManager *this)
{
  if ( !wil::ProcessShutdownInProgress(this) && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)this) )
    wil::details_abi::SubscriptionList::OnSignaled(
      (LPCRITICAL_SECTION)(*((_QWORD *)this + 3) + 200LL),
      *((PSRWLOCK *)this + 3));
}

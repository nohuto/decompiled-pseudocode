/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180036828
 * Callers:
 *     _lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_ @ 0x1800367D0 (_lambda_0374aa0a5d1201b2358c6bce99369c58_--_lambda_invoker_cdecl_.c)
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180069F94 (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x1800B8DFC (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800B9E58 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBUCachedUsageData@123@@Z @ 0x1800368AC (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBUCachedUsageData@123@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  const struct wil::details::EnabledStateManager::CachedUsageData *v1; // rsi
  const struct wil::details::EnabledStateManager::CachedUsageData *v3; // rbx
  void (*v4)(unsigned int, unsigned int, unsigned int, const char *); // rax

  v1 = (const struct wil::details::EnabledStateManager::CachedUsageData *)*((_QWORD *)this + 7);
  v3 = (const struct wil::details::EnabledStateManager::CachedUsageData *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v1 - v3) >= 0x10 )
  {
    while ( v3 != v1 )
    {
      wil::details::EnabledStateManager::RecordCachedUsageUnderLock(this, v3);
      v3 = (const struct wil::details::EnabledStateManager::CachedUsageData *)((char *)v3 + 16);
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    v4 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage || (v4 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v4)(0LL, 254LL, 0LL, 0LL);
  }
}

/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180031134
 * Callers:
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800310D8 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18005340C (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x18007DAC0 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBUCachedUsageData@123@@Z @ 0x18003119C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBUCachedUsageData@123@@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180031350 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  const struct wil::details::EnabledStateManager::CachedUsageData *v4; // rsi
  const struct wil::details::EnabledStateManager::CachedUsageData *v6; // rbx
  const char *v7; // [rsp+20h] [rbp-8h]

  v4 = (const struct wil::details::EnabledStateManager::CachedUsageData *)*((_QWORD *)this + 7);
  v6 = (const struct wil::details::EnabledStateManager::CachedUsageData *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v4 - v6) >= 0x10 )
  {
    while ( v6 != v4 )
    {
      wil::details::EnabledStateManager::RecordCachedUsageUnderLock(this, v6);
      v6 = (const struct wil::details::EnabledStateManager::CachedUsageData *)((char *)v6 + 16);
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, a4, v7);
  }
}

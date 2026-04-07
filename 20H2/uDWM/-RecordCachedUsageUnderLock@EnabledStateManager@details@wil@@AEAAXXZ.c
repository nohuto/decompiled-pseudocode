/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18002EC98
 * Callers:
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18002EC3C (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18005341C (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x18007D210 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z @ 0x180054A20 (-wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        void (*a3)(unsigned int, unsigned int, unsigned int, const char *))
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  void (*v6)(unsigned int, unsigned int, unsigned int, const char *); // rax

  v3 = *((_QWORD *)this + 7);
  v5 = *((_QWORD *)this + 6);
  if ( (unsigned __int64)(v3 - v5) >= 0x10 )
  {
    while ( v5 != v3 )
    {
      wil_details_RecordCachedUsage(*(_DWORD *)v5, *(struct wil_details_FeatureReportingCache **)(v5 + 8), a3);
      v5 += 16LL;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    v6 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage || (v6 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v6)(0LL, 254LL, 0LL, 0LL);
  }
}

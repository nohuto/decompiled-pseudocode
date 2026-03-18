/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800E1FF8
 * Callers:
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18002AF8C (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x1800E1CF0 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800F3870 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z @ 0x1800E5014 (-wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        void (*a3)(unsigned int, unsigned int, unsigned int, const char *))
{
  unsigned int *v3; // rsi
  struct wil_details_FeatureReportingCache **v5; // rbx
  void (*v6)(unsigned int, unsigned int, unsigned int, const char *); // rax

  v3 = (unsigned int *)*((_QWORD *)this + 7);
  v5 = (struct wil_details_FeatureReportingCache **)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v3 - (char *)v5) >= 0x10 )
  {
    while ( v5 != (struct wil_details_FeatureReportingCache **)v3 )
    {
      wil_details_RecordCachedUsage((wil::details *)*(unsigned int *)v5, v5[1], a3);
      v5 += 2;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    v6 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage || (v6 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v6)(0LL, 254LL, 0LL, 0LL);
  }
}

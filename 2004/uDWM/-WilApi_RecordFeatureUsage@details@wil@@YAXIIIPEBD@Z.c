/*
 * XREFs of ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180031350
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18002E7C0 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180031134 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBUCachedUsageData@123@@Z @ 0x18003119C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBUCachedUsageData@123@@Z.c)
 *     ?RecordSRUMFeatureUsage@details@wil@@YAXIII@Z @ 0x18007EC60 (-RecordSRUMFeatureUsage@details@wil@@YAXIII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApi_RecordFeatureUsage(wil::details *this, __int64 a2, __int64 a3)
{
  void (*v3)(unsigned int, unsigned int, unsigned int, const char *); // rax

  v3 = g_wil_details_internalRecordFeatureUsage;
  if ( g_wil_details_internalRecordFeatureUsage || (v3 = g_wil_details_apiRecordFeatureUsage) != 0LL )
    ((void (__fastcall *)(wil::details *, __int64, __int64, _QWORD))v3)(this, a2, a3, 0LL);
}

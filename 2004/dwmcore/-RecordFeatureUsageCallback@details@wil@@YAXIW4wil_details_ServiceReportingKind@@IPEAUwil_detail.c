/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18002F9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18002FA74 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800D2228 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        wil::details *a1,
        unsigned int a2,
        unsigned int a3,
        struct wil_details_FeatureReportingCache *a4,
        _DWORD *a5)
{
  unsigned int v6; // esi
  unsigned int v7; // r8d
  unsigned int v8; // edx
  const char *v9; // [rsp+20h] [rbp-8h]

  v6 = (unsigned int)a1;
  if ( a4 )
  {
    if ( g_wil_details_RecordSRUMFeatureUsage && (a2 - 100 <= 0x31 || !a2) )
      g_wil_details_RecordSRUMFeatureUsage((unsigned int)a1, a2, a3);
    if ( *a5 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(&wil::details::g_enabledStateManager, v6, a4);
    v7 = a5[1];
    if ( v7 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v6, a5[2], v7, (unsigned int)a4, v9);
    if ( !a5[4] )
      wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
        (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
        (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  }
  else
  {
    v8 = a5[2] | 0x80000000;
    if ( !a5[5] )
      v8 = a5[2];
    wil::details::WilApi_RecordFeatureUsage(a1, v8, 0, 0, v9);
  }
}

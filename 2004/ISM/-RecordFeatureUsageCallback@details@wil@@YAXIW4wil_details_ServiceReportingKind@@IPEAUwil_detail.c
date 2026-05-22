/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18003E270
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x1800124C0 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18003DFE8 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180067B18 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        wil::details *a1,
        unsigned int a2,
        unsigned int a3,
        struct wil_details_FeatureReportingCache *a4,
        _DWORD *a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  unsigned int v9; // edx
  const char *v10; // [rsp+20h] [rbp-8h]

  v6 = (unsigned int)a1;
  v7 = a3;
  if ( a4 )
  {
    if ( g_wil_details_RecordSRUMFeatureUsage && (!a2 || a2 - 100 <= 0x31) )
      g_wil_details_RecordSRUMFeatureUsage((unsigned int)a1, a2, a3);
    if ( *a5 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(&wil::details::g_enabledStateManager, v6, a4);
    v8 = a5[1];
    if ( v8 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v6, a5[2], v8, v7, v10);
    if ( !a5[4] )
      wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
        (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
        (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  }
  else
  {
    v9 = a5[2] | 0x80000000;
    if ( !a5[5] )
      v9 = a5[2];
    wil::details::WilApi_RecordFeatureUsage(a1, v9, 0, a3, v10);
  }
}

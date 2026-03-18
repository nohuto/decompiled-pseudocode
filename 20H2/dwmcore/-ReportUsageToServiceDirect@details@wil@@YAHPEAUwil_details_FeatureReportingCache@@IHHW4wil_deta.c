/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800E6398
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800E6260 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18002AF08 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18002B308 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1800B5590 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5)
{
  _DWORD *v9; // rax
  unsigned int v10; // ebx
  void (*v11)(unsigned int, unsigned int, unsigned int, const char *); // rax
  void (*v12)(unsigned int, unsigned int, unsigned int, const char *); // rax
  __int64 v13; // rdx
  __int128 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h] BYREF

  v9 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v17, a1, a5);
  v10 = 0;
  v16 = *((_QWORD *)v9 + 2);
  v15 = *(_OWORD *)v9;
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1u);
  if ( (_DWORD)v15 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      a2,
      (struct wil_details_FeatureReportingCache *)a1);
  if ( DWORD1(v15) )
  {
    v11 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage || (v11 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v11)(a2, DWORD2(v15), DWORD1(v15), 0LL);
  }
  if ( !(_DWORD)v16 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( a3 )
  {
    v12 = g_wil_details_internalRecordFeatureUsage;
    v13 = a5;
    LODWORD(v13) = a5 | 0x80000000;
    if ( !a4 )
      v13 = a5;
    if ( g_wil_details_internalRecordFeatureUsage || (v12 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v12)(a2, v13, 0LL, 0LL);
  }
  LOBYTE(v10) = (_DWORD)v16 == 0;
  return v10;
}

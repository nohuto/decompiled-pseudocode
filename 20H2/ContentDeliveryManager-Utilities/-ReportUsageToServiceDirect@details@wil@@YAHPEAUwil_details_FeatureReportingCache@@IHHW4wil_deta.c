/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000CAF4
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CC90 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x180017CC4 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180008330 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18000C378 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        signed __int32 *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6)
{
  __int64 v10; // rax
  unsigned int v11; // ebx
  void (*v12)(unsigned int, unsigned int, unsigned int, const char *); // rax
  void (*v13)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  void (*v14)(unsigned int, unsigned int, unsigned int, const char *); // rax
  __int64 v15; // rdx
  __int128 v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF

  v10 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v19, a1, a5, a6);
  v11 = 0;
  v18 = *(_QWORD *)(v10 + 16);
  v17 = *(_OWORD *)v10;
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1u);
  if ( (_DWORD)v17 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      a2,
      (struct wil_details_FeatureReportingCache *)a1);
  if ( DWORD1(v17) )
  {
    v12 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage || (v12 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v12)(a2, DWORD2(v17), DWORD1(v17), 0LL);
  }
  if ( !(_DWORD)v18 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_1801982D8);
    if ( !qword_1801982F8 )
    {
      v13 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
      qword_1801982F8 = 0LL;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v13 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        ((void (__fastcall *)(__int64 *, void (__fastcall *)(void *), __int64))v13)(
          &qword_1801982F8,
          _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
          -1LL);
      }
    }
    ReleaseSRWLockExclusive(&stru_1801982D8);
  }
  if ( a3 )
  {
    v14 = g_wil_details_internalRecordFeatureUsage;
    v15 = a5;
    LODWORD(v15) = a5 | 0x80000000;
    if ( !a4 )
      v15 = a5;
    if ( g_wil_details_internalRecordFeatureUsage || (v14 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v14)(a2, v15, 0LL, 0LL);
  }
  LOBYTE(v11) = (_DWORD)v18 == 0;
  return v11;
}

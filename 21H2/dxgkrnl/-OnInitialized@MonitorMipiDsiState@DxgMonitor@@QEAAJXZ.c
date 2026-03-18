/*
 * XREFs of ?OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ @ 0x1C03B9C34
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C0012EA0 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0012ED0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MonitorMipiDsiState::OnInitialized(
        DxgMonitor::MonitorMipiDsiState *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  struct _KTHREAD **v11; // [rsp+58h] [rbp+10h] BYREF

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_MipiDsi2__private_reporting,
    0x11CEF90u,
    a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1);
  if ( !(unsigned __int8)ExIsManufacturingModeEnabled() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MonitorIoctlTesting__private_reporting,
      0x133185Eu,
      v5,
      v6,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
      0);
    WdLogSingleEntry0(3LL);
    return 3221225659LL;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8) < 0xC002
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
  {
    WdLogSingleEntry0(3LL);
    return 3221225659LL;
  }
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v11, (DxgMonitor::MonitorMipiDsiState *)((char *)this + 32));
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
  v10 = (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 64LL))(v9, (char *)this + 8);
  MUTEX_LOCK::~MUTEX_LOCK(&v11);
  if ( (int)v10 < 0 )
    WdLogSingleEntry1(3LL, v10);
  return (unsigned int)v10;
}

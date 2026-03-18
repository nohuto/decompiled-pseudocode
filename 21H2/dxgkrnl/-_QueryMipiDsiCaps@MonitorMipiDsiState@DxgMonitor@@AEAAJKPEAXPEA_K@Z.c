/*
 * XREFs of ?_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXPEA_K@Z @ 0x1C03BA3B0
 * Callers:
 *     ?OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C03B9D7C (-OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 __fastcall DxgMonitor::MonitorMipiDsiState::_QueryMipiDsiCaps(
        DxgMonitor::MonitorMipiDsiState *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v11; // xmm0

  v4 = a2;
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  *a4 = 0LL;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_MipiDsi2__private_reporting,
    0x11CEF90u,
    (__int64)a3,
    (__int64)a4,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1);
  if ( (unsigned __int8)ExIsManufacturingModeEnabled() )
  {
    if ( (unsigned int)v4 >= 0x14 )
    {
      v11 = *(_OWORD *)((char *)this + 8);
      *a4 = 20LL;
      *(_OWORD *)a3 = v11;
      a3[4] = *((_DWORD *)this + 6);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, 20LL, v4);
      return 3221225507LL;
    }
  }
  else
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MonitorIoctlTesting__private_reporting,
      0x133185Eu,
      v8,
      v9,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
      0);
    WdLogSingleEntry0(3LL);
    return 3221225659LL;
  }
}

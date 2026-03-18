/*
 * XREFs of ?_QueryMipiDsiCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C02FBB70
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C013BEB0 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?Feature_MonitorIoctlTesting__private_IsEnabled@@YAHXZ @ 0x1C0026EF4 (-Feature_MonitorIoctlTesting__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall DXGMONITOR::_QueryMipiDsiCaps(DXGMONITOR *this, __int64 a2, _DWORD *a3, unsigned __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // rax
  __int128 v15; // xmm0
  int v16; // [rsp+30h] [rbp-18h]

  v4 = (unsigned int)a2;
  if ( !a4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  *a4 = 0LL;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_MipiDsi2__private_reporting,
    0x11CEF90u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ProductizeSpecializedDisplays_logged_traits,
    1,
    v16);
  if ( (unsigned __int8)ExIsManufacturingModeEnabled() || (unsigned int)Feature_MonitorIoctlTesting__private_IsEnabled() )
  {
    if ( (unsigned int)v4 >= 0x14 )
    {
      v15 = *((_OWORD *)this + 82);
      *a4 = 20LL;
      *(_OWORD *)a3 = v15;
      a3[4] = *((_DWORD *)this + 332);
      return 0LL;
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v14 + 24) = 20LL;
      *(_QWORD *)(v14 + 32) = v4;
      WdLogEvent5_WdError(v14);
      return 3221225507LL;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    WdLogEvent5_WdWarning(v12);
    return 3221225659LL;
  }
}

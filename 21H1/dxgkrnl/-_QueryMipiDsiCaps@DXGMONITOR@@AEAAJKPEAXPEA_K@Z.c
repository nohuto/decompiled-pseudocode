/*
 * XREFs of ?_QueryMipiDsiCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C02F763C
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C00DF8B0 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0008898 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 __fastcall DXGMONITOR::_QueryMipiDsiCaps(DXGMONITOR *this, __int64 a2, _DWORD *a3, unsigned __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v16; // rax
  __int128 v17; // xmm0
  int v18; // [rsp+30h] [rbp-18h]
  int v19; // [rsp+30h] [rbp-18h]

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
    v18);
  if ( (unsigned __int8)ExIsManufacturingModeEnabled() )
  {
    if ( (unsigned int)v4 >= 0x14 )
    {
      v17 = *((_OWORD *)this + 82);
      *a4 = 20LL;
      *(_OWORD *)a3 = v17;
      a3[4] = *((_DWORD *)this + 332);
      return 0LL;
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v16 + 24) = 20LL;
      *(_QWORD *)(v16 + 32) = v4;
      WdLogEvent5_WdError(v16);
      return 3221225507LL;
    }
  }
  else
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MonitorIoctlTesting__private_reporting,
      0x133185Eu,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
      0,
      v19);
    v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    WdLogEvent5_WdWarning(v14);
    return 3221225659LL;
  }
}

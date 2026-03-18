/*
 * XREFs of ?_SetActiveColorProfileName@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C02FACE4
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C013AD00 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 __fastcall DXGMONITOR::_SetActiveColorProfileName(DXGMONITOR *this, __int64 a2, void *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  int v10; // [rsp+30h] [rbp-18h]

  v3 = *((_QWORD *)this + 4);
  if ( !v3 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
    v3 = *((_QWORD *)this + 4);
  }
  v6 = *(_QWORD *)(v3 + 8);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*(_QWORD *)(v6 + 16) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_EnableDisplayColorManagementApi__private_reporting,
    0x12AB040u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ProductizeSpecializedDisplays_logged_traits,
    1,
    v10);
  return 0LL;
}

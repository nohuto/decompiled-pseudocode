/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_30955612@@@details@wil@@QEAA_NXZ @ 0x18000DCCC
 * Callers:
 *     ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHPEAUIAudioProcess@@K@Z @ 0x18000B8F0 (-IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHPEAUIAudioProcess@@K@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005B18 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_30955612@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000DDA8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_30955612.c)
 */

bool __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_30955612>::__private_IsEnabled(
        _DWORD *a1)
{
  unsigned int v2; // edx
  bool v3; // bl
  __int64 v5; // [rsp+50h] [rbp+20h] BYREF
  int v6; // [rsp+58h] [rbp+28h] BYREF
  __int16 v7; // [rsp+5Ch] [rbp+2Ch]
  char v8; // [rsp+60h] [rbp+30h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_30955612>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = *a1;
  v3 = (v5 & 8) != 0;
  if ( (*a1 & 2) == 0 )
  {
    v5 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_30955612>::GetCachedFeatureEnabledState(
                      a1,
                      &v8);
    v2 = v5;
  }
  LODWORD(v5) = 0;
  v6 = 0;
  BYTE4(v5) = 2;
  v7 = WORD2(v5);
  wil_details_FeatureReporting_ReportUsageToService(
    a1 + 2,
    (v2 >> 8) & 1,
    (v2 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v6,
    v3,
    3);
  return v3;
}

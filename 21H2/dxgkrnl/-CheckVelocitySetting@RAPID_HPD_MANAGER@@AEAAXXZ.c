/*
 * XREFs of ?CheckVelocitySetting@RAPID_HPD_MANAGER@@AEAAXXZ @ 0x1C00281E8
 * Callers:
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x1C00239C0 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 *     ??0RAPID_HPD_MANAGER@@QEAA@XZ @ 0x1C0028184 (--0RAPID_HPD_MANAGER@@QEAA@XZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

void __fastcall RAPID_HPD_MANAGER::CheckVelocitySetting(RAPID_HPD_MANAGER *this, __int64 a2, __int64 a3, __int64 a4)
{
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_RapidHpdDeferRecalc__private_reporting,
    0x1B6D26Fu,
    a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
    1);
  *((_BYTE *)this + 32) = 1;
}

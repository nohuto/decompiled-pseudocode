/*
 * XREFs of ?NeedLidStateRecovery@DISPLAYDIAGNOSTICADAPTERDATA@@QEAA_NXZ @ 0x1C02F0050
 * Callers:
 *     ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1C02F00E8 (-NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAPEAVVIDPNTARGETINFO@@I@Z @ 0x1C004D328 (-GetVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAPEAVVIDPNTARGETINFO@@I@Z.c)
 */

char __fastcall DISPLAYDIAGNOSTICADAPTERDATA::NeedLidStateRecovery(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // r10
  unsigned int v6; // r9d
  unsigned int v7; // r8d
  int v8; // r8d

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_UnreliableLidRecovery__private_reporting,
    0x1C8AAF4u,
    a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1);
  v5 = 0;
  if ( *((_BYTE *)this + 3504) && !*((_BYTE *)this + 3506) )
  {
    v6 = *((_DWORD *)this + 489);
    v7 = 0;
    if ( v6 )
    {
      while ( *((_DWORD *)DISPLAYDIAGNOSTICADAPTERDATA::GetVidPnTargetInfo(this, v7) + 2) <= 1u )
      {
        v7 = v8 + 1;
        if ( v7 >= v6 )
          goto LABEL_6;
      }
      return 1;
    }
LABEL_6:
    if ( v6 == 1 && *((_BYTE *)this + 970) != v5 && *((_BYTE *)this + 971) != v5 )
      return 1;
  }
  return 0;
}

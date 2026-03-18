/*
 * XREFs of DpIsFeatureEnabled @ 0x1C02C1740
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0008898 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 __fastcall DpIsFeatureEnabled(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  char v4; // si
  int v5; // eax
  __int64 v7; // rax
  int v8; // [rsp+30h] [rbp-18h]

  v3 = *(_DWORD **)(*(_QWORD *)a1 + 64LL);
  if ( !v3 || v3[4] != 1953656900 || v3[5] != 2 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    goto LABEL_17;
  }
  if ( *(_DWORD *)(a1 + 8) )
  {
LABEL_17:
    *(_BYTE *)(a1 + 12) = 0;
    return 3221225485LL;
  }
  v3[1474] |= 0x8000u;
  v4 = 0;
  if ( dword_1C00AFA30 == 2 )
  {
    v4 = 1;
  }
  else if ( !dword_1C00AFA30 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_GpuHardwareScheduling__private_reporting,
      0x12C5894u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_TrackedWorkload_logged_traits,
      0,
      v8);
  }
  if ( !byte_1C00AFA34 )
  {
    v5 = v3[1474];
    if ( (v5 & 0x800) != 0 )
    {
      v4 = 0;
      v3[1474] = v5 & 0xFFFF7FFF;
    }
  }
  if ( v4 )
  {
    *(_BYTE *)(a1 + 12) = 1;
    v3[1474] |= 0x10000u;
  }
  else
  {
    *(_BYTE *)(a1 + 12) = 0;
  }
  return 0LL;
}

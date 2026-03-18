/*
 * XREFs of DpIsFeatureEnabled @ 0x1C02C5C80
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall DpIsFeatureEnabled(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  int v4; // ecx
  int v5; // ecx
  char v6; // si
  int v7; // eax
  __int64 v9; // rax
  int v10; // [rsp+30h] [rbp-18h]

  v3 = *(_DWORD **)(*(_QWORD *)a1 + 64LL);
  if ( v3 && v3[4] == 1953656900 && v3[5] == 2 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    if ( !v4 )
    {
      v3[1474] |= 0x8000u;
      v6 = 0;
      if ( dword_1C00B1B30 == 2 )
      {
        v6 = 1;
      }
      else if ( !dword_1C00B1B30 )
      {
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_GpuHardwareScheduling__private_reporting,
          0x12C5894u,
          0LL,
          0LL,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_TrackedWorkload_logged_traits,
          0,
          v10);
      }
      if ( !byte_1C00B1B34 )
      {
        v7 = v3[1474];
        if ( (v7 & 0x800) != 0 )
        {
          v6 = 0;
          v3[1474] = v7 & 0xFFFF7FFF;
        }
      }
      if ( v6 )
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
    v5 = v4 - 2;
    if ( !v5 )
    {
      if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
      {
        *(_BYTE *)(a1 + 12) = 1;
        v3[1474] |= 0x100000u;
      }
      return 0LL;
    }
    if ( v5 == 1 )
    {
      if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
        *(_BYTE *)(a1 + 12) = 1;
      return 0LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
  }
  *(_BYTE *)(a1 + 12) = 0;
  return 3221225485LL;
}

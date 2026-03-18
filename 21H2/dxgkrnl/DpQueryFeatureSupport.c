/*
 * XREFs of DpQueryFeatureSupport @ 0x1C0386D50
 * Callers:
 *     DpIsFeatureEnabled @ 0x1C0386CB0 (DpIsFeatureEnabled.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 __fastcall DpQueryFeatureSupport(__int64 a1)
{
  __int64 v2; // r9
  _DWORD *v3; // rbx
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  int v15; // edx

  v2 = 2LL;
  v3 = *(_DWORD **)(*(_QWORD *)a1 + 64LL);
  *(_BYTE *)(a1 + 16) = 0;
  if ( !v3 || v3[4] != 1953656900 || v3[5] != 2 || (v4 = *(_DWORD *)(a1 + 12)) == 0 )
  {
    v6 = -1073741811LL;
    v7 = 2LL;
    goto LABEL_30;
  }
  v5 = *(_DWORD *)(a1 + 8);
  switch ( v5 )
  {
    case 0:
      v15 = v3[1422] ^ (v3[1422] ^ (v4 << 15)) & 0x18000;
      v3[1422] = v15;
      v10 = v15;
      if ( byte_1C01304BD && (v15 & 0x18000) == 0x8000 )
      {
        v10 = v15 & 0xFFFE7FFF | 0x10000;
        v3[1422] = v10;
      }
      v11 = 0x20000;
      v12 = ((v10 >> 15) & 3) - 1;
      if ( ((v10 >> 15) & 3) != 1 )
      {
LABEL_14:
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 == 1;
        }
        else
        {
          if ( dword_1C01304B8 == 2 )
          {
LABEL_28:
            v10 |= v11;
            v3[1422] = v10;
LABEL_23:
            if ( (v10 & v11) == 0 )
              return 0LL;
LABEL_24:
            *(_BYTE *)(a1 + 16) = 1;
            return 0LL;
          }
          v14 = dword_1C01304B8 == 0;
        }
        if ( !v14 )
          goto LABEL_23;
        goto LABEL_28;
      }
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_GpuHardwareScheduling__private_reporting,
        0x12C5894u,
        98304LL,
        2LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
        0);
LABEL_22:
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_GpuHardwareFlipQueue__private_reporting,
        0x17298CDu,
        v8,
        v2,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
        0);
      v10 = v3[1422];
      goto LABEL_23;
    case 1:
      v8 = 786432LL;
      v9 = v3[1422] ^ (v3[1422] ^ (v4 << 18)) & 0xC0000;
      v3[1422] = v9;
      v10 = v9;
      if ( byte_1C01304BD && (v9 & 0xC0000) == 0x40000 )
      {
        v10 = v9 & 0xFFF3FFFF | 0x80000;
        v3[1422] = v10;
      }
      v11 = 0x100000;
      v12 = ((v10 >> 18) & 3) - 1;
      if ( ((v10 >> 18) & 3) != 1 )
        goto LABEL_14;
      goto LABEL_22;
    case 3:
    case 5:
      goto LABEL_24;
  }
  v6 = *(int *)(a1 + 8);
  v7 = 3LL;
LABEL_30:
  WdLogSingleEntry1(v7, v6);
  return 3221225485LL;
}

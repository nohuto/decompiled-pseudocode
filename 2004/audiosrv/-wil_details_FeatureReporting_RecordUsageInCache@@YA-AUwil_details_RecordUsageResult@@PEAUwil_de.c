/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180012690
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000D070 (AudioServerIsFormatSupported.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036DF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details.c)
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800648B4 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1800459C4 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1800BBEA0 (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        int a4)
{
  int v4; // r11d
  _DWORD *v7; // r9
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // edx
  signed __int32 v11; // eax
  int v13; // ebx
  unsigned __int32 v14; // eax
  int v15; // ecx
  unsigned __int32 v16; // ett
  int v17; // r8d
  int v18; // r8d

  v4 = 0;
  v7 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !a3 )
    goto LABEL_27;
  if ( a3 == 1 )
  {
LABEL_9:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a2, (unsigned int)a3);
    return v7;
  }
  if ( a3 <= 1 )
    goto LABEL_13;
  if ( a3 <= 3 )
  {
LABEL_5:
    v8 = 0;
    v9 = a3 - 2;
    if ( v9 )
    {
      v17 = v9 - 1;
      if ( v17 )
      {
        v18 = v17 - 3;
        if ( v18 )
        {
          if ( v18 == 1 )
            v8 = 16;
        }
        else
        {
          v8 = 4;
        }
      }
      else
      {
        v8 = 8;
      }
    }
    else
    {
      v8 = 2;
    }
    v10 = v8 | 1;
    _m_prefetchw((const void *)a2);
    v11 = _InterlockedOr(a2, v10);
    *v7 = (v11 & 1) == 0;
    LOBYTE(v4) = (v10 & 0xFFFFFFFE & v11) == (v10 & 0xFFFFFFFE);
    v7[4] = v4;
    return v7;
  }
  if ( a3 == 4 )
  {
LABEL_27:
    wil_details_FeatureReporting_IncrementUsageInCache(a2, (unsigned int)a3);
    return v7;
  }
  if ( a3 == 5 )
    goto LABEL_9;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_5;
LABEL_13:
  v13 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v14 = *((_DWORD *)a2 + 1);
    do
    {
      if ( (v14 & 0x10) == 0 || (v15 = 1, ((v14 >> 5) & 0x3F) != v13) )
        v15 = 0;
      v7[4] = v15;
      v16 = v14;
      v14 = _InterlockedCompareExchange(a2 + 1, (32 * (v13 & 0x3F)) | v14 & 0xFFFFF81F | 0x10, v14);
    }
    while ( v16 != v14 );
  }
  v7[2] = a3;
  v7[1] = 1;
  v7[3] = a4;
  return v7;
}

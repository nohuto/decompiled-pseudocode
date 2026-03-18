/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x14026ABC0
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x14026AB40 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1405BB274 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1405BB35C (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

struct wil_details_FeatureReportingCache *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        struct wil_details_FeatureReportingCache *__return_ptr retstr,
        struct wil_details_FeatureReportingCache *a2,
        int a3)
{
  wil_details_ReportedState v3; // r10d
  struct wil_details_FeatureReportingCache *v4; // r9
  int v5; // ecx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  unsigned int v9; // ecx
  signed __int32 v10; // eax
  int v12; // r11d
  unsigned __int32 v13; // eax
  int v14; // edx
  unsigned __int32 v15; // ett

  v3.exchange = 0;
  v4 = retstr;
  *(_OWORD *)&retstr->reported.exchange = 0LL;
  retstr[2] = 0LL;
  if ( !a3 )
    goto LABEL_26;
  if ( a3 == 1 )
  {
LABEL_25:
    wil_details_FeatureReporting_IncrementOpportunityInCache(
      retstr,
      (enum wil_details_ServiceReportingKind)a3,
      a3,
      (struct wil_details_RecordUsageResult *)retstr);
    return v4;
  }
  if ( a3 <= 1 )
    goto LABEL_18;
  if ( a3 <= 3 )
  {
LABEL_8:
    v5 = 0;
    v6 = a3 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 3;
        if ( v8 )
        {
          if ( v8 == 1 )
            v5 = 16;
        }
        else
        {
          v5 = 4;
        }
      }
      else
      {
        v5 = 8;
      }
    }
    else
    {
      v5 = 2;
    }
    v9 = v5 | 1;
    _m_prefetchw(&dword_140CDB308);
    v10 = _InterlockedOr(&dword_140CDB308, v9);
    v4->reported.exchange = (v10 & 1) == 0;
    LOBYTE(v3.exchange) = (v10 & v9 & 0xFFFFFFFE) == (v9 & 0xFFFFFFFE);
    v4[2].reported = v3;
    return v4;
  }
  if ( a3 == 4 )
  {
LABEL_26:
    wil_details_FeatureReporting_IncrementUsageInCache(
      retstr,
      (enum wil_details_ServiceReportingKind)a3,
      a3,
      (struct wil_details_RecordUsageResult *)retstr);
    return v4;
  }
  if ( a3 == 5 )
    goto LABEL_25;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_18:
  v12 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v13 = dword_140CDB30C;
    do
    {
      if ( (v13 & 0x10) == 0 || (v14 = 1, ((v13 >> 5) & 0x3F) != v12) )
        v14 = 0;
      retstr[2].reported.exchange = v14;
      v15 = v13;
      v13 = _InterlockedCompareExchange(&dword_140CDB30C, (32 * (v12 & 0x3F)) | v13 & 0xFFFFF81F | 0x10, v13);
    }
    while ( v15 != v13 );
  }
  retstr[1].reported.exchange = a3;
  retstr->recorded.exchange = 1;
  retstr[1].recorded.exchange = 0;
  return v4;
}

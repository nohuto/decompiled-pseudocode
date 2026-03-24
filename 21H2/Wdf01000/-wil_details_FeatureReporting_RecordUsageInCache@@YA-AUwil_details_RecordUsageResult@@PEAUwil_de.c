/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C001B690
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C001B86C (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1C001B4BC (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1C001B5A4 (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

wil_details_RecordUsageResult *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        wil_details_RecordUsageResult *result,
        wil_details_FeatureReportingCache *reporting,
        int kind,
        unsigned int a4)
{
  int v4; // r11d
  wil_details_RecordUsageResult *v6; // r9
  int v7; // ecx
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // ecx
  signed __int32 exchange; // eax
  signed __int32 v13; // ett
  int v14; // ebx
  unsigned __int32 v15; // eax
  int v16; // edx
  unsigned __int32 v17; // ett

  v4 = 0;
  v6 = result;
  *(_OWORD *)&result->queueBackground = 0LL;
  *(_QWORD *)&result->ignoredUse = 0LL;
  if ( !kind )
    goto LABEL_27;
  if ( kind == 1 )
  {
LABEL_26:
    wil_details_FeatureReporting_IncrementOpportunityInCache(
      reporting,
      (wil_details_ServiceReportingKind)kind,
      kind,
      result);
    return v6;
  }
  if ( kind <= 1 )
    goto LABEL_19;
  if ( kind <= 3 )
  {
LABEL_8:
    v7 = 0;
    v8 = kind - 2;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 3;
        if ( v10 )
        {
          if ( v10 == 1 )
            v7 = 16;
        }
        else
        {
          v7 = 4;
        }
      }
      else
      {
        v7 = 8;
      }
    }
    else
    {
      v7 = 2;
    }
    v11 = v7 | 1;
    _m_prefetchw(reporting);
    exchange = reporting->reported.exchange;
    do
    {
      v13 = exchange;
      exchange = _InterlockedCompareExchange((volatile signed __int32 *)reporting, v11 | exchange, exchange);
    }
    while ( v13 != exchange );
    v6->queueBackground = (exchange & 1) == 0;
    LOBYTE(v4) = (exchange & v11 & 0xFFFFFFFE) == (v11 & 0xFFFFFFFE);
    v6->ignoredUse = v4;
    return v6;
  }
  if ( kind == 4 )
  {
LABEL_27:
    wil_details_FeatureReporting_IncrementUsageInCache(reporting, (wil_details_ServiceReportingKind)kind, kind, result);
    return v6;
  }
  if ( kind == 5 )
    goto LABEL_26;
  if ( (unsigned int)(kind - 6) <= 1 )
    goto LABEL_8;
LABEL_19:
  v14 = kind - 320;
  if ( (unsigned int)(kind - 320) < 0x40 )
  {
    v15 = reporting->recorded.exchange;
    do
    {
      if ( (v15 & 0x10) == 0 || (v16 = 1, ((v15 >> 5) & 0x3F) != v14) )
        v16 = 0;
      result->ignoredUse = v16;
      v17 = v15;
      v15 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&reporting->recorded,
              (32 * (v14 & 0x3F)) | v15 & 0xFFFFF81F | 0x10,
              v15);
    }
    while ( v17 != v15 );
  }
  result->kindImmediate = kind;
  result->countImmediate = 1;
  result->payloadId = 0;
  return v6;
}

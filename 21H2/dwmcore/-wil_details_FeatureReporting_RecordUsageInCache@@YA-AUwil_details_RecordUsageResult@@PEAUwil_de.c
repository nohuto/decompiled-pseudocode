/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1800D2418
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18010365C (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x18018FEE8 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x18018FFD0 (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, volatile signed __int32 *a2, int a3)
{
  int v3; // r11d
  _DWORD *v5; // r9
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // edx
  signed __int32 v9; // eax
  int v11; // r8d
  int v12; // r8d
  int v13; // ebx
  unsigned __int32 v14; // eax
  int v15; // ecx
  unsigned __int32 v16; // ett

  v3 = 0;
  v5 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !a3 )
    goto LABEL_27;
  if ( a3 == 1 )
  {
LABEL_26:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a2, (unsigned int)a3);
    return v5;
  }
  if ( a3 <= 1 )
    goto LABEL_19;
  if ( a3 <= 3 )
  {
LABEL_5:
    v6 = 0;
    v7 = a3 - 2;
    if ( v7 )
    {
      v11 = v7 - 1;
      if ( v11 )
      {
        v12 = v11 - 3;
        if ( v12 )
        {
          if ( v12 == 1 )
            v6 = 16;
        }
        else
        {
          v6 = 4;
        }
      }
      else
      {
        v6 = 8;
      }
    }
    else
    {
      v6 = 2;
    }
    v8 = v6 | 1;
    _m_prefetchw((const void *)a2);
    v9 = _InterlockedOr(a2, v8);
    *v5 = (v9 & 1) == 0;
    LOBYTE(v3) = (v8 & 0xFFFFFFFE & v9) == (v8 & 0xFFFFFFFE);
    v5[4] = v3;
    return v5;
  }
  if ( a3 == 4 )
  {
LABEL_27:
    wil_details_FeatureReporting_IncrementUsageInCache(a2, (unsigned int)a3);
    return v5;
  }
  if ( a3 == 5 )
    goto LABEL_26;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_5;
LABEL_19:
  v13 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v14 = *((_DWORD *)a2 + 1);
    do
    {
      if ( (v14 & 0x10) == 0 || (v15 = 1, ((v14 >> 5) & 0x3F) != v13) )
        v15 = 0;
      v5[4] = v15;
      v16 = v14;
      v14 = _InterlockedCompareExchange(a2 + 1, (32 * (v13 & 0x3F)) | v14 & 0xFFFFF81F | 0x10, v14);
    }
    while ( v16 != v14 );
  }
  v5[2] = a3;
  v5[1] = 1;
  v5[3] = 0;
  return v5;
}

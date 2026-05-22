/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18003EA80
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18003E77C (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x18003E8AC (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x18003E994 (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  int v3; // r11d
  _DWORD *v5; // r9
  int v6; // edx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  unsigned int v10; // edx
  signed __int32 v11; // eax
  int v12; // ebx
  unsigned __int32 v13; // eax
  int v14; // ecx
  unsigned __int32 v15; // ett

  v3 = 0;
  v5 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !(_DWORD)a3 )
    goto LABEL_25;
  if ( (_DWORD)a3 == 1 )
  {
LABEL_24:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a3, (_DWORD *)a1);
    return v5;
  }
  if ( (int)a3 <= 1 )
    goto LABEL_17;
  if ( (int)a3 <= 3 )
  {
LABEL_8:
    v6 = 0;
    v7 = a3 - 2;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 3;
        if ( v9 )
        {
          if ( v9 == 1 )
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
    v10 = v6 | 1;
    _m_prefetchw((const void *)a2);
    v11 = _InterlockedOr(a2, v10);
    *v5 = (v11 & 1) == 0;
    LOBYTE(v3) = (v10 & 0xFFFFFFFE & v11) == (v10 & 0xFFFFFFFE);
    v5[4] = v3;
    return v5;
  }
  if ( (_DWORD)a3 == 4 )
  {
LABEL_25:
    wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a3, (_DWORD *)a1);
    return v5;
  }
  if ( (_DWORD)a3 == 5 )
    goto LABEL_24;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_17:
  v12 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v13 = *((_DWORD *)a2 + 1);
    do
    {
      if ( (v13 & 0x10) == 0 || (v14 = 1, ((v13 >> 5) & 0x3F) != v12) )
        v14 = 0;
      v5[4] = v14;
      v15 = v13;
      v13 = _InterlockedCompareExchange(a2 + 1, (32 * (v12 & 0x3F)) | v13 & 0xFFFFF81F | 0x10, v13);
    }
    while ( v15 != v13 );
  }
  v5[2] = a3;
  v5[1] = 1;
  v5[3] = 0;
  return v5;
}

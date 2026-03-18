/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C015A9B8
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C015AB94 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1C015A7E4 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1C015A8CC (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  int v3; // r11d
  _DWORD *v5; // r9
  int v6; // ecx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // ecx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  int v13; // ebx
  unsigned __int32 v14; // eax
  int v15; // edx
  unsigned __int32 v16; // ett

  v3 = 0;
  v5 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !(_DWORD)a3 )
    goto LABEL_27;
  if ( (_DWORD)a3 == 1 )
  {
LABEL_26:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a3, (_DWORD *)a1);
    return v5;
  }
  if ( (int)a3 <= 1 )
    goto LABEL_19;
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
    v11 = *a2;
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange(a2, v10 | v11, v11);
    }
    while ( v12 != v11 );
    *v5 = (v11 & 1) == 0;
    LOBYTE(v3) = (v11 & v10 & 0xFFFFFFFE) == (v10 & 0xFFFFFFFE);
    v5[4] = v3;
    return v5;
  }
  if ( (_DWORD)a3 == 4 )
  {
LABEL_27:
    wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a3, (_DWORD *)a1);
    return v5;
  }
  if ( (_DWORD)a3 == 5 )
    goto LABEL_26;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_19:
  v13 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v14 = *((_DWORD *)a2 + 1);
    do
    {
      if ( (v14 & 0x10) == 0 || (v15 = 1, ((v14 >> 5) & 0x3F) != v13) )
        v15 = 0;
      *(_DWORD *)(a1 + 16) = v15;
      v16 = v14;
      v14 = _InterlockedCompareExchange(a2 + 1, (32 * (v13 & 0x3F)) | v14 & 0xFFFFF81F | 0x10, v14);
    }
    while ( v16 != v14 );
  }
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 12) = 0;
  return v5;
}

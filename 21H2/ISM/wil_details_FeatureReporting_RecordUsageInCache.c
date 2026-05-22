/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x18003F3A8
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18003F0A4 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x18003F1D4 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x18003F2BC (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

int *__fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  int *v4; // r9
  int v5; // r10d
  int v6; // edx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  signed __int32 i; // ecx
  signed __int32 v11; // ebx
  signed __int32 v12; // eax
  int v13; // ebx
  unsigned __int32 v14; // eax
  BOOL v15; // ecx
  unsigned __int32 v16; // ett

  v4 = (int *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !(_DWORD)a3 )
    goto LABEL_35;
  v5 = 1;
  if ( (_DWORD)a3 == 1 )
  {
LABEL_34:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a3, (_DWORD *)a1);
    return v4;
  }
  if ( (int)a3 <= 1 )
    goto LABEL_25;
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
    for ( i = *a2; ; i = v12 )
    {
      v11 = i | v6 | 1;
      v4[4] = (i | v6) == i;
      if ( (i | v6) == i )
        v11 = i | v6;
      v12 = _InterlockedCompareExchange(a2, v11, i);
      if ( i == v12 )
        break;
    }
    if ( (v11 & 1) == 0 || (i & 1) != 0 )
      v5 = 0;
    *v4 = v5;
    return v4;
  }
  if ( (_DWORD)a3 == 4 )
  {
LABEL_35:
    wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a3, (_DWORD *)a1);
    return v4;
  }
  if ( (_DWORD)a3 == 5 )
    goto LABEL_34;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_25:
  v13 = a3 - 320;
  if ( (unsigned int)(a3 - 320) >= 0x40 )
    goto LABEL_33;
  v14 = *((_DWORD *)a2 + 1);
  do
  {
    v15 = (v14 & 0x10) != 0 && ((v14 >> 5) & 0x3F) == v13;
    v4[4] = v15;
    v16 = v14;
    v14 = _InterlockedCompareExchange(a2 + 1, (32 * (v13 & 0x3F)) | v14 & 0xFFFFF81F | 0x10, v14);
  }
  while ( v16 != v14 );
  if ( !v4[4] )
  {
LABEL_33:
    v4[3] = 0;
    v4[2] = a3;
    v4[1] = 1;
  }
  return v4;
}

/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x14033A9AC
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14033A8FC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1404C00E0 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1404C01D4 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        signed __int32 *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  int v6; // r8d
  _DWORD *v9; // r9
  int v10; // ecx
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // ecx
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  int v18; // ebx
  unsigned __int32 v19; // eax
  int v20; // edx
  unsigned __int32 v21; // ett

  v6 = 0;
  v9 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !a3 )
    goto LABEL_28;
  if ( a3 == 1 )
  {
LABEL_27:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a2, (unsigned int)a3, a5, a1);
    return v9;
  }
  if ( a3 <= 1 )
    goto LABEL_20;
  if ( a3 <= 3 )
  {
LABEL_8:
    v10 = 0;
    v11 = a3 - 2;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 3;
        if ( v13 )
        {
          if ( v13 == 1 )
            v10 = 16;
        }
        else
        {
          v10 = 4;
        }
      }
      else
      {
        v10 = 8;
      }
    }
    else
    {
      v10 = 2;
    }
    v14 = v10 | 1;
    _m_prefetchw(a2);
    v15 = *a2;
    do
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange(a2, v14 | v15, v15);
    }
    while ( v16 != v15 );
    *v9 = (v15 & 1) == 0;
    LOBYTE(v6) = (v15 & v14 & 0xFFFFFFFE) == (v14 & 0xFFFFFFFE);
    v9[4] = v6;
    return v9;
  }
  if ( a3 == 4 )
  {
LABEL_28:
    wil_details_FeatureReporting_IncrementUsageInCache(a2, (unsigned int)a3, a5, a1);
    return v9;
  }
  if ( a3 == 5 )
    goto LABEL_27;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_20:
  v18 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v19 = a2[1];
    do
    {
      if ( (v19 & 0x10) == 0 || (v20 = 1, ((v19 >> 5) & 0x3F) != v18) )
        v20 = 0;
      *(_DWORD *)(a1 + 16) = v20;
      v21 = v19;
      v19 = _InterlockedCompareExchange(a2 + 1, (32 * (v18 & 0x3F)) | v19 & 0xFFFFF81F | 0x10, v19);
    }
    while ( v21 != v19 );
  }
  *(_DWORD *)(a1 + 4) = a5;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  return v9;
}

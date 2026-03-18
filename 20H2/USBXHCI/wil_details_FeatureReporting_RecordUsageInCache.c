/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x1C001A4B0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C001A680 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1C001A2DC (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1C001A3C4 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r10d
  _DWORD *v4; // r9
  int v5; // ecx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  unsigned int v9; // ecx
  signed __int32 v10; // eax
  int v11; // r11d
  unsigned __int32 v12; // eax
  int v13; // edx
  unsigned __int32 v14; // ett

  v3 = 0;
  v4 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !(_DWORD)a3 )
    goto LABEL_25;
  if ( (_DWORD)a3 == 1 )
  {
LABEL_24:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a1, a3, a3, (_DWORD *)a1);
    return v4;
  }
  if ( (int)a3 <= 1 )
    goto LABEL_17;
  if ( (int)a3 <= 3 )
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
    _m_prefetchw(&Feature_Servicing_LimitNXPXHCIControllerTo32bitDMA__private_reporting);
    v10 = _InterlockedOr(&Feature_Servicing_LimitNXPXHCIControllerTo32bitDMA__private_reporting, v9);
    *v4 = (v10 & 1) == 0;
    LOBYTE(v3) = (v10 & v9 & 0xFFFFFFFE) == (v9 & 0xFFFFFFFE);
    v4[4] = v3;
    return v4;
  }
  if ( (_DWORD)a3 == 4 )
  {
LABEL_25:
    wil_details_FeatureReporting_IncrementUsageInCache(a1, a3, a3, (_DWORD *)a1);
    return v4;
  }
  if ( (_DWORD)a3 == 5 )
    goto LABEL_24;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_17:
  v11 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v12 = dword_1C00629DC;
    do
    {
      if ( (v12 & 0x10) == 0 || (v13 = 1, ((v12 >> 5) & 0x3F) != v11) )
        v13 = 0;
      *(_DWORD *)(a1 + 16) = v13;
      v14 = v12;
      v12 = _InterlockedCompareExchange(&dword_1C00629DC, (32 * (v11 & 0x3F)) | v12 & 0xFFFFF81F | 0x10, v12);
    }
    while ( v14 != v12 );
  }
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 12) = 0;
  return v4;
}

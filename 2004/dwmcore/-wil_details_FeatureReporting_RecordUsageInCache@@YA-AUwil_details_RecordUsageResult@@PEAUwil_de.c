/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005F2F0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18005DE00 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800A35EC (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x180157A5C (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x180157B44 (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  int v3; // r11d
  _DWORD *v5; // r9
  int v6; // r8d
  int v7; // ecx
  unsigned int v8; // ecx
  signed __int32 v9; // eax
  int v11; // r11d
  int v12; // r11d
  int v13; // edx
  unsigned __int32 v14; // eax
  int v15; // ecx
  unsigned __int32 v16; // ett

  v3 = a3;
  v5 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_DWORD)a3 == 2 )
  {
LABEL_2:
    v6 = 0;
    v7 = 0;
    if ( v3 == 2 )
    {
      v7 = 2;
    }
    else
    {
      v11 = v3 - 3;
      if ( v11 )
      {
        v12 = v11 - 3;
        if ( v12 )
        {
          if ( v12 == 1 )
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
    v8 = v7 | 1;
    _m_prefetchw((const void *)a2);
    v9 = _InterlockedOr(a2, v8);
    *v5 = (v9 & 1) == 0;
    LOBYTE(v6) = (v8 & 0xFFFFFFFE & v9) == (v8 & 0xFFFFFFFE);
    v5[4] = v6;
  }
  else
  {
    switch ( (int)a3 )
    {
      case 0:
      case 4:
        wil_details_FeatureReporting_IncrementUsageInCache(a2, (unsigned int)a3, a3, a1);
        break;
      case 1:
      case 5:
        wil_details_FeatureReporting_IncrementOpportunityInCache(a2, (unsigned int)a3, a3, a1);
        break;
      case 3:
      case 6:
      case 7:
        goto LABEL_2;
      default:
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
        break;
    }
  }
  return v5;
}

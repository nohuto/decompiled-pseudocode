/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YG?AUwil_details_RecordUsageResult@@PAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0xF655C
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YGHPAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@IK@Z @ 0xF66C6 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YGHPAUwil_details_FeatureReportingCach.c)
 * Callees:
 *     _wil_atomic_uint32_compare_exchange_relaxed@12 @ 0xEF3F4 (_wil_atomic_uint32_compare_exchange_relaxed@12.c)
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YGXPAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPAUwil_details_RecordUsageResult@@@Z @ 0xF63EA (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YGXPAUwil_details_FeatureReportingCac.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YGXPAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPAUwil_details_RecordUsageResult@@@Z @ 0xF64A0 (-wil_details_FeatureReporting_IncrementUsageInCache@@YGXPAUwil_details_FeatureReportingCache@@W4.c)
 */

BOOL *__fastcall wil_details_FeatureReporting_RecordUsageInCache(int a1, int a2, BOOL *i, int a4, int a5)
{
  BOOL *v5; // ebx
  int v6; // esi
  int v7; // ecx
  unsigned int v8; // ecx
  signed __int32 v9; // eax
  int v10; // edi
  unsigned int v11; // eax
  BOOL v12; // ecx
  int v14; // [esp-4h] [ebp-14h]

  v5 = i;
  v6 = a2;
  memset(i, 0, 0x18u);
  switch ( a2 )
  {
    case 0:
    case 4:
      wil_details_FeatureReporting_IncrementUsageInCache(0, a2, 0, v5);
      return v5;
    case 1:
    case 5:
      wil_details_FeatureReporting_IncrementOpportunityInCache(0, a2, 0, v5);
      return v5;
    case 2:
    case 3:
    case 6:
    case 7:
      v7 = 0;
      switch ( a2 )
      {
        case 2:
          v14 = 2;
          break;
        case 3:
          v14 = 8;
          break;
        case 6:
          v14 = 4;
          break;
        case 7:
          v14 = 16;
          break;
        default:
          goto LABEL_11;
      }
      v7 = v14;
LABEL_11:
      v8 = v7 | 1;
      v9 = _InterlockedOr(&Feature_Servicing_DynamicModeChange_23402279__private_reporting, v8);
      *v5 = (v9 & 1) == 0;
      v5[4] = (v8 & 0xFFFFFFFE) == (v9 & v8 & 0xFFFFFFFE);
      return v5;
    default:
      v10 = a2 - 320;
      if ( (unsigned int)(a2 - 320) < 0x40 )
      {
        v11 = dword_274B5C;
        for ( i = (BOOL *)dword_274B5C; ; v11 = (unsigned int)i )
        {
          v12 = (v11 & 0x10) != 0 && ((v11 >> 5) & 0x3F) == v10;
          v5[4] = v12;
          if ( wil_atomic_uint32_compare_exchange_relaxed(
                 &dword_274B5C,
                 (signed __int32 *)&i,
                 (32 * (v10 & 0x3F)) | v11 & 0xFFFFF81F | 0x10) )
          {
            break;
          }
        }
        v6 = a2;
      }
      v5[3] = 0;
      v5[2] = v6;
      v5[1] = 1;
      return v5;
  }
}

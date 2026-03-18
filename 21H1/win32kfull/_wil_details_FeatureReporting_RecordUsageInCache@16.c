/*
 * XREFs of _wil_details_FeatureReporting_RecordUsageInCache@16 @ 0xEF58C
 * Callers:
 *     _wil_details_FeatureReporting_ReportUsageToServiceDirect@28 @ 0xEF710 (_wil_details_FeatureReporting_ReportUsageToServiceDirect@28.c)
 * Callees:
 *     _wil_atomic_uint32_compare_exchange_relaxed@12 @ 0xEF3F4 (_wil_atomic_uint32_compare_exchange_relaxed@12.c)
 *     _wil_details_FeatureReporting_IncrementOpportunityInCache@16 @ 0xEF41A (_wil_details_FeatureReporting_IncrementOpportunityInCache@16.c)
 *     _wil_details_FeatureReporting_IncrementUsageInCache@16 @ 0xEF4CE (_wil_details_FeatureReporting_IncrementUsageInCache@16.c)
 */

BOOL *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        volatile signed __int32 *a1,
        int a2,
        BOOL *i,
        int a4,
        int a5)
{
  BOOL *v5; // ebx
  int v6; // esi
  int v7; // ecx
  unsigned int v8; // ecx
  signed __int32 v9; // eax
  int v10; // edi
  BOOL *v11; // eax
  BOOL v12; // ecx
  int v14; // [esp-4h] [ebp-18h]
  volatile signed __int32 *v17; // [esp+10h] [ebp-4h]

  v5 = i;
  v6 = a2;
  memset(i, 0, 0x18u);
  switch ( a2 )
  {
    case 0:
    case 4:
      wil_details_FeatureReporting_IncrementUsageInCache(a1, a2, 0, v5);
      return v5;
    case 1:
    case 5:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a1, a2, 0, v5);
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
      v9 = _InterlockedOr(a1, v8);
      *v5 = (v9 & 1) == 0;
      v5[4] = (v8 & 0xFFFFFFFE) == (v9 & v8 & 0xFFFFFFFE);
      return v5;
    default:
      v10 = a2 - 320;
      if ( (unsigned int)(a2 - 320) < 0x40 )
      {
        v17 = a1 + 1;
        v11 = (BOOL *)*((_DWORD *)a1 + 1);
        for ( i = v11; ; v11 = i )
        {
          v12 = ((unsigned __int8)v11 & 0x10) != 0 && (((unsigned int)v11 >> 5) & 0x3F) == v10;
          v5[4] = v12;
          if ( wil_atomic_uint32_compare_exchange_relaxed(
                 v17,
                 (signed __int32 *)&i,
                 (32 * (v10 & 0x3F)) | (unsigned int)v11 & 0xFFFFF81F | 0x10) )
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

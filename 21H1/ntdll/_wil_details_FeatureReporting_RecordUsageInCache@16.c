/*
 * XREFs of _wil_details_FeatureReporting_RecordUsageInCache@16 @ 0x4B3063CE
 * Callers:
 *     _wil_details_FeatureReporting_ReportUsageToServiceDirect@28 @ 0x4B30653E (_wil_details_FeatureReporting_ReportUsageToServiceDirect@28.c)
 * Callees:
 *     _wil_atomic_uint32_compare_exchange_relaxed@12 @ 0x4B306237 (_wil_atomic_uint32_compare_exchange_relaxed@12.c)
 *     _wil_details_FeatureReporting_IncrementOpportunityInCache@16 @ 0x4B30625C (_wil_details_FeatureReporting_IncrementOpportunityInCache@16.c)
 *     _wil_details_FeatureReporting_IncrementUsageInCache@16 @ 0x4B306312 (_wil_details_FeatureReporting_IncrementUsageInCache@16.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // ecx
  unsigned int v8; // ecx
  signed __int32 v9; // eax
  int v10; // edi
  unsigned int v11; // eax
  BOOL v12; // ecx
  int v14; // [esp-4h] [ebp-18h]
  unsigned int i; // [esp+10h] [ebp-4h] BYREF

  v6 = a2;
  memset(a3, 0, 0x18u);
  switch ( a2 )
  {
    case 0:
    case 4:
      wil_details_FeatureReporting_IncrementUsageInCache(0, a2, 0, a3);
      return a3;
    case 1:
    case 5:
      wil_details_FeatureReporting_IncrementOpportunityInCache(0, a2, 0, a3);
      return a3;
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
      v9 = _InterlockedOr(&Feature_SearchPackagePaths__private_reporting, v8);
      *a3 = (v9 & 1) == 0;
      a3[4] = (v8 & 0xFFFFFFFE) == (v8 & 0xFFFFFFFE & v9);
      return a3;
    default:
      v10 = a2 - 320;
      if ( (unsigned int)(a2 - 320) < 0x40 )
      {
        v11 = dword_4B3A67E4;
        for ( i = dword_4B3A67E4; ; v11 = i )
        {
          v12 = (v11 & 0x10) != 0 && ((v11 >> 5) & 0x3F) == v10;
          a3[4] = v12;
          if ( wil_atomic_uint32_compare_exchange_relaxed(
                 &dword_4B3A67E4,
                 (signed __int32 *)&i,
                 (32 * (v10 & 0x3F)) | v11 & 0xFFFFF81F | 0x10) )
          {
            break;
          }
        }
        v6 = a2;
      }
      a3[3] = 0;
      a3[2] = v6;
      a3[1] = 1;
      return a3;
  }
}

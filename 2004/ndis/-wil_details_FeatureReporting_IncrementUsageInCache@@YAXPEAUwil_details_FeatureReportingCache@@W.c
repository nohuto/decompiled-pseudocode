/*
 * XREFs of ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1C003D99C
 * Callers:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C003DA88 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
        struct wil_details_FeatureReportingCache *a1,
        enum wil_details_ServiceReportingKind a2,
        __int64 a3,
        struct wil_details_RecordUsageResult *a4)
{
  signed __int32 exchange; // r8d
  BOOL v6; // ebx
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // r10d
  unsigned __int64 v10; // rdx
  signed __int32 v11; // eax

  exchange = a1->reported.exchange;
  v6 = a2 == wil_details_ServiceReportingKind_PotentialUniqueUsage;
  while ( 1 )
  {
    a4->countImmediate = 0;
    v7 = exchange | 1;
    if ( (((exchange | 1u) >> 14) & 1) != v6 )
    {
      if ( ((v7 >> 5) & 0x1FF) != 0 )
      {
        a4->countImmediate = (v7 >> 5) & 0x1FF;
        a4->kindImmediate = a2 == wil_details_ServiceReportingKind_UniqueUsage
                          ? wil_details_ServiceReportingKind_PotentialUniqueUsage
                          : wil_details_ServiceReportingKind_UniqueUsage;
        v7 = exchange & 0xFFFFC01E | 1;
      }
      v8 = 0;
      if ( a2 == wil_details_ServiceReportingKind_PotentialUniqueUsage )
        v8 = 0x4000;
      v7 = v7 & 0xFFFFBFFF | v8;
    }
    v9 = (v7 >> 5) & 0x1FF;
    v10 = v9 + 1;
    if ( v10 > 0x1FF || v10 < (((unsigned __int64)v7 >> 5) & 0x1FF) )
    {
      LOWORD(v10) = 1;
      a4->kindImmediate = a2;
      a4->countImmediate = v9;
    }
    v11 = _InterlockedCompareExchange(
            (volatile signed __int32 *)a1,
            v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(32 * v10)) & 0x3FE0,
            exchange);
    if ( exchange == v11 )
      break;
    exchange = v11;
  }
  a4->ignoredUse = 0;
  a4->queueBackground = (exchange & 1) == 0;
}

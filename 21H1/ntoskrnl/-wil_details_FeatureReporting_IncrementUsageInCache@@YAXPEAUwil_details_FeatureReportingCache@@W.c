/*
 * XREFs of ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1405BAC3C
 * Callers:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1402D4560 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
        struct wil_details_FeatureReportingCache *a1,
        enum wil_details_ServiceReportingKind a2,
        __int64 a3,
        struct wil_details_RecordUsageResult *a4)
{
  signed __int32 i; // ecx
  unsigned int v5; // eax
  int v6; // r8d
  unsigned int v7; // r10d
  unsigned __int64 v8; // r8
  signed __int32 v9; // eax

  for ( i = dword_140CDB448; ; i = v9 )
  {
    a4->countImmediate = 0;
    v5 = i | 1;
    if ( (((i | 1u) >> 14) & 1) != (a2 == wil_details_ServiceReportingKind_PotentialUniqueUsage) )
    {
      if ( ((v5 >> 5) & 0x1FF) != 0 )
      {
        a4->countImmediate = (v5 >> 5) & 0x1FF;
        a4->kindImmediate = a2 == wil_details_ServiceReportingKind_UniqueUsage
                          ? wil_details_ServiceReportingKind_PotentialUniqueUsage
                          : wil_details_ServiceReportingKind_UniqueUsage;
        v5 = i & 0xFFFFC01E | 1;
      }
      v6 = 0;
      if ( a2 == wil_details_ServiceReportingKind_PotentialUniqueUsage )
        v6 = 0x4000;
      v5 = v5 & 0xFFFFBFFF | v6;
    }
    v7 = (v5 >> 5) & 0x1FF;
    v8 = v7 + 1;
    if ( v8 > 0x1FF || v8 < (((unsigned __int64)v5 >> 5) & 0x1FF) )
    {
      LOWORD(v8) = 1;
      a4->kindImmediate = a2;
      a4->countImmediate = v7;
    }
    v9 = _InterlockedCompareExchange(
           &dword_140CDB448,
           v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)(32 * v8)) & 0x3FE0,
           i);
    if ( i == v9 )
      break;
  }
  a4->ignoredUse = 0;
  a4->queueBackground = (i & 1) == 0;
}

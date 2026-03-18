/*
 * XREFs of ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1405BB274
 * Callers:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x14026ABC0 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(
        struct wil_details_FeatureReportingCache *a1,
        enum wil_details_ServiceReportingKind a2,
        __int64 a3,
        struct wil_details_RecordUsageResult *a4)
{
  signed __int32 v4; // ecx
  BOOL v6; // ebx
  unsigned int v7; // eax
  wil_details_ServiceReportingKind v8; // edx
  int v9; // r8d
  unsigned int v10; // r10d
  unsigned __int64 v11; // r8
  signed __int32 v12; // eax

  v4 = dword_140CDB308;
  v6 = a2 == wil_details_ServiceReportingKind_PotentialUniqueOpportunity;
  while ( 1 )
  {
    a4->countImmediate = 0;
    v7 = v4 | 1;
    if ( (((v4 | 1u) >> 22) & 1) != v6 )
    {
      if ( ((v7 >> 15) & 0x7F) != 0 )
      {
        a4->countImmediate = (v7 >> 15) & 0x7F;
        v8 = wil_details_ServiceReportingKind_PotentialUniqueOpportunity;
        if ( a2 != wil_details_ServiceReportingKind_UniqueOpportunity )
          v8 = wil_details_ServiceReportingKind_UniqueOpportunity;
        v7 = v4 & 0xFFC07FFE | 1;
        a4->kindImmediate = v8;
      }
      v9 = 0;
      if ( a2 == wil_details_ServiceReportingKind_PotentialUniqueOpportunity )
        v9 = 0x400000;
      v7 = v7 & 0xFFBFFFFF | v9;
    }
    v10 = (v7 >> 15) & 0x7F;
    v11 = v10 + 1;
    if ( v11 > 0x7F || v11 < ((v7 >> 15) & 0x7F) )
    {
      LODWORD(v11) = 1;
      a4->kindImmediate = a2;
      a4->countImmediate = v10;
    }
    v12 = _InterlockedCompareExchange(&dword_140CDB308, v7 ^ (v7 ^ ((_DWORD)v11 << 15)) & 0x3F8000, v4);
    if ( v4 == v12 )
      break;
    v4 = v12;
  }
  a4->ignoredUse = 0;
  a4->queueBackground = (v4 & 1) == 0;
}

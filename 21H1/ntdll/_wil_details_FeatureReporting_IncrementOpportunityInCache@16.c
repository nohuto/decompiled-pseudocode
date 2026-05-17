/*
 * XREFs of _wil_details_FeatureReporting_IncrementOpportunityInCache@16 @ 0x4B30625C
 * Callers:
 *     _wil_details_FeatureReporting_RecordUsageInCache@16 @ 0x4B3063CE (_wil_details_FeatureReporting_RecordUsageInCache@16.c)
 * Callees:
 *     _wil_atomic_uint32_compare_exchange_relaxed@12 @ 0x4B306237 (_wil_atomic_uint32_compare_exchange_relaxed@12.c)
 */

BOOL __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(int a1, int a2, int a3, BOOL *a4)
{
  int v4; // eax
  int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ecx
  bool v10; // zf
  BOOL result; // eax
  signed __int32 v12; // [esp+Ch] [ebp-4h] BYREF

  v4 = Feature_SearchPackagePaths__private_reporting;
  v12 = Feature_SearchPackagePaths__private_reporting;
  v6 = a2 == 5;
  do
  {
    a4[1] = 0;
    v7 = v4 | 1;
    if ( ((v7 >> 22) & 1) != v6 )
    {
      if ( ((v7 >> 15) & 0x7F) != 0 )
      {
        a4[1] = (v7 >> 15) & 0x7F;
        v7 &= 0xFFC07FFF;
        a4[2] = 4 * (a2 == 1) + 1;
      }
      v7 = (v6 << 22) | v7 & 0xFFBFFFFF;
    }
    v8 = (v7 >> 15) & 0x7F;
    v9 = v8 + 1;
    if ( v8 + 1 > 0x7F || v9 < v8 )
    {
      a4[2] = a2;
      v9 = 1;
      a4[1] = v8;
    }
    v10 = wil_atomic_uint32_compare_exchange_relaxed(
            &Feature_SearchPackagePaths__private_reporting,
            &v12,
            v7 ^ (v7 ^ (v9 << 15)) & 0x3F8000) == 0;
    v4 = v12;
  }
  while ( v10 );
  result = (v12 & 1) == 0;
  a4[4] = 0;
  *a4 = result;
  return result;
}

/*
 * XREFs of _wil_details_FeatureReporting_IncrementUsageInCache@16 @ 0x4B306312
 * Callers:
 *     _wil_details_FeatureReporting_RecordUsageInCache@16 @ 0x4B3063CE (_wil_details_FeatureReporting_RecordUsageInCache@16.c)
 * Callees:
 *     _wil_atomic_uint32_compare_exchange_relaxed@12 @ 0x4B306237 (_wil_atomic_uint32_compare_exchange_relaxed@12.c)
 */

BOOL __fastcall wil_details_FeatureReporting_IncrementUsageInCache(int a1, int a2, int a3, BOOL *a4)
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
  v6 = a2 == 4;
  do
  {
    a4[1] = 0;
    v7 = v4 | 1;
    if ( ((v7 >> 14) & 1) != v6 )
    {
      if ( ((v7 >> 5) & 0x1FF) != 0 )
      {
        a4[1] = (v7 >> 5) & 0x1FF;
        v7 &= 0xFFFFC01F;
        a4[2] = a2 != 0 ? 0 : 4;
      }
      v7 = (v6 << 14) | v7 & 0xFFFFBFFF;
    }
    v8 = (v7 >> 5) & 0x1FF;
    v9 = v8 + 1;
    if ( v8 + 1 > 0x1FF || v9 < v8 )
    {
      a4[2] = a2;
      LOWORD(v9) = 1;
      a4[1] = v8;
    }
    v10 = wil_atomic_uint32_compare_exchange_relaxed(
            &Feature_SearchPackagePaths__private_reporting,
            &v12,
            v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(32 * v9)) & 0x3FE0) == 0;
    v4 = v12;
  }
  while ( v10 );
  result = (v12 & 1) == 0;
  a4[4] = 0;
  *a4 = result;
  return result;
}

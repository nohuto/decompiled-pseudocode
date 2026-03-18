/*
 * XREFs of _wil_details_FeatureReporting_IncrementOpportunityInCache@16 @ 0xEF41A
 * Callers:
 *     _wil_details_FeatureReporting_RecordUsageInCache@16 @ 0xEF58C (_wil_details_FeatureReporting_RecordUsageInCache@16.c)
 * Callees:
 *     _wil_atomic_uint32_compare_exchange_relaxed@12 @ 0xEF3F4 (_wil_atomic_uint32_compare_exchange_relaxed@12.c)
 */

BOOL __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(
        volatile signed __int32 *a1,
        int a2,
        int a3,
        BOOL *a4)
{
  volatile signed __int32 v5; // eax
  int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ecx
  bool v10; // zf
  BOOL result; // eax
  volatile signed __int32 v13; // [esp+10h] [ebp-4h] BYREF

  v5 = *a1;
  v13 = *a1;
  v6 = a2 == 5;
  do
  {
    a4[1] = 0;
    v7 = v5 | 1;
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
    v10 = wil_atomic_uint32_compare_exchange_relaxed(a1, (signed __int32 *)&v13, v7 ^ (v7 ^ (v9 << 15)) & 0x3F8000) == 0;
    v5 = v13;
  }
  while ( v10 );
  result = (v13 & 1) == 0;
  a4[4] = 0;
  *a4 = result;
  return result;
}

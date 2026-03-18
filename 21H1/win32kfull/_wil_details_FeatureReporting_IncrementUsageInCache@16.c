/*
 * XREFs of _wil_details_FeatureReporting_IncrementUsageInCache@16 @ 0xEF4CE
 * Callers:
 *     _wil_details_FeatureReporting_RecordUsageInCache@16 @ 0xEF58C (_wil_details_FeatureReporting_RecordUsageInCache@16.c)
 * Callees:
 *     _wil_atomic_uint32_compare_exchange_relaxed@12 @ 0xEF3F4 (_wil_atomic_uint32_compare_exchange_relaxed@12.c)
 */

BOOL __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
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
  v6 = a2 == 4;
  do
  {
    a4[1] = 0;
    v7 = v5 | 1;
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
            a1,
            (signed __int32 *)&v13,
            v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(32 * v9)) & 0x3FE0) == 0;
    v5 = v13;
  }
  while ( v10 );
  result = (v13 & 1) == 0;
  a4[4] = 0;
  *a4 = result;
  return result;
}

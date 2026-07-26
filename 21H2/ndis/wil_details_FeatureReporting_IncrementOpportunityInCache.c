/*
 * XREFs of wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1C003DC6C
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C003DE40 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  signed __int32 v4; // r8d
  BOOL v7; // ebx
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // r10d
  unsigned __int64 v12; // rdx
  __int64 result; // rax

  v4 = *a1;
  v7 = a2 == 5;
  while ( 1 )
  {
    a4[1] = 0;
    v8 = v4 | 1;
    if ( (((v4 | 1u) >> 22) & 1) != v7 )
    {
      if ( ((v8 >> 15) & 0x7F) != 0 )
      {
        a4[1] = (v8 >> 15) & 0x7F;
        v9 = 5;
        if ( a2 != 1 )
          v9 = 1;
        v8 = v4 & 0xFFC07FFE | 1;
        a4[2] = v9;
      }
      v10 = 0;
      if ( a2 == 5 )
        v10 = 0x400000;
      v8 = v8 & 0xFFBFFFFF | v10;
    }
    v11 = (v8 >> 15) & 0x7F;
    v12 = (unsigned int)(v11 + 1);
    if ( v12 > 0x7F || v12 < ((v8 >> 15) & 0x7F) )
    {
      LODWORD(v12) = 1;
      a4[2] = a2;
      a4[1] = v11;
    }
    result = (unsigned int)_InterlockedCompareExchange(a1, v8 ^ (v8 ^ ((_DWORD)v12 << 15)) & 0x3F8000, v4);
    if ( v4 == (_DWORD)result )
      break;
    v4 = result;
  }
  a4[4] = 0;
  *a4 = (v4 & 1) == 0;
  return result;
}

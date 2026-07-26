/*
 * XREFs of wil_details_FeatureReporting_IncrementUsageInCache @ 0x1C003DD54
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C003DE40 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  signed __int32 v4; // r8d
  BOOL v6; // ebx
  unsigned int v7; // eax
  int v8; // edx
  int v9; // r10d
  unsigned __int64 v10; // rdx
  __int64 result; // rax

  v4 = *a1;
  v6 = a2 == 4;
  while ( 1 )
  {
    a4[1] = 0;
    v7 = v4 | 1;
    if ( (((v4 | 1u) >> 14) & 1) != v6 )
    {
      if ( ((v7 >> 5) & 0x1FF) != 0 )
      {
        a4[1] = (v7 >> 5) & 0x1FF;
        a4[2] = a2 == 0 ? 4 : 0;
        v7 = v4 & 0xFFFFC01E | 1;
      }
      v8 = 0;
      if ( a2 == 4 )
        v8 = 0x4000;
      v7 = v7 & 0xFFFFBFFF | v8;
    }
    v9 = (v7 >> 5) & 0x1FF;
    v10 = (unsigned int)(v9 + 1);
    if ( v10 > 0x1FF || v10 < (((unsigned __int64)v7 >> 5) & 0x1FF) )
    {
      LOWORD(v10) = 1;
      a4[2] = a2;
      a4[1] = v9;
    }
    result = (unsigned int)_InterlockedCompareExchange(
                             a1,
                             v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(32 * v10)) & 0x3FE0,
                             v4);
    if ( v4 == (_DWORD)result )
      break;
    v4 = result;
  }
  a4[4] = 0;
  *a4 = (v4 & 1) == 0;
  return result;
}

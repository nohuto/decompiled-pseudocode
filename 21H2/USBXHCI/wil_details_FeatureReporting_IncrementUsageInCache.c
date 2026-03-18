/*
 * XREFs of wil_details_FeatureReporting_IncrementUsageInCache @ 0x1C0019240
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C001932C (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementUsageInCache(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  signed __int32 i; // ecx
  unsigned int v5; // eax
  int v6; // r8d
  int v7; // r10d
  unsigned __int64 v8; // r8
  __int64 result; // rax

  for ( i = Feature_Servicing_BSOD_AMD_BDF_34884382__private_reporting; ; i = result )
  {
    a4[1] = 0;
    v5 = i | 1;
    if ( (((i | 1u) >> 14) & 1) != (a2 == 4) )
    {
      if ( ((v5 >> 5) & 0x1FF) != 0 )
      {
        a4[1] = (v5 >> 5) & 0x1FF;
        a4[2] = a2 == 0 ? 4 : 0;
        v5 = i & 0xFFFFC01E | 1;
      }
      v6 = 0;
      if ( a2 == 4 )
        v6 = 0x4000;
      v5 = v5 & 0xFFFFBFFF | v6;
    }
    v7 = (v5 >> 5) & 0x1FF;
    v8 = (unsigned int)(v7 + 1);
    if ( v8 > 0x1FF || v8 < (((unsigned __int64)v5 >> 5) & 0x1FF) )
    {
      LOWORD(v8) = 1;
      a4[2] = a2;
      a4[1] = v7;
    }
    result = (unsigned int)_InterlockedCompareExchange(
                             &Feature_Servicing_BSOD_AMD_BDF_34884382__private_reporting,
                             v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)(32 * v8)) & 0x3FE0,
                             i);
    if ( i == (_DWORD)result )
      break;
  }
  a4[4] = 0;
  *a4 = (i & 1) == 0;
  return result;
}

/*
 * XREFs of _RtlpFcQueryFeatureConfigurationFromBuffers@16 @ 0x4B3A1319
 * Callers:
 *     _RtlpFcQueryFeatureConfigurationFromBufferSet@16 @ 0x4B3A1121 (_RtlpFcQueryFeatureConfigurationFromBufferSet@16.c)
 * Callees:
 *     _RtlpFcLinearSearchInSortedArray@20 @ 0x4B3A119D (_RtlpFcLinearSearchInSortedArray@20.c)
 *     _RtlpFcLowerBounds@20 @ 0x4B3A11DC (_RtlpFcLowerBounds@20.c)
 */

int __fastcall RtlpFcQueryFeatureConfigurationFromBuffers(unsigned int a1, int a2, int a3, unsigned int *a4)
{
  unsigned int *v4; // eax
  int v5; // ebx
  unsigned int *v6; // esi
  unsigned int *v7; // edi
  unsigned int v8; // edx
  unsigned int *v9; // eax
  unsigned int *v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int *v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int *v17; // [esp+Ch] [ebp-Ch]
  unsigned int *v18; // [esp+Ch] [ebp-Ch]
  unsigned int *v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+14h] [ebp-4h] BYREF

  v4 = *(unsigned int **)(a2 + 8);
  v5 = 0;
  v20 = a1;
  v17 = v4;
  v6 = 0;
  v7 = a4;
  if ( !v4 )
    goto LABEL_11;
  v8 = (unsigned int)(v4 + 1);
  if ( *v4 )
  {
    v9 = (unsigned int *)RtlpFcLowerBounds(
                           (int)&v20,
                           v8,
                           *v4,
                           12,
                           (int (__fastcall *)(int, unsigned int))RtlFcpCompareFeatureIdToFeatureUsageSubscription);
    v19 = v9;
    a1 = v20;
    if ( v9 != &v17[3 * *v17 + 1] && *v9 == v20 )
      goto LABEL_8;
    v9 = 0;
  }
  else
  {
    v9 = (unsigned int *)RtlpFcLinearSearchInSortedArray(
                           (int)&v20,
                           v8,
                           0,
                           12,
                           (int (__fastcall *)(int, int))RtlFcpCompareFeatureIdToFeatureUsageSubscription);
    a1 = v20;
  }
  v19 = v9;
LABEL_8:
  if ( v9 )
  {
    *a4 = *v9;
    a4[1] = v9[1];
    a4[2] = v9[2];
    v7 = a4;
    v6 = v19;
    goto LABEL_12;
  }
  v6 = v19;
LABEL_11:
  a4[1] = 0;
  a4[2] = 0;
  *a4 = a1;
LABEL_12:
  v10 = *(unsigned int **)(a3 + 8);
  v18 = v10;
  if ( v10 )
  {
    v12 = (unsigned int)(v10 + 1);
    if ( *v10 )
    {
      v13 = (unsigned int *)RtlpFcLowerBounds(
                              (int)&v20,
                              v12,
                              *v10,
                              16,
                              (int (__fastcall *)(int, unsigned int))RtlFcpCompareFeatureIdToFeatureUsageSubscription);
      if ( v13 != &v18[4 * *v18 + 1] && *v13 == v20 )
        v14 = (int)v13;
      else
        v14 = 0;
    }
    else
    {
      v14 = RtlpFcLinearSearchInSortedArray(
              (int)&v20,
              v12,
              0,
              16,
              (int (__fastcall *)(int, int))RtlFcpCompareFeatureIdToFeatureUsageSubscription);
    }
    v15 = v7[1];
    if ( v14 )
      v11 = v15 | 0x80;
    else
      v11 = v15 & 0xFFFFFF7F;
    v7[1] = v11;
  }
  else
  {
    v7[1] &= ~0x80u;
    v11 = v7[1];
  }
  if ( !v6 )
    return (v11 & 0x80) != 0 ? 279 : -1073741275;
  return v5;
}

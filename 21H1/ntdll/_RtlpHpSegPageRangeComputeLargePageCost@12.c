/*
 * XREFs of _RtlpHpSegPageRangeComputeLargePageCost@12 @ 0x4B37CE0A
 * Callers:
 *     _RtlpHpSegMgrCheckOpportunisticLargePage@12 @ 0x4B37BF0E (_RtlpHpSegMgrCheckOpportunisticLargePage@12.c)
 *     _RtlpHpSegSubAllocate@20 @ 0x4B37D9D6 (_RtlpHpSegSubAllocate@20.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpSegPageRangeComputeLargePageCost(_DWORD *a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // edx
  int v5; // ecx
  unsigned int v6; // eax
  __int16 *v7; // edx
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // edi
  unsigned int v11; // esi
  int result; // eax

  v3 = a2 & *a1;
  v4 = a2 - v3;
  v5 = *(_DWORD *)(v3 + 12);
  v6 = v4 + a3 - 1;
  v7 = (__int16 *)(v5 + 2 * (v4 >> 21));
  v8 = v5 + 2 * (v6 >> 21);
  v9 = 0;
  v10 = 0;
  v11 = ((int)(v8 - (_DWORD)v7) >> 1) + 1;
  for ( result = 2; (unsigned int)v7 <= v8; ++v7 )
  {
    if ( (*v7 & 0x7FF) != 0 )
    {
      if ( *v7 < 0 )
        ++v9;
    }
    else
    {
      ++v10;
    }
  }
  if ( v9 == v11 )
    return (unsigned int)(a3 + 0x1FFFFF) >> 21 < v11;
  if ( !v9 )
    return 4 - (v10 != 0);
  return result;
}

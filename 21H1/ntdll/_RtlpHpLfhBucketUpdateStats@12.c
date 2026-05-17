/*
 * XREFs of _RtlpHpLfhBucketUpdateStats@12 @ 0x4B3763A4
 * Callers:
 *     _RtlpHpLfhContextAllocate@16 @ 0x4B376407 (_RtlpHpLfhContextAllocate@16.c)
 *     _RtlpHpSegFree@12 @ 0x4B37B8B6 (_RtlpHpSegFree@12.c)
 * Callees:
 *     _RtlpHpLfhBucketActivate@8 @ 0x4B375E85 (_RtlpHpLfhBucketActivate@8.c)
 *     _RtlpLfhBucketUsageUpdate@12 @ 0x4B377DEF (_RtlpLfhBucketUsageUpdate@12.c)
 */

BOOL __fastcall RtlpHpLfhBucketUpdateStats(int a1, int a2, int a3)
{
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // eax

  v4 = (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned int)(a2 + 7) >> 3];
  if ( (*(_DWORD *)(a1 + 4 * v4 + 128) & 1) != 0 )
  {
    v5 = RtlpLfhBucketUsageUpdate(a3);
    if ( a3 )
    {
      v6 = HIWORD(v5);
      if ( (v6 & 0x1F) > 0x10 || (unsigned __int16)v6 > 0xFF00u )
        RtlpHpLfhBucketActivate(a1, v4);
    }
  }
  return (*(_DWORD *)(a1 + 4 * v4 + 128) & 1) == 0;
}

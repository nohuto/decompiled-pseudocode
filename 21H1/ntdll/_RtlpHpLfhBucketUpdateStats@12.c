/*
 * XREFs of _RtlpHpLfhBucketUpdateStats@12 @ 0x4B3763A4
 * Callers:
 *     _RtlpHpLfhContextAllocate@16 @ 0x4B376407 (_RtlpHpLfhContextAllocate@16.c)
 *     _RtlpHpSegFree@12 @ 0x4B37B8B6 (_RtlpHpSegFree@12.c)
 * Callees:
 *     _RtlpHpLfhBucketActivate@8 @ 0x4B375E85 (_RtlpHpLfhBucketActivate@8.c)
 *     _RtlpLfhBucketUsageUpdate@12 @ 0x4B377DEF (_RtlpLfhBucketUsageUpdate@12.c)
 */

BOOL __userpurge RtlpHpLfhBucketUpdateStats@<eax>(int a1@<edx>, int a2@<ecx>, int a3@<ebx>, int a4)
{
  int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // eax

  v5 = (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned int)(a1 + 7) >> 3];
  if ( (*(_DWORD *)(a2 + 4 * v5 + 128) & 1) != 0 )
  {
    v6 = RtlpLfhBucketUsageUpdate(a4);
    if ( a4 )
    {
      v7 = HIWORD(v6);
      if ( (v7 & 0x1F) > 0x10 || (unsigned __int16)v7 > 0xFF00u )
        RtlpHpLfhBucketActivate(v5, a2, a3);
    }
  }
  return (*(_DWORD *)(a2 + 4 * v5 + 128) & 1) == 0;
}

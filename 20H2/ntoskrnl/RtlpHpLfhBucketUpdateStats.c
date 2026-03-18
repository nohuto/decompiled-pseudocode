/*
 * XREFs of RtlpHpLfhBucketUpdateStats @ 0x140309560
 * Callers:
 *     ExAllocateHeapPool @ 0x140212080 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     RtlpHpSegFree @ 0x140237FF4 (RtlpHpSegFree.c)
 *     RtlpHpLfhContextAllocate @ 0x1403094BC (RtlpHpLfhContextAllocate.c)
 * Callees:
 *     RtlpLfhBucketUsageUpdate @ 0x1403095F4 (RtlpLfhBucketUsageUpdate.c)
 *     RtlpHpLfhBucketActivate @ 0x1403098D4 (RtlpHpLfhBucketActivate.c)
 */

_BOOL8 __fastcall RtlpHpLfhBucketUpdateStats(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v3 = (unsigned __int64)(unsigned int)(a2 + 15) >> 4;
  v6 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + v3);
  if ( (*(_QWORD *)(a1 + 8 * v6 + 128) & 1) != 0 )
  {
    v7 = RtlpLfhBucketUsageUpdate(a1, *((unsigned __int8 *)RtlpLfhBucketIndexMap + v3));
    if ( a3 )
    {
      v8 = v7 >> 16;
      if ( (v8 & 0x1F) > 0x10 || (unsigned __int16)v8 > 0xFF00u )
        RtlpHpLfhBucketActivate(a1, (unsigned int)v6);
    }
  }
  return (*(_QWORD *)(a1 + 8 * v6 + 128) & 1) == 0;
}

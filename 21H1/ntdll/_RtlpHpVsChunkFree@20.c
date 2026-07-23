/*
 * XREFs of _RtlpHpVsChunkFree@20 @ 0x4B37EC44
 * Callers:
 *     _RtlpHpVsChunkSplit@24 @ 0x4B37EE0F (_RtlpHpVsChunkSplit@24.c)
 *     _RtlpHpVsContextFreeInternal@20 @ 0x4B37F546 (_RtlpHpVsContextFreeInternal@20.c)
 * Callees:
 *     _RtlpHpVsChunkAlignSplit@12 @ 0x4B37E7F6 (_RtlpHpVsChunkAlignSplit@12.c)
 *     _RtlpHpVsChunkCoalesce@16 @ 0x4B37E8AB (_RtlpHpVsChunkCoalesce@16.c)
 *     _RtlpHpVsChunkDecommit@20 @ 0x4B37EAB0 (_RtlpHpVsChunkDecommit@20.c)
 *     _RtlpHpVsFreeChunkInsert@12 @ 0x4B37F97E (_RtlpHpVsFreeChunkInsert@12.c)
 *     _RtlpHpVsSubsegmentCleanup@8 @ 0x4B37FB77 (_RtlpHpVsSubsegmentCleanup@8.c)
 */

int __fastcall RtlpHpVsChunkFree(int a1, int a2, unsigned int *a3, char a4, int a5)
{
  unsigned int *v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int i; // [esp+Ch] [ebp-8h]
  unsigned int v13; // [esp+10h] [ebp-4h] BYREF

  for ( i = 0; ; i = v13 )
  {
    v8 = RtlpHpVsChunkCoalesce(a1, a2, a3, (int *)&v13);
    v9 = *(unsigned __int16 *)(a2 + 20);
    a3 = v8;
    if ( v13 == v9 )
    {
      RtlpHpVsSubsegmentCleanup(a1, a2);
      return a2;
    }
    if ( v13 <= i || !RtlpHpVsChunkDecommit((_RTL_SRWLOCK *)a1, a2, (int)v8, a4, a5) )
      break;
  }
  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && ((unsigned int)(a3 + 4) & 0xFFF) != 0 )
  {
    v10 = RtlpHpVsChunkAlignSplit(v9, a2, (unsigned int)a3);
    if ( v10 )
      RtlpHpVsFreeChunkInsert(v10);
  }
  RtlpHpVsFreeChunkInsert(a3);
  return 0;
}

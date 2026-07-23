/*
 * XREFs of RtlpHpVsChunkFree @ 0x1402DBC1C
 * Callers:
 *     RtlpHpVsContextFreeInternal @ 0x1402DBB00 (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpVsChunkCoalesce @ 0x14028B080 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14028EF10 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1402D8268 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsChunkDecommit @ 0x1402DBD14 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsChunkAlignSplit @ 0x1402DBEE0 (RtlpHpVsChunkAlignSplit.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkFree(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r12
  unsigned int i; // r14d
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0;
  v6 = a5;
  for ( i = 0; ; i = v14 )
  {
    a3 = RtlpHpVsChunkCoalesce(a1, a2, a3, &v14);
    if ( v14 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a2);
      return a2;
    }
    if ( v14 <= i || !(unsigned int)RtlpHpVsChunkDecommit(a1, a2, a3, a4, v6) )
      break;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((a3 + 32) & 0xFFF) != 0 )
  {
    v12 = RtlpHpVsChunkAlignSplit(v11, a2, a3);
    if ( v12 )
      RtlpHpVsFreeChunkInsert((_RTL_RB_TREE *)a1, a2, v12);
  }
  RtlpHpVsFreeChunkInsert((_RTL_RB_TREE *)a1, a2, a3);
  return 0LL;
}

/*
 * XREFs of RtlpHpVsChunkFree @ 0x14023B55C
 * Callers:
 *     RtlpHpVsContextFreeInternal @ 0x14023B39C (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpVsChunkAlignSplit @ 0x140211E60 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsChunkCoalesce @ 0x140215FA0 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14023B660 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkDecommit @ 0x14023B850 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x14031A86C (RtlpHpVsSubsegmentCleanup.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r12
  unsigned int i; // r14d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0;
  v6 = a5;
  for ( i = 0; ; i = v15 )
  {
    a3 = RtlpHpVsChunkCoalesce(a1, a2, a3, &v15);
    if ( v15 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a2, v12, v13);
      return a2;
    }
    if ( v15 <= i || !(unsigned int)RtlpHpVsChunkDecommit(a1, a2, a3, a4, v6) )
      break;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((a3 + 32) & 0xFFF) != 0 && RtlpHpVsChunkAlignSplit(v11, a2, a3) )
    RtlpHpVsFreeChunkInsert(a1, a2);
  RtlpHpVsFreeChunkInsert(a1, a2);
  return 0LL;
}

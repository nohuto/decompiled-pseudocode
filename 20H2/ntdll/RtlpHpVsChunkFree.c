/*
 * XREFs of RtlpHpVsChunkFree @ 0x18010FCBC
 * Callers:
 *     RtlpHpVsContextFreeInternal @ 0x18010FDA8 (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpVsSubsegmentCleanup @ 0x180004568 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsChunkCoalesce @ 0x18002782C (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180064E18 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkAlignSplit @ 0x18010FA00 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x18010FAF4 (RtlpHpVsChunkDecommit.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkFree(unsigned __int64 a1, unsigned __int64 a2, _WORD *a3, char a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int i; // r14d
  __int64 v11; // rcx
  _WORD *v12; // rax
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  for ( i = 0; ; i = v14 )
  {
    a3 = (_WORD *)RtlpHpVsChunkCoalesce(a1, a2, (unsigned __int64)a3, &v14);
    if ( v14 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a2);
      return a2;
    }
    if ( v14 <= i || !(unsigned int)RtlpHpVsChunkDecommit(a1, a2, (__int64)a3, a4, v5) )
      break;
  }
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((unsigned __int64)(a3 + 16) & 0xFFF) != 0 )
  {
    v12 = (_WORD *)RtlpHpVsChunkAlignSplit(v11, a2, (__int64)a3);
    if ( v12 )
      RtlpHpVsFreeChunkInsert(a1, a2, v12);
  }
  RtlpHpVsFreeChunkInsert(a1, a2, a3);
  return 0LL;
}

/*
 * XREFs of RtlpHpVsContextFreeInternal @ 0x14023B39C
 * Callers:
 *     RtlpHpVsContextFreeList @ 0x14023B30C (RtlpHpVsContextFreeList.c)
 * Callees:
 *     RtlpHpVsChunkFree @ 0x14023B55C (RtlpHpVsChunkFree.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14023BA10 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14023BB80 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentFree @ 0x14031DFF0 (RtlpHpVsSubsegmentFree.c)
 *     RtlpLogHeapFailure @ 0x140591B24 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextFreeInternal(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // r10
  int v11; // eax
  int v12; // ecx
  unsigned __int64 v13; // r10
  __int64 v14; // r14
  int v16; // eax
  int v17; // ecx

  v6 = HIDWORD(*(_QWORD *)a3);
  v7 = DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(a3) ^ HIDWORD(*(_QWORD *)a3);
  v8 = 0;
  v10 = a3;
  if ( (v7 & 0xFF0000) != 0 )
  {
    v11 = a3 ^ *(_DWORD *)(a3 + 8);
LABEL_3:
    v12 = (unsigned __int8)(RtlpHpHeapGlobals ^ v11);
    goto LABEL_4;
  }
  if ( (_WORD)v7 )
  {
    v10 = a3 - 16LL * (unsigned __int16)(WORD2(a3) ^ v6 ^ WORD2(RtlpHpHeapGlobals));
    v16 = HIDWORD(v10) ^ DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v10);
    if ( (v16 & 0xFF0000) != 0 )
    {
LABEL_17:
      v11 = v10 ^ *(_DWORD *)(v10 + 8);
      goto LABEL_3;
    }
    if ( (_WORD)v16 )
    {
      v10 -= 16LL * (unsigned __int16)(WORD2(v10) ^ HIDWORD(*(_QWORD *)v10) ^ WORD2(RtlpHpHeapGlobals));
      goto LABEL_17;
    }
  }
  v12 = 0;
LABEL_4:
  v13 = (v10 - (unsigned int)(v12 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v13 + 32) ^ *(_WORD *)(v13 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    LODWORD(a3) = v13;
    v17 = 18;
LABEL_21:
    RtlpLogHeapFailure(v17, a1 ^ *(_DWORD *)(a1 + 128), a3, 0, 0LL, 0LL);
    return v8;
  }
  if ( ((DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(a3) ^ (unsigned int)v6) & 0xFF0000) == 0 )
  {
    v17 = 8;
    goto LABEL_21;
  }
  v14 = RtlpHpVsChunkFree(a1, v13, a3, a4, a5);
  if ( v14 )
  {
    if ( (a4 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a5);
    RtlpHpVsSubsegmentFree(a1, v14, a4);
    if ( (a4 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), a5);
  }
  return 1;
}

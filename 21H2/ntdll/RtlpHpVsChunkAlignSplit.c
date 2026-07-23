/*
 * XREFs of RtlpHpVsChunkAlignSplit @ 0x18010F860
 * Callers:
 *     RtlpHpVsContextFree @ 0x180028500 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180028CD0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x180029280 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x18010FB1C (RtlpHpVsChunkFree.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpVsChunkAlignSplit(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r9d
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // r9d
  unsigned __int64 v9; // r10

  v4 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  v5 = (a3 + 4111) & 0xFFFFFFFFFFFFF000uLL;
  if ( v5 - a3 >= 16 * (unsigned __int64)v4 )
    return 0LL;
  v6 = v5 - 32;
  v7 = (__int64)(v6 - a3) >> 4;
  v8 = v4 - v7;
  *(_WORD *)(a3 + 2) = v7 ^ WORD1(RtlpHpHeapGlobals) ^ WORD1(a3);
  *(_OWORD *)v6 = 0LL;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_WORD *)(v6 + 2) = v8;
  *(_WORD *)(v6 + 4) = v7;
  *(_QWORD *)v6 ^= v6 ^ RtlpHpHeapGlobals;
  v9 = v6 + 16LL * v8;
  if ( v9 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    *(_WORD *)(v9 + 4) = WORD2(v9) ^ v8 ^ WORD2(RtlpHpHeapGlobals);
  return v6;
}

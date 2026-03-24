/*
 * XREFs of KiRemoveSchedulingGroupQueue @ 0x1402EB83C
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1402587E0 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiComputeGroupSchedulingRank @ 0x140259C40 (KiComputeGroupSchedulingRank.c)
 *     KeSetSchedulingGroupRankBias @ 0x140288488 (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x1402887DC (KiResetScb.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402EB78C (KiRemoveThreadFromScbQueue.c)
 *     KiResortScbQueue @ 0x1402EBF2C (KiResortScbQueue.c)
 *     KiSwapThread @ 0x1403466D0 (KiSwapThread.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiRemoveSchedulingGroupQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v5; // rsi
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax

  v4 = a3;
  v5 = a1 + 31856;
  do
  {
    v6 = (__int64 *)(a2 + 408);
    v7 = *(_QWORD *)(a2 + 408);
    v8 = v7 + 392;
    if ( !v7 )
      v8 = v5;
    if ( v4 )
      *(_QWORD *)(a2 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 64);
    *(_BYTE *)(a2 + 112) &= ~1u;
    result = RtlRbRemoveNode(v8, a2 + 88, a3, a4);
    a2 = *v6;
    if ( !*v6 || (*(_BYTE *)(a2 + 112) & 1) == 0 )
      break;
    result = *(_QWORD *)(a2 + 392);
    if ( (*(_BYTE *)(a2 + 400) & 1) == 0 )
      goto LABEL_12;
    if ( result )
    {
      result ^= a2 + 392;
LABEL_12:
      if ( result )
        return result;
    }
  }
  while ( !*(_WORD *)(a2 + 114) );
  return result;
}

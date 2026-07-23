/*
 * XREFs of KiComputeGroupSchedulingRank @ 0x14027B1B0
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140279D50 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x1402058F0 (KiCheckForEffectivePriorityChange.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x14027B610 (KiChargeSchedulingGroupCycleTime.c)
 *     KiRemoveSchedulingGroupQueue @ 0x14029CB8C (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x14029D27C (KiResortScbQueue.c)
 */

void __fastcall KiComputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  __int64 v4; // rbx
  char v7; // al
  char v8; // al
  char v9; // r8
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r10
  char v12; // cl
  __int64 v13; // r8
  unsigned int v14; // ecx
  volatile signed __int32 *v15; // rax
  unsigned __int64 v16; // r8

  v3 = *(_BYTE *)(a3 + 112);
  v4 = a3;
  v7 = v3;
  if ( (v3 & 0x12) != 0 )
    goto LABEL_4;
  v8 = KiChargeSchedulingGroupCycleTime(a1, a3);
  v3 = *(_BYTE *)(v4 + 112);
  if ( !v8 )
  {
    v7 = *(_BYTE *)(v4 + 112);
LABEL_4:
    v9 = 0;
    goto LABEL_5;
  }
  v3 |= 2u;
  v9 = 1;
  *(_BYTE *)(v4 + 112) = v3;
  v7 = v3;
LABEL_5:
  v10 = *(_QWORD *)v4;
  v11 = *(_QWORD *)(v4 + 8);
  if ( (v3 & 0x10) != 0 && v10 >= v11
    || (v12 = v7, (v3 & 0x10) == 0) && (v9 || v11 != *(_QWORD *)(v4 + 16) && v10 >= v11) )
  {
    v13 = *(unsigned int *)(a1 + 8);
    v14 = *(_QWORD *)(v4 + 32) / ((unsigned __int64)(KiCycleDivisorLongTerm * v13) >> 7) + 1;
    v15 = *(volatile signed __int32 **)(v4 + 120);
    *(_DWORD *)(v4 + 116) = v14;
    if ( v15 )
    {
      _InterlockedExchangeAdd(v15, v14);
      v11 = *(_QWORD *)(v4 + 8);
      v3 = *(_BYTE *)(v4 + 112);
    }
    v16 = v11 + ((unsigned __int64)(KiCycleDivisorShortTerm * v13) >> 7);
    *(_BYTE *)(v4 + 112) = v3 | 4;
    *(_QWORD *)(v4 + 24) = v16;
    KiCheckForEffectivePriorityChange(a2, v4);
    v12 = *(_BYTE *)(v4 + 112);
  }
  if ( (v12 & 1) != 0 )
  {
    LOBYTE(a3) = 1;
    if ( (v12 & 2) != 0 )
      KiRemoveSchedulingGroupQueue(a2, v4, a3);
    else
      KiResortScbQueue(a2, v4, a3);
  }
  if ( (*(_BYTE *)(v4 + 112) & 4) != 0 && !*(_BYTE *)(a2 + 32409) )
  {
    _InterlockedOr64(
      &qword_140C111F8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] >> 6],
      1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] & 0x3F));
    *(_BYTE *)(a2 + 32409) = 1;
  }
}

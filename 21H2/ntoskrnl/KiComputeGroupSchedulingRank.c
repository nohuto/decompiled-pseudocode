/*
 * XREFs of KiComputeGroupSchedulingRank @ 0x140259C40
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1402587E0 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x1403466D0 (KiSwapThread.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x14025A0A0 (KiChargeSchedulingGroupCycleTime.c)
 *     KiCheckForEffectivePriorityChange @ 0x140288750 (KiCheckForEffectivePriorityChange.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402EB83C (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x1402EBF2C (KiResortScbQueue.c)
 */

unsigned __int64 __fastcall KiComputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int8 v3; // r9
  __int64 *v4; // rbx
  unsigned __int64 result; // rax
  char v8; // al
  char v9; // r8
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r10
  char v12; // cl
  __int64 v13; // r8
  unsigned int v14; // ecx
  volatile signed __int32 *v15; // rax
  unsigned __int64 v16; // r8

  v3 = *((_BYTE *)a3 + 112);
  v4 = a3;
  result = v3;
  if ( (v3 & 0x12) != 0 )
    goto LABEL_4;
  v8 = KiChargeSchedulingGroupCycleTime(a1, a3);
  v3 = *((_BYTE *)v4 + 112);
  if ( !v8 )
  {
    result = v3;
LABEL_4:
    v9 = 0;
    goto LABEL_5;
  }
  v3 |= 2u;
  v9 = 1;
  *((_BYTE *)v4 + 112) = v3;
  result = v3;
LABEL_5:
  v10 = *v4;
  v11 = v4[1];
  if ( (v3 & 0x10) != 0 && v10 >= v11 || (v12 = result, (v3 & 0x10) == 0) && (v9 || v11 != v4[2] && v10 >= v11) )
  {
    v13 = *(unsigned int *)(a1 + 8);
    v14 = v4[4] / ((unsigned __int64)(KiCycleDivisorLongTerm * v13) >> 7) + 1;
    v15 = (volatile signed __int32 *)v4[15];
    *((_DWORD *)v4 + 29) = v14;
    if ( v15 )
    {
      _InterlockedExchangeAdd(v15, v14);
      v11 = v4[1];
      v3 = *((_BYTE *)v4 + 112);
    }
    v16 = v11 + ((unsigned __int64)(KiCycleDivisorShortTerm * v13) >> 7);
    *((_BYTE *)v4 + 112) = v3 | 4;
    v4[3] = v16;
    result = KiCheckForEffectivePriorityChange(a2, v4);
    v12 = *((_BYTE *)v4 + 112);
  }
  if ( (v12 & 1) != 0 )
  {
    LOBYTE(a3) = 1;
    if ( (v12 & 2) != 0 )
      result = KiRemoveSchedulingGroupQueue(a2, v4, a3);
    else
      result = KiResortScbQueue(a2, v4, a3);
  }
  if ( (v4[14] & 4) != 0 && !*(_BYTE *)(a2 + 32409) )
  {
    result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] >> 6;
    _InterlockedOr64(
      &qword_140C11218[result],
      1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] & 0x3F));
    *(_BYTE *)(a2 + 32409) = 1;
  }
  return result;
}

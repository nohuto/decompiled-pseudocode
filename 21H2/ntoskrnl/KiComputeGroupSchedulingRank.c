/*
 * XREFs of KiComputeGroupSchedulingRank @ 0x14022A040
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140290B9C (KiGroupSchedulingQuantumEnd.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x140208284 (KiCheckForEffectivePriorityChange.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140210CE4 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140210D6C (KiResortScbQueue.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20 (KeInterlockedSetProcessorAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiComputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned __int64 v7; // rcx
  bool v8; // si
  char v9; // al
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  char v13; // al
  struct _KDPC *v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // ecx
  volatile signed __int32 *v17; // rax
  bool v18; // zf
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v23; // r8
  int v24; // eax

  v3 = *(_BYTE *)(a3 + 112);
  if ( (v3 & 0x10) != 0 || (v3 & 2) != 0 )
    goto LABEL_5;
  v7 = *(_QWORD *)(a3 + 40) - *(_QWORD *)a3;
  *(_QWORD *)(a3 + 40) = *(_QWORD *)a3;
  v8 = (__int64)(v7 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v7)) <= 0;
  if ( *(__int64 *)(a1 + 32) > 0
    && (__int64)(v7 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), v7)) <= 0 )
  {
    v14 = (struct _KDPC *)_InterlockedExchange64((volatile __int64 *)(a1 + 72), 0LL);
    if ( v14 )
      KeInsertQueueDpc(v14, 0LL, 0LL);
  }
  if ( !v8 )
  {
LABEL_5:
    v9 = 0;
  }
  else
  {
    *(_BYTE *)(a3 + 112) |= 2u;
    v9 = 1;
  }
  v10 = *(unsigned __int8 *)(a3 + 112);
  v11 = *(_QWORD *)a3;
  v12 = *(_QWORD *)(a3 + 8);
  if ( (v10 & 0x10) != 0 )
  {
    if ( v11 < v12 )
      goto LABEL_9;
  }
  else if ( !v9 && (v12 == *(_QWORD *)(a3 + 16) || v11 < v12) )
  {
    goto LABEL_9;
  }
  v15 = *(unsigned int *)(a1 + 8);
  v16 = *(_QWORD *)(a3 + 32) / ((unsigned __int64)(KiCycleDivisorLongTerm * v15) >> 7) + 1;
  v17 = *(volatile signed __int32 **)(a3 + 120);
  *(_DWORD *)(a3 + 116) = v16;
  if ( v17 )
  {
    _InterlockedExchangeAdd(v17, v16);
    LOBYTE(v10) = *(_BYTE *)(a3 + 112);
  }
  *(_QWORD *)(a3 + 24) = *(_QWORD *)(a3 + 8) + ((unsigned __int64)(KiCycleDivisorShortTerm * v15) >> 7);
  *(_BYTE *)(a3 + 112) = v10 | 4;
  KiCheckForEffectivePriorityChange(a2, a3);
LABEL_9:
  v13 = *(_BYTE *)(a3 + 112);
  if ( (v13 & 1) != 0 )
  {
    if ( (v13 & 2) != 0 )
      KiRemoveSchedulingGroupQueue(a2, a3, 1);
    else
      KiResortScbQueue(a2, a3, 1);
  }
  if ( (*(_BYTE *)(a3 + 112) & 4) != 0 && !*(_BYTE *)(a2 + 33113) )
  {
    KeInterlockedSetProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, *(unsigned int *)(a2 + 36), v10, v11);
    v18 = KiClockTimerPerCpuTickScheduling == 0;
    *(_BYTE *)(a2 + 33113) = 1;
    if ( !v18 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      *(_BYTE *)(a2 + 37092) &= ~2u;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
}

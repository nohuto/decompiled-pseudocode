/*
 * XREFs of KiGroupSchedulingGenerationEnd @ 0x1402599DC
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1402587E0 (KiGroupSchedulingQuantumEnd.c)
 *     KeTransitionProcessorParkState @ 0x1405254AC (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022E080 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x140231260 (KiStartThreadCycleAccumulation.c)
 *     KiIsThreadRankNonZero @ 0x14024D450 (KiIsThreadRankNonZero.c)
 *     KiSetProcessorIdle @ 0x14025721C (KiSetProcessorIdle.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140259CF0 (KiTransitionSchedulingGroupGeneration.c)
 *     KiAddThreadToPrcbQueue @ 0x14029C210 (KiAddThreadToPrcbQueue.c)
 *     KiSelectReadyThread @ 0x140347900 (KiSelectReadyThread.c)
 *     KiSetSchedulerAssistPriority @ 0x140520954 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KiGroupSchedulingGenerationEnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v4; // di
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // ebp
  __int64 v11; // rcx
  __int64 ready; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  char v15; // cl
  int v16; // r8d
  char v17; // cl
  __int64 v18; // rax
  bool v19; // zf
  char v20; // r8
  int v21; // edx
  bool v22; // al
  bool IsThreadRankNonZero; // al
  __int64 v24; // rdx
  __int64 v25; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 24);
  if ( !(_BYTE)a3 )
  {
    _disable();
    KiEndThreadCycleAccumulation(a1, *(_QWORD *)(a1 + 8), 0LL);
    _enable();
  }
  LOBYTE(a3) = v4;
  result = KiTransitionSchedulingGroupGeneration(a1, a2, a3);
  if ( !v4 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    v10 = 0;
    if ( v9 )
    {
      if ( v9 == *(_QWORD *)(a1 + 24) )
        goto LABEL_9;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (*(_BYTE *)(v3 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(v3, (struct _KPRCB *)a1), v15 = 1, !IsThreadRankNonZero) )
      {
        v15 = *(_BYTE *)(v3 + 195);
      }
      **(_BYTE **)(a1 + 56) = v15;
      if ( *(_QWORD *)(a1 + 33976) )
      {
        v24 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v3 != *(_QWORD *)(a1 + 24) )
          v24 = (unsigned int)v15;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v24, 0LL);
      }
      *(_BYTE *)(v9 + 388) = 1;
      v16 = *(char *)(v9 + 195);
      *(_DWORD *)(v9 + 436) = MEMORY[0xFFFFF78000000320];
      KiAddThreadToPrcbQueue(a1, v9, v16, 1, 0);
      v10 = 1;
    }
    if ( v9 == *(_QWORD *)(a1 + 24) )
      goto LABEL_9;
    if ( v3 == v5 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = (unsigned int)(*(char *)(v3 + 195) + 1);
      if ( (int)v11 > 31 )
        goto LABEL_9;
    }
    ready = KiSelectReadyThread(v11, a1);
    v13 = ready;
    if ( ready )
    {
      if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
      {
        v22 = KiIsThreadRankNonZero(ready, (struct _KPRCB *)a1);
        v17 = 1;
        if ( !v22 )
          v17 = *(_BYTE *)(v13 + 195);
      }
      else
      {
        v17 = *(_BYTE *)(ready + 195);
      }
      **(_BYTE **)(a1 + 56) = v17;
      v18 = *(_QWORD *)(a1 + 33976);
      if ( v18 )
      {
        v25 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v13 != *(_QWORD *)(a1 + 24) )
          v25 = (unsigned int)v17;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v25, 0LL);
        v18 = *(_QWORD *)(a1 + 33976);
      }
      v19 = v13 == *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = v13;
      if ( v18 )
        *(_BYTE *)(v18 + 16) = v19;
      if ( *(_BYTE *)(v13 + 388) == 1 )
        *(_DWORD *)(v13 + 132) = *(_DWORD *)(v13 + 132) - *(_DWORD *)(v13 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v13 + 388) = 3;
      --v10;
    }
LABEL_9:
    if ( v3 != v5 )
    {
LABEL_10:
      _disable();
      result = KiStartThreadCycleAccumulation(a1, v3, v3 == v5);
      _enable();
      return result;
    }
    if ( v10 > 0 )
    {
      if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
      {
        v20 = 1;
        v21 = 1;
LABEL_36:
        KiSetProcessorIdle(a1, v21, v20);
      }
    }
    else if ( v10 < 0 && (*(_BYTE *)(a1 + 35) & 1) == 0 )
    {
      v20 = 0;
      v21 = 0;
      goto LABEL_36;
    }
    v14 = *(_QWORD *)(a1 + 16);
    if ( !v14 || v14 == *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
        goto LABEL_10;
    }
    else if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
    {
      goto LABEL_10;
    }
    __fastfail(0x1Eu);
  }
  return result;
}
